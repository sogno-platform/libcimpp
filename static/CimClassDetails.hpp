#ifndef CIMCLASSDETAILS_HPP
#define CIMCLASSDETAILS_HPP

#include <list>
#include <map>
#include <string>

#include "CGMESProfile.hpp"

class BaseClass;
class AttrDetails;

class CimClassDetails
{
public:
	CimClassDetails(
		const BaseClass& obj,
		std::string classNamespace,
		std::list<CGMESProfile> possibleProfiles,
		CGMESProfile recommendedProfile);

	const std::string ClassNamespace;
	const std::map<std::string, AttrDetails> AttrDetailsMap;
	const std::list<std::string> AttrNamesList;
	const std::list<CGMESProfile> PossibleProfiles;
	const CGMESProfile RecommendedProfile;
	const std::list<CGMESProfile> PossibleProfilesIncludingAttributes;

	const std::string& getAttributeNamespaceUrl(const std::string& attrName) const;
	const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const;

private:
	static std::list<std::string> constructAttrNamesList(const std::map<std::string, AttrDetails>& attrDetailsMap);
	static std::list<CGMESProfile> constructPossibleProfilesIncludingAttributes(
		const std::list<CGMESProfile>& possibleProfiles,
		const std::map<std::string, AttrDetails>& attrDetailsMap);

public:
	static const std::list<std::string> UnknownAttributes;
	static const std::string UnknownNamespace;
	static const std::list<CGMESProfile> UnknownProfiles;
};

class AttrDetails
{
public:
	AttrDetails(std::string n, std::list<CGMESProfile> c) : nameSpace(n), profiles(c) {}
	const std::string nameSpace;
	const std::list<CGMESProfile> profiles;
};
#endif
