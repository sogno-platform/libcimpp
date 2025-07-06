/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEAC2A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcIEEEAC2A(),
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
		{ "ExcIEEEAC2A.ka", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC2A.kb", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC2A.kc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC2A.kd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC2A.ke", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC2A.kf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC2A.kh", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC2A.seve1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC2A.seve2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC2A.ta", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC2A.tb", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC2A.tc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC2A.te", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC2A.tf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC2A.vamax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC2A.vamin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC2A.ve1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC2A.ve2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC2A.vfemax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC2A.vrmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC2A.vrmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcIEEEAC2A::ExcIEEEAC2A() {}
ExcIEEEAC2A::~ExcIEEEAC2A() {}

const std::list<std::string>& ExcIEEEAC2A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcIEEEAC2A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcIEEEAC2A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcIEEEAC2A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcIEEEAC2A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcIEEEAC2A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcIEEEAC2A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcIEEEAC2A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC2A_kb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEAC2A_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC2A_kd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC2A_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC2A_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC2A_kh(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kh;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEAC2A_seve1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC2A_seve2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC2A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC2A_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC2A_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC2A_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC2A_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC2A_vamax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC2A_vamin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC2A_ve1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC2A_ve2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC2A_vfemax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vfemax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEAC2A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC2A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC2A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC2A_kb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC2A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC2A_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC2A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC2A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC2A_kh(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kh;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC2A_seve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC2A_seve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC2A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC2A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC2A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC2A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC2A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC2A_vamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC2A_vamin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC2A_ve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC2A_ve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC2A_vfemax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vfemax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC2A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC2A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC2A* element = dynamic_cast<const ExcIEEEAC2A*>(BaseClass_ptr1);
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

const char ExcIEEEAC2A::debugName[] = "ExcIEEEAC2A";
const char* ExcIEEEAC2A::debugString() const
{
	return ExcIEEEAC2A::debugName;
}

void ExcIEEEAC2A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcIEEEAC2A", &ExcIEEEAC2A_factory);
}

void ExcIEEEAC2A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcIEEEAC2A.ka", &assign_ExcIEEEAC2A_ka);
	assign_map.emplace("ExcIEEEAC2A.kb", &assign_ExcIEEEAC2A_kb);
	assign_map.emplace("ExcIEEEAC2A.kc", &assign_ExcIEEEAC2A_kc);
	assign_map.emplace("ExcIEEEAC2A.kd", &assign_ExcIEEEAC2A_kd);
	assign_map.emplace("ExcIEEEAC2A.ke", &assign_ExcIEEEAC2A_ke);
	assign_map.emplace("ExcIEEEAC2A.kf", &assign_ExcIEEEAC2A_kf);
	assign_map.emplace("ExcIEEEAC2A.kh", &assign_ExcIEEEAC2A_kh);
	assign_map.emplace("ExcIEEEAC2A.seve1", &assign_ExcIEEEAC2A_seve1);
	assign_map.emplace("ExcIEEEAC2A.seve2", &assign_ExcIEEEAC2A_seve2);
	assign_map.emplace("ExcIEEEAC2A.ta", &assign_ExcIEEEAC2A_ta);
	assign_map.emplace("ExcIEEEAC2A.tb", &assign_ExcIEEEAC2A_tb);
	assign_map.emplace("ExcIEEEAC2A.tc", &assign_ExcIEEEAC2A_tc);
	assign_map.emplace("ExcIEEEAC2A.te", &assign_ExcIEEEAC2A_te);
	assign_map.emplace("ExcIEEEAC2A.tf", &assign_ExcIEEEAC2A_tf);
	assign_map.emplace("ExcIEEEAC2A.vamax", &assign_ExcIEEEAC2A_vamax);
	assign_map.emplace("ExcIEEEAC2A.vamin", &assign_ExcIEEEAC2A_vamin);
	assign_map.emplace("ExcIEEEAC2A.ve1", &assign_ExcIEEEAC2A_ve1);
	assign_map.emplace("ExcIEEEAC2A.ve2", &assign_ExcIEEEAC2A_ve2);
	assign_map.emplace("ExcIEEEAC2A.vfemax", &assign_ExcIEEEAC2A_vfemax);
	assign_map.emplace("ExcIEEEAC2A.vrmax", &assign_ExcIEEEAC2A_vrmax);
	assign_map.emplace("ExcIEEEAC2A.vrmin", &assign_ExcIEEEAC2A_vrmin);
}

void ExcIEEEAC2A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEAC2A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcIEEEAC2A.ka", &get_ExcIEEEAC2A_ka);
	get_map.emplace("ExcIEEEAC2A.kb", &get_ExcIEEEAC2A_kb);
	get_map.emplace("ExcIEEEAC2A.kc", &get_ExcIEEEAC2A_kc);
	get_map.emplace("ExcIEEEAC2A.kd", &get_ExcIEEEAC2A_kd);
	get_map.emplace("ExcIEEEAC2A.ke", &get_ExcIEEEAC2A_ke);
	get_map.emplace("ExcIEEEAC2A.kf", &get_ExcIEEEAC2A_kf);
	get_map.emplace("ExcIEEEAC2A.kh", &get_ExcIEEEAC2A_kh);
	get_map.emplace("ExcIEEEAC2A.seve1", &get_ExcIEEEAC2A_seve1);
	get_map.emplace("ExcIEEEAC2A.seve2", &get_ExcIEEEAC2A_seve2);
	get_map.emplace("ExcIEEEAC2A.ta", &get_ExcIEEEAC2A_ta);
	get_map.emplace("ExcIEEEAC2A.tb", &get_ExcIEEEAC2A_tb);
	get_map.emplace("ExcIEEEAC2A.tc", &get_ExcIEEEAC2A_tc);
	get_map.emplace("ExcIEEEAC2A.te", &get_ExcIEEEAC2A_te);
	get_map.emplace("ExcIEEEAC2A.tf", &get_ExcIEEEAC2A_tf);
	get_map.emplace("ExcIEEEAC2A.vamax", &get_ExcIEEEAC2A_vamax);
	get_map.emplace("ExcIEEEAC2A.vamin", &get_ExcIEEEAC2A_vamin);
	get_map.emplace("ExcIEEEAC2A.ve1", &get_ExcIEEEAC2A_ve1);
	get_map.emplace("ExcIEEEAC2A.ve2", &get_ExcIEEEAC2A_ve2);
	get_map.emplace("ExcIEEEAC2A.vfemax", &get_ExcIEEEAC2A_vfemax);
	get_map.emplace("ExcIEEEAC2A.vrmax", &get_ExcIEEEAC2A_vrmax);
	get_map.emplace("ExcIEEEAC2A.vrmin", &get_ExcIEEEAC2A_vrmin);
}

void ExcIEEEAC2A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEAC2A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcIEEEAC2A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcIEEEAC2A" &&
		dynamic_cast<ExcIEEEAC2A*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcIEEEAC2A::declare()
{
	return BaseClassDefiner(ExcIEEEAC2A::addConstructToMap, ExcIEEEAC2A::addPrimitiveAssignFnsToMap, ExcIEEEAC2A::addClassAssignFnsToMap, ExcIEEEAC2A::debugName);
}

std::map<std::string, AttrDetails> ExcIEEEAC2A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcIEEEAC2A_factory()
	{
		return new ExcIEEEAC2A;
	}
}
