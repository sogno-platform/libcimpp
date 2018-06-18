#ifndef ALIASES_HPP
#define ALIASES_HPP

#include <cstdlib>
#include <cstring>
#include <fstream>
#include <regex>
#include <unordered_map>

#include "IEC61970/IEC61970CIMVersion.h"

static std::list<std::string> search_paths = {
	"./",
	"${CIMPP_ALIASDIR}/",
#ifdef __linux__
	"/usr/share/cimpp/",
	"/usr/local/share/cimpp/",
	"/usr/share/cimpp/${CIM_VERSION}/",
	"/usr/local/share/cimpp/${CIM_VERSION}/",
	"${HOME}/.cimpp/"
#elif defined(_WIN32)
	"${APPDATA}\\CIMpp\\",
	"${APPDATA}\\CIMpp\\${CIM_VERSION}\\"
#endif
};

// Update the input string.
static std::string expand_env_variables(std::string str)
{
	static std::regex env("\\$\\{([^}]+)\\}");
	std::smatch match;
#ifdef __linux__
	while (std::regex_search(str, match, env)) {
		const char *s = getenv(match[1].str().c_str());
		const std::string var(s == NULL ? "" : s);
		str.replace(match[0].first, match[0].second, var);
	}
#elif defined(_WIN32)
	while (std::regex_search(str, match, env)) {
		char *pValue;
		size_t len;
		_dupenv_s(&pValue, &len, match[1].str().c_str());
		const std::string var(pValue == NULL ? "" : pValue);
		str.replace(match[0].first, match[0].second, var);
	}
#endif
	return str;
}

static std::ifstream find_aliases(const std::string &filename)
{
	std::ifstream file;
	std::string path;
	std::string::size_type pos;

	// Set CIM_DIR variable if not set
	std::string cim_dir = IEC61970::IEC61970CIMVersion::version;

	pos = cim_dir.find("IEC61970CIM");
	if (pos == 0)
		cim_dir.erase(0, 11);
#ifdef __linux__
	setenv("CIM_VERSION", cim_dir.c_str(), 1);
#elif defined(_WIN32)
	std::string cim_version = "CIM_VERSION=" + cim_dir;
	_putenv(cim_version.c_str());
#endif

	for (std::string &path : search_paths) {
		std::string expanded_path = expand_env_variables(path);

		file.open(expanded_path + filename);
		if (file.good())
			return file;
	}

	return file;
}

template<typename T>
void load_aliases(std::unordered_map<std::string, T> &map, const std::string &filename)
{
	std::ifstream file = find_aliases(filename);

	if(file.good() && file.is_open())
	{
		std::string line;
		std::regex expr("^([a-zA-Z0-9:.]*)[\t ,;]+([a-zA-Z0-9:.]*)$");
		std::smatch m;
		typename std::unordered_map<std::string, T>::iterator it;

		while (std::getline(file, line))
		{
			if(std::regex_match(line, m, expr))
			{
				it = map.find(m[1]);
				if(it != map.end())
				{
					map.insert(std::make_pair(m[2], it->second));
				}
			}
		}
	}
}

#endif // ALIASES_HPP
