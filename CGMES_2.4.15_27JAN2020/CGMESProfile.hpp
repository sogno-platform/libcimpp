#ifndef CGMESPROFILE_HPP
#define CGMESPROFILE_HPP
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>

enum class CGMESProfile : unsigned short
{
	EQ,
	DL,
	DY,
	EQ_BD,
	GL,
	SSH,
	SV,
	TP,
	TP_BD,
};

const CGMESProfile UnknownProfile = static_cast<CGMESProfile>(-1);

const std::list<CGMESProfile>& getProfileList();

std::string getProfileShortName(CGMESProfile profile);
std::string getProfileLongName(CGMESProfile profile);
const std::list<std::string>& getProfileURIs(CGMESProfile profile);

CGMESProfile getProfileFromShortName(const std::string& name);
CGMESProfile getProfileFromLongName(const std::string& name);

#endif
