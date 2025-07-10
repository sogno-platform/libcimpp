/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcAC1A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcAC1A(),
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
		{ "ExcAC1A.hvlvgates", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC1A.ka", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC1A.kc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC1A.kd", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC1A.ke", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC1A.kf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC1A.kf1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC1A.kf2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC1A.ks", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC1A.seve1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC1A.seve2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC1A.ta", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC1A.tb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC1A.tc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC1A.te", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC1A.tf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC1A.vamax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC1A.vamin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC1A.ve1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC1A.ve2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC1A.vrmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC1A.vrmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcAC1A::ExcAC1A() {}
ExcAC1A::~ExcAC1A() {}

const std::list<std::string>& ExcAC1A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcAC1A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcAC1A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcAC1A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcAC1A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcAC1A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcAC1A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcAC1A_hvlvgates(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->hvlvgates;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC1A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ka;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC1A_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC1A_kd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1);
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

bool assign_ExcAC1A_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ke;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC1A_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC1A_kf1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kf1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC1A_kf2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kf2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC1A_ks(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ks;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC1A_seve1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->seve1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC1A_seve2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->seve2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC1A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1);
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

bool assign_ExcAC1A_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1);
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

bool assign_ExcAC1A_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC1A_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->te;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC1A_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC1A_vamax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vamax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC1A_vamin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vamin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC1A_ve1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ve1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC1A_ve2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ve2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC1A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vrmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC1A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC1A* element = dynamic_cast<ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vrmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcAC1A_hvlvgates(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->hvlvgates;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ka;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1);
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

bool get_ExcAC1A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ke;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_kf1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kf1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_kf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kf2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ks;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_seve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->seve1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_seve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->seve2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1);
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

bool get_ExcAC1A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1);
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

bool get_ExcAC1A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->te;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_vamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vamax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_vamin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vamin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_ve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ve1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_ve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ve2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vrmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC1A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC1A* element = dynamic_cast<const ExcAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vrmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ExcAC1A::debugName[] = "ExcAC1A";
const char* ExcAC1A::debugString() const
{
	return ExcAC1A::debugName;
}

void ExcAC1A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcAC1A", &ExcAC1A_factory);
}

void ExcAC1A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcAC1A.hvlvgates", &assign_ExcAC1A_hvlvgates);
	assign_map.emplace("ExcAC1A.ka", &assign_ExcAC1A_ka);
	assign_map.emplace("ExcAC1A.kc", &assign_ExcAC1A_kc);
	assign_map.emplace("ExcAC1A.kd", &assign_ExcAC1A_kd);
	assign_map.emplace("ExcAC1A.ke", &assign_ExcAC1A_ke);
	assign_map.emplace("ExcAC1A.kf", &assign_ExcAC1A_kf);
	assign_map.emplace("ExcAC1A.kf1", &assign_ExcAC1A_kf1);
	assign_map.emplace("ExcAC1A.kf2", &assign_ExcAC1A_kf2);
	assign_map.emplace("ExcAC1A.ks", &assign_ExcAC1A_ks);
	assign_map.emplace("ExcAC1A.seve1", &assign_ExcAC1A_seve1);
	assign_map.emplace("ExcAC1A.seve2", &assign_ExcAC1A_seve2);
	assign_map.emplace("ExcAC1A.ta", &assign_ExcAC1A_ta);
	assign_map.emplace("ExcAC1A.tb", &assign_ExcAC1A_tb);
	assign_map.emplace("ExcAC1A.tc", &assign_ExcAC1A_tc);
	assign_map.emplace("ExcAC1A.te", &assign_ExcAC1A_te);
	assign_map.emplace("ExcAC1A.tf", &assign_ExcAC1A_tf);
	assign_map.emplace("ExcAC1A.vamax", &assign_ExcAC1A_vamax);
	assign_map.emplace("ExcAC1A.vamin", &assign_ExcAC1A_vamin);
	assign_map.emplace("ExcAC1A.ve1", &assign_ExcAC1A_ve1);
	assign_map.emplace("ExcAC1A.ve2", &assign_ExcAC1A_ve2);
	assign_map.emplace("ExcAC1A.vrmax", &assign_ExcAC1A_vrmax);
	assign_map.emplace("ExcAC1A.vrmin", &assign_ExcAC1A_vrmin);
}

void ExcAC1A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcAC1A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcAC1A.hvlvgates", &get_ExcAC1A_hvlvgates);
	get_map.emplace("ExcAC1A.ka", &get_ExcAC1A_ka);
	get_map.emplace("ExcAC1A.kc", &get_ExcAC1A_kc);
	get_map.emplace("ExcAC1A.kd", &get_ExcAC1A_kd);
	get_map.emplace("ExcAC1A.ke", &get_ExcAC1A_ke);
	get_map.emplace("ExcAC1A.kf", &get_ExcAC1A_kf);
	get_map.emplace("ExcAC1A.kf1", &get_ExcAC1A_kf1);
	get_map.emplace("ExcAC1A.kf2", &get_ExcAC1A_kf2);
	get_map.emplace("ExcAC1A.ks", &get_ExcAC1A_ks);
	get_map.emplace("ExcAC1A.seve1", &get_ExcAC1A_seve1);
	get_map.emplace("ExcAC1A.seve2", &get_ExcAC1A_seve2);
	get_map.emplace("ExcAC1A.ta", &get_ExcAC1A_ta);
	get_map.emplace("ExcAC1A.tb", &get_ExcAC1A_tb);
	get_map.emplace("ExcAC1A.tc", &get_ExcAC1A_tc);
	get_map.emplace("ExcAC1A.te", &get_ExcAC1A_te);
	get_map.emplace("ExcAC1A.tf", &get_ExcAC1A_tf);
	get_map.emplace("ExcAC1A.vamax", &get_ExcAC1A_vamax);
	get_map.emplace("ExcAC1A.vamin", &get_ExcAC1A_vamin);
	get_map.emplace("ExcAC1A.ve1", &get_ExcAC1A_ve1);
	get_map.emplace("ExcAC1A.ve2", &get_ExcAC1A_ve2);
	get_map.emplace("ExcAC1A.vrmax", &get_ExcAC1A_vrmax);
	get_map.emplace("ExcAC1A.vrmin", &get_ExcAC1A_vrmin);
}

void ExcAC1A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcAC1A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcAC1A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcAC1A" &&
		dynamic_cast<ExcAC1A*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcAC1A::declare()
{
	return BaseClassDefiner(ExcAC1A::addConstructToMap, ExcAC1A::addPrimitiveAssignFnsToMap, ExcAC1A::addClassAssignFnsToMap, ExcAC1A::debugName);
}

std::map<std::string, AttrDetails> ExcAC1A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcAC1A_factory()
	{
		return new ExcAC1A;
	}
}
