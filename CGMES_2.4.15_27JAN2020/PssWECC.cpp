/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PssWECC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PssWECC(),
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
		{ "PssWECC.inputSignal1Type", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssWECC.inputSignal2Type", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssWECC.k1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssWECC.k2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssWECC.t1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssWECC.t10", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssWECC.t2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssWECC.t3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssWECC.t4", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssWECC.t5", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssWECC.t6", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssWECC.t7", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssWECC.t8", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssWECC.t9", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssWECC.vcl", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssWECC.vcu", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssWECC.vsmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssWECC.vsmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

PssWECC::PssWECC() {}
PssWECC::~PssWECC() {}

const std::list<std::string>& PssWECC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PssWECC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PssWECC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PssWECC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PssWECC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PssWECC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PssWECC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PssWECC_inputSignal1Type(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->inputSignal1Type;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssWECC_inputSignal2Type(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->inputSignal2Type;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssWECC_k1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_k2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssWECC_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_t10(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t10;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssWECC_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_t5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_t6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
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

bool assign_PssWECC_t7(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t7;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssWECC_t8(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t8;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssWECC_t9(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t9;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssWECC_vcl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vcl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssWECC_vcu(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vcu;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssWECC_vsmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vsmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssWECC_vsmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vsmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_PssWECC_inputSignal1Type(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->inputSignal1Type;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssWECC_inputSignal2Type(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->inputSignal2Type;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssWECC_k1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssWECC_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_t10(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t10;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssWECC_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_t6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
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

bool get_PssWECC_t7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t7;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssWECC_t8(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t8;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssWECC_t9(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t9;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssWECC_vcl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vcl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssWECC_vcu(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vcu;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssWECC_vsmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vsmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssWECC_vsmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssWECC* element = dynamic_cast<const PssWECC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vsmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PssWECC::debugName[] = "PssWECC";
const char* PssWECC::debugString() const
{
	return PssWECC::debugName;
}

void PssWECC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PssWECC", &PssWECC_factory);
}

void PssWECC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PssWECC.inputSignal1Type", &assign_PssWECC_inputSignal1Type);
	assign_map.emplace("PssWECC.inputSignal2Type", &assign_PssWECC_inputSignal2Type);
	assign_map.emplace("PssWECC.k1", &assign_PssWECC_k1);
	assign_map.emplace("PssWECC.k2", &assign_PssWECC_k2);
	assign_map.emplace("PssWECC.t1", &assign_PssWECC_t1);
	assign_map.emplace("PssWECC.t10", &assign_PssWECC_t10);
	assign_map.emplace("PssWECC.t2", &assign_PssWECC_t2);
	assign_map.emplace("PssWECC.t3", &assign_PssWECC_t3);
	assign_map.emplace("PssWECC.t4", &assign_PssWECC_t4);
	assign_map.emplace("PssWECC.t5", &assign_PssWECC_t5);
	assign_map.emplace("PssWECC.t6", &assign_PssWECC_t6);
	assign_map.emplace("PssWECC.t7", &assign_PssWECC_t7);
	assign_map.emplace("PssWECC.t8", &assign_PssWECC_t8);
	assign_map.emplace("PssWECC.t9", &assign_PssWECC_t9);
	assign_map.emplace("PssWECC.vcl", &assign_PssWECC_vcl);
	assign_map.emplace("PssWECC.vcu", &assign_PssWECC_vcu);
	assign_map.emplace("PssWECC.vsmax", &assign_PssWECC_vsmax);
	assign_map.emplace("PssWECC.vsmin", &assign_PssWECC_vsmin);
}

void PssWECC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PssWECC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PssWECC.k1", &get_PssWECC_k1);
	get_map.emplace("PssWECC.k2", &get_PssWECC_k2);
	get_map.emplace("PssWECC.t1", &get_PssWECC_t1);
	get_map.emplace("PssWECC.t10", &get_PssWECC_t10);
	get_map.emplace("PssWECC.t2", &get_PssWECC_t2);
	get_map.emplace("PssWECC.t3", &get_PssWECC_t3);
	get_map.emplace("PssWECC.t4", &get_PssWECC_t4);
	get_map.emplace("PssWECC.t5", &get_PssWECC_t5);
	get_map.emplace("PssWECC.t6", &get_PssWECC_t6);
	get_map.emplace("PssWECC.t7", &get_PssWECC_t7);
	get_map.emplace("PssWECC.t8", &get_PssWECC_t8);
	get_map.emplace("PssWECC.t9", &get_PssWECC_t9);
	get_map.emplace("PssWECC.vcl", &get_PssWECC_vcl);
	get_map.emplace("PssWECC.vcu", &get_PssWECC_vcu);
	get_map.emplace("PssWECC.vsmax", &get_PssWECC_vsmax);
	get_map.emplace("PssWECC.vsmin", &get_PssWECC_vsmin);
}

void PssWECC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void PssWECC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("PssWECC.inputSignal1Type", &get_PssWECC_inputSignal1Type);
	get_map.emplace("PssWECC.inputSignal2Type", &get_PssWECC_inputSignal2Type);
}

bool PssWECC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PssWECC" &&
		dynamic_cast<PssWECC*>(otherObject) != nullptr;
}

const BaseClassDefiner PssWECC::declare()
{
	return BaseClassDefiner(PssWECC::addConstructToMap, PssWECC::addPrimitiveAssignFnsToMap, PssWECC::addClassAssignFnsToMap, PssWECC::debugName);
}

std::map<std::string, AttrDetails> PssWECC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemStabilizerDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PssWECC_factory()
	{
		return new PssWECC;
	}
}
