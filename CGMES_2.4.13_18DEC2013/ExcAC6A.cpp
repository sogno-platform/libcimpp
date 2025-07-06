/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcAC6A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcAC6A(),
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
		{ "ExcAC6A.ka", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC6A.kc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC6A.kd", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC6A.ke", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC6A.kh", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC6A.ks", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC6A.seve1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC6A.seve2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC6A.ta", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC6A.tb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC6A.tc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC6A.te", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC6A.th", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC6A.tj", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC6A.tk", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC6A.vamax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC6A.vamin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC6A.ve1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC6A.ve2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC6A.vfelim", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC6A.vhmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC6A.vrmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC6A.vrmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcAC6A::ExcAC6A() {}
ExcAC6A::~ExcAC6A() {}

const std::list<std::string>& ExcAC6A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcAC6A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcAC6A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcAC6A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcAC6A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcAC6A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcAC6A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcAC6A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
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

bool assign_ExcAC6A_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
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

bool assign_ExcAC6A_kd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
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

bool assign_ExcAC6A_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
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

bool assign_ExcAC6A_kh(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
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

bool assign_ExcAC6A_ks(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
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

bool assign_ExcAC6A_seve1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
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

bool assign_ExcAC6A_seve2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
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

bool assign_ExcAC6A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
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

bool assign_ExcAC6A_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
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

bool assign_ExcAC6A_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
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

bool assign_ExcAC6A_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
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

bool assign_ExcAC6A_th(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->th;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_tj(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tj;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_tk(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tk;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_vamax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
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

bool assign_ExcAC6A_vamin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
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

bool assign_ExcAC6A_ve1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
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

bool assign_ExcAC6A_ve2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
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

bool assign_ExcAC6A_vfelim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vfelim;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_vhmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vhmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC6A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
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

bool assign_ExcAC6A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC6A* element = dynamic_cast<ExcAC6A*>(BaseClass_ptr1);
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

bool get_ExcAC6A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
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

bool get_ExcAC6A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
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

bool get_ExcAC6A_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
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

bool get_ExcAC6A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
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

bool get_ExcAC6A_kh(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
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

bool get_ExcAC6A_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
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

bool get_ExcAC6A_seve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
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

bool get_ExcAC6A_seve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
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

bool get_ExcAC6A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
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

bool get_ExcAC6A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
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

bool get_ExcAC6A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
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

bool get_ExcAC6A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
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

bool get_ExcAC6A_th(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->th;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC6A_tj(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tj;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC6A_tk(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tk;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC6A_vamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
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

bool get_ExcAC6A_vamin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
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

bool get_ExcAC6A_ve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
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

bool get_ExcAC6A_ve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
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

bool get_ExcAC6A_vfelim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vfelim;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC6A_vhmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vhmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC6A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
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

bool get_ExcAC6A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC6A* element = dynamic_cast<const ExcAC6A*>(BaseClass_ptr1);
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

const char ExcAC6A::debugName[] = "ExcAC6A";
const char* ExcAC6A::debugString() const
{
	return ExcAC6A::debugName;
}

void ExcAC6A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcAC6A", &ExcAC6A_factory);
}

void ExcAC6A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcAC6A.ka", &assign_ExcAC6A_ka);
	assign_map.emplace("ExcAC6A.kc", &assign_ExcAC6A_kc);
	assign_map.emplace("ExcAC6A.kd", &assign_ExcAC6A_kd);
	assign_map.emplace("ExcAC6A.ke", &assign_ExcAC6A_ke);
	assign_map.emplace("ExcAC6A.kh", &assign_ExcAC6A_kh);
	assign_map.emplace("ExcAC6A.ks", &assign_ExcAC6A_ks);
	assign_map.emplace("ExcAC6A.seve1", &assign_ExcAC6A_seve1);
	assign_map.emplace("ExcAC6A.seve2", &assign_ExcAC6A_seve2);
	assign_map.emplace("ExcAC6A.ta", &assign_ExcAC6A_ta);
	assign_map.emplace("ExcAC6A.tb", &assign_ExcAC6A_tb);
	assign_map.emplace("ExcAC6A.tc", &assign_ExcAC6A_tc);
	assign_map.emplace("ExcAC6A.te", &assign_ExcAC6A_te);
	assign_map.emplace("ExcAC6A.th", &assign_ExcAC6A_th);
	assign_map.emplace("ExcAC6A.tj", &assign_ExcAC6A_tj);
	assign_map.emplace("ExcAC6A.tk", &assign_ExcAC6A_tk);
	assign_map.emplace("ExcAC6A.vamax", &assign_ExcAC6A_vamax);
	assign_map.emplace("ExcAC6A.vamin", &assign_ExcAC6A_vamin);
	assign_map.emplace("ExcAC6A.ve1", &assign_ExcAC6A_ve1);
	assign_map.emplace("ExcAC6A.ve2", &assign_ExcAC6A_ve2);
	assign_map.emplace("ExcAC6A.vfelim", &assign_ExcAC6A_vfelim);
	assign_map.emplace("ExcAC6A.vhmax", &assign_ExcAC6A_vhmax);
	assign_map.emplace("ExcAC6A.vrmax", &assign_ExcAC6A_vrmax);
	assign_map.emplace("ExcAC6A.vrmin", &assign_ExcAC6A_vrmin);
}

void ExcAC6A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcAC6A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcAC6A.ka", &get_ExcAC6A_ka);
	get_map.emplace("ExcAC6A.kc", &get_ExcAC6A_kc);
	get_map.emplace("ExcAC6A.kd", &get_ExcAC6A_kd);
	get_map.emplace("ExcAC6A.ke", &get_ExcAC6A_ke);
	get_map.emplace("ExcAC6A.kh", &get_ExcAC6A_kh);
	get_map.emplace("ExcAC6A.ks", &get_ExcAC6A_ks);
	get_map.emplace("ExcAC6A.seve1", &get_ExcAC6A_seve1);
	get_map.emplace("ExcAC6A.seve2", &get_ExcAC6A_seve2);
	get_map.emplace("ExcAC6A.ta", &get_ExcAC6A_ta);
	get_map.emplace("ExcAC6A.tb", &get_ExcAC6A_tb);
	get_map.emplace("ExcAC6A.tc", &get_ExcAC6A_tc);
	get_map.emplace("ExcAC6A.te", &get_ExcAC6A_te);
	get_map.emplace("ExcAC6A.th", &get_ExcAC6A_th);
	get_map.emplace("ExcAC6A.tj", &get_ExcAC6A_tj);
	get_map.emplace("ExcAC6A.tk", &get_ExcAC6A_tk);
	get_map.emplace("ExcAC6A.vamax", &get_ExcAC6A_vamax);
	get_map.emplace("ExcAC6A.vamin", &get_ExcAC6A_vamin);
	get_map.emplace("ExcAC6A.ve1", &get_ExcAC6A_ve1);
	get_map.emplace("ExcAC6A.ve2", &get_ExcAC6A_ve2);
	get_map.emplace("ExcAC6A.vfelim", &get_ExcAC6A_vfelim);
	get_map.emplace("ExcAC6A.vhmax", &get_ExcAC6A_vhmax);
	get_map.emplace("ExcAC6A.vrmax", &get_ExcAC6A_vrmax);
	get_map.emplace("ExcAC6A.vrmin", &get_ExcAC6A_vrmin);
}

void ExcAC6A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcAC6A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcAC6A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcAC6A" &&
		dynamic_cast<ExcAC6A*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcAC6A::declare()
{
	return BaseClassDefiner(ExcAC6A::addConstructToMap, ExcAC6A::addPrimitiveAssignFnsToMap, ExcAC6A::addClassAssignFnsToMap, ExcAC6A::debugName);
}

std::map<std::string, AttrDetails> ExcAC6A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcAC6A_factory()
	{
		return new ExcAC6A;
	}
}
