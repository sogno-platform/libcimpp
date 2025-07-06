/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydroPID2.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovHydroPID2(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::DY,
		},
		CGMESProfile::DY
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "GovHydroPID2.atw", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID2.d", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID2.feedbackSignal", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID2.g0", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID2.g1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID2.g2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID2.gmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID2.gmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID2.kd", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID2.ki", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID2.kp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID2.mwbase", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID2.p1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID2.p2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID2.p3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID2.rperm", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID2.ta", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID2.tb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID2.treg", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID2.tw", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID2.velmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID2.velmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovHydroPID2::GovHydroPID2() {}
GovHydroPID2::~GovHydroPID2() {}

const std::list<std::string>& GovHydroPID2::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovHydroPID2::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovHydroPID2::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovHydroPID2::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovHydroPID2::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovHydroPID2::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovHydroPID2::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GovHydroPID2_atw(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->atw;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPID2_d(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->d;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPID2_feedbackSignal(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->feedbackSignal;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPID2_g0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->g0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPID2_g1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->g1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPID2_g2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->g2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPID2_gmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPID2_gmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPID2_kd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPID2_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPID2_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPID2_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mwbase;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPID2_p1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->p1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPID2_p2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->p2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPID2_p3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->p3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPID2_rperm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rperm;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPID2_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ta;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPID2_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPID2_treg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->treg;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPID2_tw(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tw;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPID2_velmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->velmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPID2_velmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->velmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GovHydroPID2_atw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->atw;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_d(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->d;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_feedbackSignal(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->feedbackSignal;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_g0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->g0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_g1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->g1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_g2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->g2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_gmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_gmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ki;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mwbase;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_p1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->p1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_p2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->p2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_p3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->p3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_rperm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rperm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ta;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_treg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->treg;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_tw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tw;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_velmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->velmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID2_velmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID2* element = dynamic_cast<const GovHydroPID2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->velmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GovHydroPID2::debugName[] = "GovHydroPID2";
const char* GovHydroPID2::debugString() const
{
	return GovHydroPID2::debugName;
}

void GovHydroPID2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GovHydroPID2", &GovHydroPID2_factory);
}

void GovHydroPID2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovHydroPID2.atw", &assign_GovHydroPID2_atw);
	assign_map.emplace("GovHydroPID2.d", &assign_GovHydroPID2_d);
	assign_map.emplace("GovHydroPID2.feedbackSignal", &assign_GovHydroPID2_feedbackSignal);
	assign_map.emplace("GovHydroPID2.g0", &assign_GovHydroPID2_g0);
	assign_map.emplace("GovHydroPID2.g1", &assign_GovHydroPID2_g1);
	assign_map.emplace("GovHydroPID2.g2", &assign_GovHydroPID2_g2);
	assign_map.emplace("GovHydroPID2.gmax", &assign_GovHydroPID2_gmax);
	assign_map.emplace("GovHydroPID2.gmin", &assign_GovHydroPID2_gmin);
	assign_map.emplace("GovHydroPID2.kd", &assign_GovHydroPID2_kd);
	assign_map.emplace("GovHydroPID2.ki", &assign_GovHydroPID2_ki);
	assign_map.emplace("GovHydroPID2.kp", &assign_GovHydroPID2_kp);
	assign_map.emplace("GovHydroPID2.mwbase", &assign_GovHydroPID2_mwbase);
	assign_map.emplace("GovHydroPID2.p1", &assign_GovHydroPID2_p1);
	assign_map.emplace("GovHydroPID2.p2", &assign_GovHydroPID2_p2);
	assign_map.emplace("GovHydroPID2.p3", &assign_GovHydroPID2_p3);
	assign_map.emplace("GovHydroPID2.rperm", &assign_GovHydroPID2_rperm);
	assign_map.emplace("GovHydroPID2.ta", &assign_GovHydroPID2_ta);
	assign_map.emplace("GovHydroPID2.tb", &assign_GovHydroPID2_tb);
	assign_map.emplace("GovHydroPID2.treg", &assign_GovHydroPID2_treg);
	assign_map.emplace("GovHydroPID2.tw", &assign_GovHydroPID2_tw);
	assign_map.emplace("GovHydroPID2.velmax", &assign_GovHydroPID2_velmax);
	assign_map.emplace("GovHydroPID2.velmin", &assign_GovHydroPID2_velmin);
}

void GovHydroPID2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovHydroPID2::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovHydroPID2.atw", &get_GovHydroPID2_atw);
	get_map.emplace("GovHydroPID2.d", &get_GovHydroPID2_d);
	get_map.emplace("GovHydroPID2.feedbackSignal", &get_GovHydroPID2_feedbackSignal);
	get_map.emplace("GovHydroPID2.g0", &get_GovHydroPID2_g0);
	get_map.emplace("GovHydroPID2.g1", &get_GovHydroPID2_g1);
	get_map.emplace("GovHydroPID2.g2", &get_GovHydroPID2_g2);
	get_map.emplace("GovHydroPID2.gmax", &get_GovHydroPID2_gmax);
	get_map.emplace("GovHydroPID2.gmin", &get_GovHydroPID2_gmin);
	get_map.emplace("GovHydroPID2.kd", &get_GovHydroPID2_kd);
	get_map.emplace("GovHydroPID2.ki", &get_GovHydroPID2_ki);
	get_map.emplace("GovHydroPID2.kp", &get_GovHydroPID2_kp);
	get_map.emplace("GovHydroPID2.mwbase", &get_GovHydroPID2_mwbase);
	get_map.emplace("GovHydroPID2.p1", &get_GovHydroPID2_p1);
	get_map.emplace("GovHydroPID2.p2", &get_GovHydroPID2_p2);
	get_map.emplace("GovHydroPID2.p3", &get_GovHydroPID2_p3);
	get_map.emplace("GovHydroPID2.rperm", &get_GovHydroPID2_rperm);
	get_map.emplace("GovHydroPID2.ta", &get_GovHydroPID2_ta);
	get_map.emplace("GovHydroPID2.tb", &get_GovHydroPID2_tb);
	get_map.emplace("GovHydroPID2.treg", &get_GovHydroPID2_treg);
	get_map.emplace("GovHydroPID2.tw", &get_GovHydroPID2_tw);
	get_map.emplace("GovHydroPID2.velmax", &get_GovHydroPID2_velmax);
	get_map.emplace("GovHydroPID2.velmin", &get_GovHydroPID2_velmin);
}

void GovHydroPID2::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovHydroPID2::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

bool GovHydroPID2::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovHydroPID2" &&
		dynamic_cast<GovHydroPID2*>(otherObject) != nullptr;
}

const BaseClassDefiner GovHydroPID2::declare()
{
	return BaseClassDefiner(GovHydroPID2::addConstructToMap, GovHydroPID2::addPrimitiveAssignFnsToMap, GovHydroPID2::addClassAssignFnsToMap, GovHydroPID2::debugName);
}

std::map<std::string, AttrDetails> GovHydroPID2::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovHydroPID2_factory()
	{
		return new GovHydroPID2;
	}
}
