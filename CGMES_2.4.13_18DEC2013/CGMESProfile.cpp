/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CGMESProfile.hpp"

#include <list>
#include <map>
#include <string>

static const std::list<CGMESProfile> ProfileList =
{
	CGMESProfile::EQ,
	CGMESProfile::DL,
	CGMESProfile::DY,
	CGMESProfile::EQ_BD,
	CGMESProfile::GL,
	CGMESProfile::SSH,
	CGMESProfile::SV,
	CGMESProfile::TP,
	CGMESProfile::TP_BD,
};

static const std::map<CGMESProfile, std::string> ProfileShortNames =
{
	{ CGMESProfile::EQ, "EQ" },
	{ CGMESProfile::DL, "DL" },
	{ CGMESProfile::DY, "DY" },
	{ CGMESProfile::EQ_BD, "EQ_BD" },
	{ CGMESProfile::GL, "GL" },
	{ CGMESProfile::SSH, "SSH" },
	{ CGMESProfile::SV, "SV" },
	{ CGMESProfile::TP, "TP" },
	{ CGMESProfile::TP_BD, "TP_BD" },
};

static const std::map<CGMESProfile, std::string> ProfileLongNames =
{
	{ CGMESProfile::EQ, "Equipment" },
	{ CGMESProfile::DL, "DiagramLayout" },
	{ CGMESProfile::DY, "Dynamics" },
	{ CGMESProfile::EQ_BD, "EquipmentBoundary" },
	{ CGMESProfile::GL, "GeographicalLocation" },
	{ CGMESProfile::SSH, "SteadyStateHypothesis" },
	{ CGMESProfile::SV, "StateVariables" },
	{ CGMESProfile::TP, "Topology" },
	{ CGMESProfile::TP_BD, "TopologyBoundary" },
};

static const std::map<CGMESProfile, std::list<std::string>> ProfileURIs =
{
	{ CGMESProfile::EQ, { "http://entsoe.eu/CIM/EquipmentCore/3/1", "http://entsoe.eu/CIM/EquipmentOperation/3/1", "http://entsoe.eu/CIM/EquipmentShortCircuit/3/1", } },
	{ CGMESProfile::DL, { "http://entsoe.eu/CIM/DiagramLayout/3/1", } },
	{ CGMESProfile::DY, { "http://entsoe.eu/CIM/Dynamics/3/1", } },
	{ CGMESProfile::EQ_BD, { "http://entsoe.eu/CIM/EquipmentBoundary/3/1", "http://entsoe.eu/CIM/EquipmentBoundaryOperation/3/1", } },
	{ CGMESProfile::GL, { "http://entsoe.eu/CIM/GeographicalLocation/2/1", } },
	{ CGMESProfile::SSH, { "http://entsoe.eu/CIM/SteadyStateHypothesis/1/1", } },
	{ CGMESProfile::SV, { "http://entsoe.eu/CIM/StateVariables/4/1", } },
	{ CGMESProfile::TP, { "http://entsoe.eu/CIM/Topology/4/1", } },
	{ CGMESProfile::TP_BD, { "http://entsoe.eu/CIM/TopologyBoundary/3/1", } },
};

static const std::string CimNamespace = "http://iec.ch/TC57/2013/CIM-schema-cim16#";

const std::list<CGMESProfile>&
getProfileList()
{
	return ProfileList;
}

std::string
getProfileShortName(CGMESProfile profile)
{
	auto it = ProfileShortNames.find(profile);
	if (it != ProfileShortNames.end())
	{
		return it->second;
	}
	return ""; // unknown profile
}

std::string
getProfileLongName(CGMESProfile profile)
{
	auto it = ProfileLongNames.find(profile);
	if (it != ProfileLongNames.end())
	{
		return it->second;
	}
	return ""; // unknown profile
}

const std::list<std::string>&
getProfileURIs(CGMESProfile profile)
{
	static std::list<std::string> empty_list;
	auto it = ProfileURIs.find(profile);
	if (it != ProfileURIs.end())
	{
		return it->second;
	}
	return empty_list; // unknown profile
}

CGMESProfile
getProfileFromShortName(const std::string& name)
{
	for (const auto& profile : ProfileShortNames)
	{
		if (name == profile.second)
		{
			return profile.first;
		}
	}
	return UnknownProfile;
}

CGMESProfile
getProfileFromLongName(const std::string& name)
{
	for (const auto& profile : ProfileLongNames)
	{
		if (name == profile.second)
		{
			return profile.first;
		}
	}
	return UnknownProfile;
}

std::string
getCimNamespace()
{
	return CimNamespace;
}
