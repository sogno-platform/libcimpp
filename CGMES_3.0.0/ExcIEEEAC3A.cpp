/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEAC3A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcIEEEAC3A(),
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
		{ "ExcIEEEAC3A.efdn", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC3A.ka", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC3A.kc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC3A.kd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC3A.ke", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC3A.kf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC3A.kn", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC3A.kr", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC3A.seve1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC3A.seve2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC3A.ta", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC3A.tb", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC3A.tc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC3A.te", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC3A.tf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC3A.vamax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC3A.vamin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC3A.ve1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC3A.ve2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC3A.vemin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC3A.vfemax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcIEEEAC3A::ExcIEEEAC3A() {}
ExcIEEEAC3A::~ExcIEEEAC3A() {}

const std::list<std::string>& ExcIEEEAC3A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcIEEEAC3A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcIEEEAC3A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcIEEEAC3A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcIEEEAC3A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcIEEEAC3A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcIEEEAC3A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcIEEEAC3A_efdn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efdn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEAC3A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC3A_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC3A_kd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC3A_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC3A_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC3A_kn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEAC3A_kr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEAC3A_seve1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC3A_seve2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC3A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC3A_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC3A_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC3A_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC3A_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC3A_vamax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC3A_vamin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC3A_ve1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC3A_ve2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC3A_vemin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vemin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEAC3A_vfemax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC3A* element = dynamic_cast<ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC3A_efdn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efdn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC3A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC3A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC3A_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC3A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC3A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC3A_kn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC3A_kr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC3A_seve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC3A_seve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC3A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC3A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC3A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC3A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC3A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC3A_vamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC3A_vamin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC3A_ve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC3A_ve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC3A_vemin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vemin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC3A_vfemax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC3A* element = dynamic_cast<const ExcIEEEAC3A*>(BaseClass_ptr1);
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

const char ExcIEEEAC3A::debugName[] = "ExcIEEEAC3A";
const char* ExcIEEEAC3A::debugString() const
{
	return ExcIEEEAC3A::debugName;
}

void ExcIEEEAC3A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcIEEEAC3A", &ExcIEEEAC3A_factory);
}

void ExcIEEEAC3A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcIEEEAC3A.efdn", &assign_ExcIEEEAC3A_efdn);
	assign_map.emplace("ExcIEEEAC3A.ka", &assign_ExcIEEEAC3A_ka);
	assign_map.emplace("ExcIEEEAC3A.kc", &assign_ExcIEEEAC3A_kc);
	assign_map.emplace("ExcIEEEAC3A.kd", &assign_ExcIEEEAC3A_kd);
	assign_map.emplace("ExcIEEEAC3A.ke", &assign_ExcIEEEAC3A_ke);
	assign_map.emplace("ExcIEEEAC3A.kf", &assign_ExcIEEEAC3A_kf);
	assign_map.emplace("ExcIEEEAC3A.kn", &assign_ExcIEEEAC3A_kn);
	assign_map.emplace("ExcIEEEAC3A.kr", &assign_ExcIEEEAC3A_kr);
	assign_map.emplace("ExcIEEEAC3A.seve1", &assign_ExcIEEEAC3A_seve1);
	assign_map.emplace("ExcIEEEAC3A.seve2", &assign_ExcIEEEAC3A_seve2);
	assign_map.emplace("ExcIEEEAC3A.ta", &assign_ExcIEEEAC3A_ta);
	assign_map.emplace("ExcIEEEAC3A.tb", &assign_ExcIEEEAC3A_tb);
	assign_map.emplace("ExcIEEEAC3A.tc", &assign_ExcIEEEAC3A_tc);
	assign_map.emplace("ExcIEEEAC3A.te", &assign_ExcIEEEAC3A_te);
	assign_map.emplace("ExcIEEEAC3A.tf", &assign_ExcIEEEAC3A_tf);
	assign_map.emplace("ExcIEEEAC3A.vamax", &assign_ExcIEEEAC3A_vamax);
	assign_map.emplace("ExcIEEEAC3A.vamin", &assign_ExcIEEEAC3A_vamin);
	assign_map.emplace("ExcIEEEAC3A.ve1", &assign_ExcIEEEAC3A_ve1);
	assign_map.emplace("ExcIEEEAC3A.ve2", &assign_ExcIEEEAC3A_ve2);
	assign_map.emplace("ExcIEEEAC3A.vemin", &assign_ExcIEEEAC3A_vemin);
	assign_map.emplace("ExcIEEEAC3A.vfemax", &assign_ExcIEEEAC3A_vfemax);
}

void ExcIEEEAC3A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEAC3A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcIEEEAC3A.efdn", &get_ExcIEEEAC3A_efdn);
	get_map.emplace("ExcIEEEAC3A.ka", &get_ExcIEEEAC3A_ka);
	get_map.emplace("ExcIEEEAC3A.kc", &get_ExcIEEEAC3A_kc);
	get_map.emplace("ExcIEEEAC3A.kd", &get_ExcIEEEAC3A_kd);
	get_map.emplace("ExcIEEEAC3A.ke", &get_ExcIEEEAC3A_ke);
	get_map.emplace("ExcIEEEAC3A.kf", &get_ExcIEEEAC3A_kf);
	get_map.emplace("ExcIEEEAC3A.kn", &get_ExcIEEEAC3A_kn);
	get_map.emplace("ExcIEEEAC3A.kr", &get_ExcIEEEAC3A_kr);
	get_map.emplace("ExcIEEEAC3A.seve1", &get_ExcIEEEAC3A_seve1);
	get_map.emplace("ExcIEEEAC3A.seve2", &get_ExcIEEEAC3A_seve2);
	get_map.emplace("ExcIEEEAC3A.ta", &get_ExcIEEEAC3A_ta);
	get_map.emplace("ExcIEEEAC3A.tb", &get_ExcIEEEAC3A_tb);
	get_map.emplace("ExcIEEEAC3A.tc", &get_ExcIEEEAC3A_tc);
	get_map.emplace("ExcIEEEAC3A.te", &get_ExcIEEEAC3A_te);
	get_map.emplace("ExcIEEEAC3A.tf", &get_ExcIEEEAC3A_tf);
	get_map.emplace("ExcIEEEAC3A.vamax", &get_ExcIEEEAC3A_vamax);
	get_map.emplace("ExcIEEEAC3A.vamin", &get_ExcIEEEAC3A_vamin);
	get_map.emplace("ExcIEEEAC3A.ve1", &get_ExcIEEEAC3A_ve1);
	get_map.emplace("ExcIEEEAC3A.ve2", &get_ExcIEEEAC3A_ve2);
	get_map.emplace("ExcIEEEAC3A.vemin", &get_ExcIEEEAC3A_vemin);
	get_map.emplace("ExcIEEEAC3A.vfemax", &get_ExcIEEEAC3A_vfemax);
}

void ExcIEEEAC3A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEAC3A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcIEEEAC3A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcIEEEAC3A" &&
		dynamic_cast<ExcIEEEAC3A*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcIEEEAC3A::declare()
{
	return BaseClassDefiner(ExcIEEEAC3A::addConstructToMap, ExcIEEEAC3A::addPrimitiveAssignFnsToMap, ExcIEEEAC3A::addClassAssignFnsToMap, ExcIEEEAC3A::debugName);
}

std::map<std::string, AttrDetails> ExcIEEEAC3A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcIEEEAC3A_factory()
	{
		return new ExcIEEEAC3A;
	}
}
