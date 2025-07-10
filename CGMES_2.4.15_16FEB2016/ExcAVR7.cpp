/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcAVR7.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcAVR7(),
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
		{ "ExcAVR7.a1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR7.a2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR7.a3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR7.a4", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR7.a5", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR7.a6", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR7.k1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR7.k3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR7.k5", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR7.t1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR7.t2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR7.t3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR7.t4", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR7.t5", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR7.t6", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR7.vmax1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR7.vmax3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR7.vmax5", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR7.vmin1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR7.vmin3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR7.vmin5", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcAVR7::ExcAVR7() {}
ExcAVR7::~ExcAVR7() {}

const std::list<std::string>& ExcAVR7::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcAVR7::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcAVR7::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcAVR7::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcAVR7::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcAVR7::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcAVR7::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcAVR7_a1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR7* element = dynamic_cast<ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR7_a2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR7* element = dynamic_cast<ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR7_a3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR7* element = dynamic_cast<ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR7_a4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR7* element = dynamic_cast<ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR7_a5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR7* element = dynamic_cast<ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR7_a6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR7* element = dynamic_cast<ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR7_k1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR7* element = dynamic_cast<ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR7_k3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR7* element = dynamic_cast<ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR7_k5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR7* element = dynamic_cast<ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR7_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR7* element = dynamic_cast<ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR7_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR7* element = dynamic_cast<ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR7_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR7* element = dynamic_cast<ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR7_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR7* element = dynamic_cast<ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR7_t5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR7* element = dynamic_cast<ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR7_t6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR7* element = dynamic_cast<ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR7_vmax1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR7* element = dynamic_cast<ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmax1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR7_vmax3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR7* element = dynamic_cast<ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmax3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR7_vmax5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR7* element = dynamic_cast<ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmax5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR7_vmin1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR7* element = dynamic_cast<ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmin1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR7_vmin3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR7* element = dynamic_cast<ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmin3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR7_vmin5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR7* element = dynamic_cast<ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmin5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcAVR7_a1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR7* element = dynamic_cast<const ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR7_a2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR7* element = dynamic_cast<const ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR7_a3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR7* element = dynamic_cast<const ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR7_a4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR7* element = dynamic_cast<const ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR7_a5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR7* element = dynamic_cast<const ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR7_a6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR7* element = dynamic_cast<const ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR7_k1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR7* element = dynamic_cast<const ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR7_k3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR7* element = dynamic_cast<const ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR7_k5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR7* element = dynamic_cast<const ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR7_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR7* element = dynamic_cast<const ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR7_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR7* element = dynamic_cast<const ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR7_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR7* element = dynamic_cast<const ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR7_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR7* element = dynamic_cast<const ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR7_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR7* element = dynamic_cast<const ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR7_t6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR7* element = dynamic_cast<const ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR7_vmax1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR7* element = dynamic_cast<const ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmax1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR7_vmax3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR7* element = dynamic_cast<const ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmax3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR7_vmax5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR7* element = dynamic_cast<const ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmax5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR7_vmin1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR7* element = dynamic_cast<const ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmin1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR7_vmin3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR7* element = dynamic_cast<const ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmin3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR7_vmin5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR7* element = dynamic_cast<const ExcAVR7*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmin5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ExcAVR7::debugName[] = "ExcAVR7";
const char* ExcAVR7::debugString() const
{
	return ExcAVR7::debugName;
}

void ExcAVR7::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcAVR7", &ExcAVR7_factory);
}

void ExcAVR7::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcAVR7.a1", &assign_ExcAVR7_a1);
	assign_map.emplace("ExcAVR7.a2", &assign_ExcAVR7_a2);
	assign_map.emplace("ExcAVR7.a3", &assign_ExcAVR7_a3);
	assign_map.emplace("ExcAVR7.a4", &assign_ExcAVR7_a4);
	assign_map.emplace("ExcAVR7.a5", &assign_ExcAVR7_a5);
	assign_map.emplace("ExcAVR7.a6", &assign_ExcAVR7_a6);
	assign_map.emplace("ExcAVR7.k1", &assign_ExcAVR7_k1);
	assign_map.emplace("ExcAVR7.k3", &assign_ExcAVR7_k3);
	assign_map.emplace("ExcAVR7.k5", &assign_ExcAVR7_k5);
	assign_map.emplace("ExcAVR7.t1", &assign_ExcAVR7_t1);
	assign_map.emplace("ExcAVR7.t2", &assign_ExcAVR7_t2);
	assign_map.emplace("ExcAVR7.t3", &assign_ExcAVR7_t3);
	assign_map.emplace("ExcAVR7.t4", &assign_ExcAVR7_t4);
	assign_map.emplace("ExcAVR7.t5", &assign_ExcAVR7_t5);
	assign_map.emplace("ExcAVR7.t6", &assign_ExcAVR7_t6);
	assign_map.emplace("ExcAVR7.vmax1", &assign_ExcAVR7_vmax1);
	assign_map.emplace("ExcAVR7.vmax3", &assign_ExcAVR7_vmax3);
	assign_map.emplace("ExcAVR7.vmax5", &assign_ExcAVR7_vmax5);
	assign_map.emplace("ExcAVR7.vmin1", &assign_ExcAVR7_vmin1);
	assign_map.emplace("ExcAVR7.vmin3", &assign_ExcAVR7_vmin3);
	assign_map.emplace("ExcAVR7.vmin5", &assign_ExcAVR7_vmin5);
}

void ExcAVR7::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcAVR7::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcAVR7.a1", &get_ExcAVR7_a1);
	get_map.emplace("ExcAVR7.a2", &get_ExcAVR7_a2);
	get_map.emplace("ExcAVR7.a3", &get_ExcAVR7_a3);
	get_map.emplace("ExcAVR7.a4", &get_ExcAVR7_a4);
	get_map.emplace("ExcAVR7.a5", &get_ExcAVR7_a5);
	get_map.emplace("ExcAVR7.a6", &get_ExcAVR7_a6);
	get_map.emplace("ExcAVR7.k1", &get_ExcAVR7_k1);
	get_map.emplace("ExcAVR7.k3", &get_ExcAVR7_k3);
	get_map.emplace("ExcAVR7.k5", &get_ExcAVR7_k5);
	get_map.emplace("ExcAVR7.t1", &get_ExcAVR7_t1);
	get_map.emplace("ExcAVR7.t2", &get_ExcAVR7_t2);
	get_map.emplace("ExcAVR7.t3", &get_ExcAVR7_t3);
	get_map.emplace("ExcAVR7.t4", &get_ExcAVR7_t4);
	get_map.emplace("ExcAVR7.t5", &get_ExcAVR7_t5);
	get_map.emplace("ExcAVR7.t6", &get_ExcAVR7_t6);
	get_map.emplace("ExcAVR7.vmax1", &get_ExcAVR7_vmax1);
	get_map.emplace("ExcAVR7.vmax3", &get_ExcAVR7_vmax3);
	get_map.emplace("ExcAVR7.vmax5", &get_ExcAVR7_vmax5);
	get_map.emplace("ExcAVR7.vmin1", &get_ExcAVR7_vmin1);
	get_map.emplace("ExcAVR7.vmin3", &get_ExcAVR7_vmin3);
	get_map.emplace("ExcAVR7.vmin5", &get_ExcAVR7_vmin5);
}

void ExcAVR7::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcAVR7::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcAVR7::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcAVR7" &&
		dynamic_cast<ExcAVR7*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcAVR7::declare()
{
	return BaseClassDefiner(ExcAVR7::addConstructToMap, ExcAVR7::addPrimitiveAssignFnsToMap, ExcAVR7::addClassAssignFnsToMap, ExcAVR7::debugName);
}

std::map<std::string, AttrDetails> ExcAVR7::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcAVR7_factory()
	{
		return new ExcAVR7;
	}
}
