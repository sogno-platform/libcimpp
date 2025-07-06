#include "CimClassDetails.hpp"

#include "BaseClass.hpp"

CimClassDetails::CimClassDetails(
	const BaseClass& obj,
	std::string classNamespace,
	std::list<CGMESProfile> possibleProfiles,
	CGMESProfile recommendedProfile)
:
	ClassNamespace(classNamespace),
	AttrDetailsMap(obj.allAttrDetailsMap()),
	AttrNamesList(constructAttrNamesList(AttrDetailsMap)),
	PossibleProfiles(possibleProfiles),
	RecommendedProfile(recommendedProfile),
	PossibleProfilesIncludingAttributes(constructPossibleProfilesIncludingAttributes(PossibleProfiles, AttrDetailsMap))
{
}

const std::string& CimClassDetails::getAttributeNamespaceUrl(const std::string& attrName) const
{
	if (AttrDetailsMap.find(attrName) != AttrDetailsMap.end())
	{
		return AttrDetailsMap.at(attrName).nameSpace;
	}
	return UnknownNamespace;
}

const std::list<CGMESProfile>& CimClassDetails::getPossibleAttributeProfiles(const std::string& attrName) const
{
	if (AttrDetailsMap.find(attrName) != AttrDetailsMap.end())
	{
		return AttrDetailsMap.at(attrName).profiles;
	}
	return UnknownProfiles;
}

std::list<std::string> CimClassDetails::constructAttrNamesList(const std::map<std::string, AttrDetails>& attrDetailsMap)
{
	std::list<std::string> list;
	for (const auto& nameAndDetails : attrDetailsMap)
	{
		list.push_back(nameAndDetails.first);
	}
	return list;
}

std::list<CGMESProfile> CimClassDetails::constructPossibleProfilesIncludingAttributes(
	const std::list<CGMESProfile>& possibleProfiles,
	const std::map<std::string, AttrDetails>& attrDetailsMap)
{
	auto profiles = possibleProfiles;
	for (const auto& nameAndDetails : attrDetailsMap)
	{
		const auto& attrProfiles = nameAndDetails.second.profiles;
		profiles.insert(profiles.end(), attrProfiles.begin(), attrProfiles.end());
	}
	return profiles;
}

const std::list<std::string> CimClassDetails::UnknownAttributes;
const std::string CimClassDetails::UnknownNamespace;
const std::list<CGMESProfile> CimClassDetails::UnknownProfiles;
