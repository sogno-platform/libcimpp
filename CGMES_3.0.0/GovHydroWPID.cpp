/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydroWPID.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovHydroWPID(),
		"http://iec.ch/TC57/CIM100#",
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
		{ "GovHydroWPID.d", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWPID.gatmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWPID.gatmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWPID.gv1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWPID.gv2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWPID.gv3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWPID.kd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWPID.ki", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWPID.kp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWPID.mwbase", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWPID.pgv1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWPID.pgv2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWPID.pgv3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWPID.pmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWPID.pmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWPID.reg", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWPID.ta", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWPID.tb", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWPID.treg", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWPID.tw", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWPID.velmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWPID.velmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovHydroWPID::GovHydroWPID() {}
GovHydroWPID::~GovHydroWPID() {}

const std::list<std::string>& GovHydroWPID::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovHydroWPID::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovHydroWPID::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovHydroWPID::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovHydroWPID::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovHydroWPID::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovHydroWPID::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GovHydroWPID_d(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1);
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

bool assign_GovHydroWPID_gatmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gatmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWPID_gatmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gatmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWPID_gv1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gv1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWPID_gv2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gv2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWPID_gv3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gv3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWPID_kd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1);
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

bool assign_GovHydroWPID_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1);
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

bool assign_GovHydroWPID_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1);
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

bool assign_GovHydroWPID_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1);
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

bool assign_GovHydroWPID_pgv1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pgv1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWPID_pgv2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pgv2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWPID_pgv3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pgv3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWPID_pmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWPID_pmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWPID_reg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->reg;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWPID_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1);
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

bool assign_GovHydroWPID_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1);
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

bool assign_GovHydroWPID_treg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1);
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

bool assign_GovHydroWPID_tw(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1);
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

bool assign_GovHydroWPID_velmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1);
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

bool assign_GovHydroWPID_velmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1);
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

bool get_GovHydroWPID_d(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1);
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

bool get_GovHydroWPID_gatmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gatmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_gatmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gatmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_gv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gv1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_gv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gv2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_gv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gv3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1);
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

bool get_GovHydroWPID_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1);
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

bool get_GovHydroWPID_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1);
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

bool get_GovHydroWPID_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1);
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

bool get_GovHydroWPID_pgv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pgv1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_pgv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pgv2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_pgv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pgv3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_pmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_reg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->reg;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWPID_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1);
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

bool get_GovHydroWPID_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1);
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

bool get_GovHydroWPID_treg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1);
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

bool get_GovHydroWPID_tw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1);
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

bool get_GovHydroWPID_velmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1);
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

bool get_GovHydroWPID_velmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWPID* element = dynamic_cast<const GovHydroWPID*>(BaseClass_ptr1);
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

const char GovHydroWPID::debugName[] = "GovHydroWPID";
const char* GovHydroWPID::debugString() const
{
	return GovHydroWPID::debugName;
}

void GovHydroWPID::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GovHydroWPID", &GovHydroWPID_factory);
}

void GovHydroWPID::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovHydroWPID.d", &assign_GovHydroWPID_d);
	assign_map.emplace("GovHydroWPID.gatmax", &assign_GovHydroWPID_gatmax);
	assign_map.emplace("GovHydroWPID.gatmin", &assign_GovHydroWPID_gatmin);
	assign_map.emplace("GovHydroWPID.gv1", &assign_GovHydroWPID_gv1);
	assign_map.emplace("GovHydroWPID.gv2", &assign_GovHydroWPID_gv2);
	assign_map.emplace("GovHydroWPID.gv3", &assign_GovHydroWPID_gv3);
	assign_map.emplace("GovHydroWPID.kd", &assign_GovHydroWPID_kd);
	assign_map.emplace("GovHydroWPID.ki", &assign_GovHydroWPID_ki);
	assign_map.emplace("GovHydroWPID.kp", &assign_GovHydroWPID_kp);
	assign_map.emplace("GovHydroWPID.mwbase", &assign_GovHydroWPID_mwbase);
	assign_map.emplace("GovHydroWPID.pgv1", &assign_GovHydroWPID_pgv1);
	assign_map.emplace("GovHydroWPID.pgv2", &assign_GovHydroWPID_pgv2);
	assign_map.emplace("GovHydroWPID.pgv3", &assign_GovHydroWPID_pgv3);
	assign_map.emplace("GovHydroWPID.pmax", &assign_GovHydroWPID_pmax);
	assign_map.emplace("GovHydroWPID.pmin", &assign_GovHydroWPID_pmin);
	assign_map.emplace("GovHydroWPID.reg", &assign_GovHydroWPID_reg);
	assign_map.emplace("GovHydroWPID.ta", &assign_GovHydroWPID_ta);
	assign_map.emplace("GovHydroWPID.tb", &assign_GovHydroWPID_tb);
	assign_map.emplace("GovHydroWPID.treg", &assign_GovHydroWPID_treg);
	assign_map.emplace("GovHydroWPID.tw", &assign_GovHydroWPID_tw);
	assign_map.emplace("GovHydroWPID.velmax", &assign_GovHydroWPID_velmax);
	assign_map.emplace("GovHydroWPID.velmin", &assign_GovHydroWPID_velmin);
}

void GovHydroWPID::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovHydroWPID::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovHydroWPID.d", &get_GovHydroWPID_d);
	get_map.emplace("GovHydroWPID.gatmax", &get_GovHydroWPID_gatmax);
	get_map.emplace("GovHydroWPID.gatmin", &get_GovHydroWPID_gatmin);
	get_map.emplace("GovHydroWPID.gv1", &get_GovHydroWPID_gv1);
	get_map.emplace("GovHydroWPID.gv2", &get_GovHydroWPID_gv2);
	get_map.emplace("GovHydroWPID.gv3", &get_GovHydroWPID_gv3);
	get_map.emplace("GovHydroWPID.kd", &get_GovHydroWPID_kd);
	get_map.emplace("GovHydroWPID.ki", &get_GovHydroWPID_ki);
	get_map.emplace("GovHydroWPID.kp", &get_GovHydroWPID_kp);
	get_map.emplace("GovHydroWPID.mwbase", &get_GovHydroWPID_mwbase);
	get_map.emplace("GovHydroWPID.pgv1", &get_GovHydroWPID_pgv1);
	get_map.emplace("GovHydroWPID.pgv2", &get_GovHydroWPID_pgv2);
	get_map.emplace("GovHydroWPID.pgv3", &get_GovHydroWPID_pgv3);
	get_map.emplace("GovHydroWPID.pmax", &get_GovHydroWPID_pmax);
	get_map.emplace("GovHydroWPID.pmin", &get_GovHydroWPID_pmin);
	get_map.emplace("GovHydroWPID.reg", &get_GovHydroWPID_reg);
	get_map.emplace("GovHydroWPID.ta", &get_GovHydroWPID_ta);
	get_map.emplace("GovHydroWPID.tb", &get_GovHydroWPID_tb);
	get_map.emplace("GovHydroWPID.treg", &get_GovHydroWPID_treg);
	get_map.emplace("GovHydroWPID.tw", &get_GovHydroWPID_tw);
	get_map.emplace("GovHydroWPID.velmax", &get_GovHydroWPID_velmax);
	get_map.emplace("GovHydroWPID.velmin", &get_GovHydroWPID_velmin);
}

void GovHydroWPID::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovHydroWPID::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

bool GovHydroWPID::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovHydroWPID" &&
		dynamic_cast<GovHydroWPID*>(otherObject) != nullptr;
}

const BaseClassDefiner GovHydroWPID::declare()
{
	return BaseClassDefiner(GovHydroWPID::addConstructToMap, GovHydroWPID::addPrimitiveAssignFnsToMap, GovHydroWPID::addClassAssignFnsToMap, GovHydroWPID::debugName);
}

std::map<std::string, AttrDetails> GovHydroWPID::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovHydroWPID_factory()
	{
		return new GovHydroWPID;
	}
}
