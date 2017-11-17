#ifndef ALIASES_HPP
#define ALIASES_HPP

#include <fstream>
#include <regex>
#include <unordered_map>

#include "IEC61970/IEC61970CIMVersion.h"

static std::string search_paths[] = {
	"./",

	"/usr/share/cimpp/"
	"/usr/local/share/cimpp/",
};

static std::ifstream find_aliases(const std::string &filename)
{
	std::ifstream file;
	std::string path, subdir;
	std::string::size_type pos;

	// Search for filename in the list of hard-coded search paths
	subdir = IEC61970::IEC61970CIMVersion::version;

	pos = subdir.find("IEC61970CIM");
	if (pos == 0)
		subdir.erase(0, 11);

	file.open(filename);
	if (file.good())
		return file;

#ifdef __linux__
	path = "/usr/share/cimpp/";

	file.open(path + subdir + "/" + filename);
	if (file.good())
		return file;

	path = "/usr/local/share/cimpp/";

	file.open(path + subdir + "/" + filename);
	if (file.good())
		return file;
#endif // __linux__

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
	else
	{
		std::cerr << "Aliases from '" << filename << "' could not be loaded" << std::endl;
	}
}

#endif // ALIASES_HPP
