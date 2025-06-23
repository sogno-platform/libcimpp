#include <iostream>
#include <string>
#include "CIMModel.hpp"
#include "CimConstants.hpp"
#include "BaseClass.hpp"
#include "IdentifiedObject.hpp"
#include "version.hpp"

// forward declerations
static std::string format_name(std::string name);
static std::size_t utf8_code_point_len(const std::string& txt);
static std::size_t utf8_code_point_len(const char* ptr);
static void utf8_code_point_resize(std::string& txt, std::size_t new_len, char fill);

int main(int argc, char** argv)
{
	if(argc < 2)
	{
		std::cout << "Usage: example <cim file> [additional cim files]" << std::endl;
		std::cout << "Provide at least one cim file" << std::endl;
		std::cout << "Version: libcimpp " << RELEASE_VERSION << " (" << CimVersion << ")" << std::endl;
		return 1;
	}

	CIMModel someModel;
	someModel.setDependencyCheckOff();

	for(int i = 1; i < argc; i++)
	{
		if(!someModel.addCIMFile(argv[i]))
		{
			std::cout << "File ' " << argv[i] << " ' is not XML or does not exist" << std::endl;
		};
	}

	try
	{
		someModel.parseFiles();
	}
	catch(std::runtime_error &exp)
	{
		std::cerr << exp.what() << std::endl;
	}


	for (BaseClass* Object : someModel.Objects)
	{
		if(CIMPP::IdentifiedObject* IdObj = dynamic_cast<CIMPP::IdentifiedObject*>(Object))
		{
			if (IdObj->name.initialized)
			{
				static unsigned int i = 0;
				std::string outputName = format_name(IdObj->name);
				std::cout << outputName;
				i++;
				if (i % 5 == 0) {
					std::cout << std::endl;
				}
			}
		}
	}
	std::cout << std::endl;
	return 0;
}

static std::string format_name(std::string name)
{
	if (utf8_code_point_len(name) > 12)
	{
		utf8_code_point_resize(name, 10, ' ');
		name += "..  ";
	}
	else
	{
		utf8_code_point_resize(name, 14, ' ');
	}
	return name;
}

static std::size_t utf8_code_point_len(const std::string& txt)
{
	return utf8_code_point_len(txt.c_str());
}

static std::size_t utf8_code_point_len(const char* ptr)
{
	size_t len = 0;
	for (; *ptr != 0; ++ptr)
	{
		if ((*ptr & 0b11000000) != 0b10000000)
		{
			++len;
		}
	}
	return len;
}

static void utf8_code_point_resize(std::string& txt, std::size_t new_len, char fill)
{
	const char* ptr = txt.c_str();
	size_t len = 0;
	for (; *ptr != 0 && len <= new_len; ++ptr)
	{
		if ((*ptr & 0b11000000) != 0b10000000)
		{
			++len;
		}
	}
	if (len <= new_len)
	{
		new_len += txt.length() - len;
	}
	else
	{
		new_len = ptr - 1 - txt.c_str();
	}
	txt.resize(new_len, fill);
}

static bool utf8_check_valid(const char* ptr, std::size_t* p_len = nullptr)
{
	bool valid = true;
	size_t len = 0;
	for (; *ptr != 0; ++ptr)
	{
		if ((*ptr & 0b11000000) != 0b10000000)
		{
			++len;
			size_t inner_code_point_len = 0;
			if ((*ptr & 0b11100000) == 0b11000000)  // 110xxxxx
			{
				inner_code_point_len = 1;
			}
			if ((*ptr & 0b11110000) == 0b11100000)  // 1110xxxx
			{
				inner_code_point_len = 2;
			}
			if ((*ptr & 0b11111000) == 0b11110000)  // 11110xxx
			{
				inner_code_point_len = 3;
			}
			for (size_t idx = 0; idx < inner_code_point_len; ++idx, ++ptr)
			{
				if ((*ptr & 0b11000000) != 0b10000000)
				{
					valid = false;
				}
				if (*ptr == 0)
				{
					break;
				}
			}
		}
		else
		{
			valid = false;
		}
	}
	if (p_len != nullptr)
	{
		*p_len = len;
	}
	return valid;
}
