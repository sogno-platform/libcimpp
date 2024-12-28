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
	CGMESProfile::EQBD,
	CGMESProfile::GL,
	CGMESProfile::OP,
	CGMESProfile::SC,
	CGMESProfile::SSH,
	CGMESProfile::SV,
	CGMESProfile::TP,
};

static const std::map<CGMESProfile, std::string> ProfileShortNames =
{
	{ CGMESProfile::EQ, "EQ" },
	{ CGMESProfile::DL, "DL" },
	{ CGMESProfile::DY, "DY" },
	{ CGMESProfile::EQBD, "EQBD" },
	{ CGMESProfile::GL, "GL" },
	{ CGMESProfile::OP, "OP" },
	{ CGMESProfile::SC, "SC" },
	{ CGMESProfile::SSH, "SSH" },
	{ CGMESProfile::SV, "SV" },
	{ CGMESProfile::TP, "TP" },
};

static const std::map<CGMESProfile, std::string> ProfileLongNames =
{
	{ CGMESProfile::EQ, "CoreEquipment" },
	{ CGMESProfile::DL, "DiagramLayout" },
	{ CGMESProfile::DY, "Dynamics" },
	{ CGMESProfile::EQBD, "EquipmentBoundary" },
	{ CGMESProfile::GL, "GeographicalLocation" },
	{ CGMESProfile::OP, "Operation" },
	{ CGMESProfile::SC, "ShortCircuit" },
	{ CGMESProfile::SSH, "SteadyStateHypothesis" },
	{ CGMESProfile::SV, "StateVariables" },
	{ CGMESProfile::TP, "Topology" },
};

static const std::map<CGMESProfile, std::list<std::string>> ProfileURIs =
{
	{ CGMESProfile::EQ, { "http://iec.ch/TC57/ns/CIM/CoreEquipment-EU/3.0", } },
	{ CGMESProfile::DL, { "http://iec.ch/TC57/ns/CIM/DiagramLayout-EU/3.0", } },
	{ CGMESProfile::DY, { "http://iec.ch/TC57/ns/CIM/Dynamics-EU/1.0", } },
	{ CGMESProfile::EQBD, { "http://iec.ch/TC57/ns/CIM/EquipmentBoundary-EU/3.0", } },
	{ CGMESProfile::GL, { "http://iec.ch/TC57/ns/CIM/GeographicalLocation-EU/3.0", } },
	{ CGMESProfile::OP, { "http://iec.ch/TC57/ns/CIM/Operation-EU/3.0", } },
	{ CGMESProfile::SC, { "http://iec.ch/TC57/ns/CIM/ShortCircuit-EU/3.0", } },
	{ CGMESProfile::SSH, { "http://iec.ch/TC57/ns/CIM/SteadyStateHypothesis-EU/3.0", } },
	{ CGMESProfile::SV, { "http://iec.ch/TC57/ns/CIM/StateVariables-EU/3.0", } },
	{ CGMESProfile::TP, { "http://iec.ch/TC57/ns/CIM/Topology-EU/3.0", } },
};

static const std::string CimNamespace = "http://iec.ch/TC57/CIM100#";

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
