/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Pss1A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		Pss1A(),
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
		{ "Pss1A.a1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "Pss1A.a2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "Pss1A.a3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "Pss1A.a4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "Pss1A.a5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "Pss1A.a6", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "Pss1A.a7", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "Pss1A.a8", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "Pss1A.inputSignalType", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "Pss1A.kd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "Pss1A.ks", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "Pss1A.t1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "Pss1A.t2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "Pss1A.t3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "Pss1A.t4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "Pss1A.t5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "Pss1A.t6", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "Pss1A.tdelay", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "Pss1A.vcl", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "Pss1A.vcu", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "Pss1A.vrmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "Pss1A.vrmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

Pss1A::Pss1A() {}
Pss1A::~Pss1A() {}

const std::list<std::string>& Pss1A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& Pss1A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& Pss1A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& Pss1A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& Pss1A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& Pss1A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& Pss1A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_Pss1A_a1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1);
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

bool assign_Pss1A_a2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1);
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

bool assign_Pss1A_a3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1);
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

bool assign_Pss1A_a4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1);
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

bool assign_Pss1A_a5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1);
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

bool assign_Pss1A_a6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1);
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

bool assign_Pss1A_a7(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a7;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss1A_a8(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a8;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss1A_inputSignalType(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->inputSignalType;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss1A_kd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1);
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

bool assign_Pss1A_ks(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1);
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

bool assign_Pss1A_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1);
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

bool assign_Pss1A_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1);
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

bool assign_Pss1A_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1);
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

bool assign_Pss1A_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1);
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

bool assign_Pss1A_t5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1);
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

bool assign_Pss1A_t6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1);
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

bool assign_Pss1A_tdelay(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tdelay;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss1A_vcl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1);
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

bool assign_Pss1A_vcu(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1);
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

bool assign_Pss1A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1);
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

bool assign_Pss1A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1);
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

bool get_Pss1A_a1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1A* element = dynamic_cast<const Pss1A*>(BaseClass_ptr1);
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

bool get_Pss1A_a2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1A* element = dynamic_cast<const Pss1A*>(BaseClass_ptr1);
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

bool get_Pss1A_a3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1A* element = dynamic_cast<const Pss1A*>(BaseClass_ptr1);
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

bool get_Pss1A_a4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1A* element = dynamic_cast<const Pss1A*>(BaseClass_ptr1);
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

bool get_Pss1A_a5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1A* element = dynamic_cast<const Pss1A*>(BaseClass_ptr1);
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

bool get_Pss1A_a6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1A* element = dynamic_cast<const Pss1A*>(BaseClass_ptr1);
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

bool get_Pss1A_a7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1A* element = dynamic_cast<const Pss1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a7;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss1A_a8(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1A* element = dynamic_cast<const Pss1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a8;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss1A_inputSignalType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1A* element = dynamic_cast<const Pss1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->inputSignalType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss1A_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1A* element = dynamic_cast<const Pss1A*>(BaseClass_ptr1);
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

bool get_Pss1A_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1A* element = dynamic_cast<const Pss1A*>(BaseClass_ptr1);
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

bool get_Pss1A_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1A* element = dynamic_cast<const Pss1A*>(BaseClass_ptr1);
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

bool get_Pss1A_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1A* element = dynamic_cast<const Pss1A*>(BaseClass_ptr1);
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

bool get_Pss1A_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1A* element = dynamic_cast<const Pss1A*>(BaseClass_ptr1);
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

bool get_Pss1A_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1A* element = dynamic_cast<const Pss1A*>(BaseClass_ptr1);
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

bool get_Pss1A_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1A* element = dynamic_cast<const Pss1A*>(BaseClass_ptr1);
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

bool get_Pss1A_t6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1A* element = dynamic_cast<const Pss1A*>(BaseClass_ptr1);
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

bool get_Pss1A_tdelay(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1A* element = dynamic_cast<const Pss1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tdelay;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss1A_vcl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1A* element = dynamic_cast<const Pss1A*>(BaseClass_ptr1);
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

bool get_Pss1A_vcu(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1A* element = dynamic_cast<const Pss1A*>(BaseClass_ptr1);
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

bool get_Pss1A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1A* element = dynamic_cast<const Pss1A*>(BaseClass_ptr1);
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

bool get_Pss1A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1A* element = dynamic_cast<const Pss1A*>(BaseClass_ptr1);
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

const char Pss1A::debugName[] = "Pss1A";
const char* Pss1A::debugString() const
{
	return Pss1A::debugName;
}

void Pss1A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("Pss1A", &Pss1A_factory);
}

void Pss1A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("Pss1A.a1", &assign_Pss1A_a1);
	assign_map.emplace("Pss1A.a2", &assign_Pss1A_a2);
	assign_map.emplace("Pss1A.a3", &assign_Pss1A_a3);
	assign_map.emplace("Pss1A.a4", &assign_Pss1A_a4);
	assign_map.emplace("Pss1A.a5", &assign_Pss1A_a5);
	assign_map.emplace("Pss1A.a6", &assign_Pss1A_a6);
	assign_map.emplace("Pss1A.a7", &assign_Pss1A_a7);
	assign_map.emplace("Pss1A.a8", &assign_Pss1A_a8);
	assign_map.emplace("Pss1A.inputSignalType", &assign_Pss1A_inputSignalType);
	assign_map.emplace("Pss1A.kd", &assign_Pss1A_kd);
	assign_map.emplace("Pss1A.ks", &assign_Pss1A_ks);
	assign_map.emplace("Pss1A.t1", &assign_Pss1A_t1);
	assign_map.emplace("Pss1A.t2", &assign_Pss1A_t2);
	assign_map.emplace("Pss1A.t3", &assign_Pss1A_t3);
	assign_map.emplace("Pss1A.t4", &assign_Pss1A_t4);
	assign_map.emplace("Pss1A.t5", &assign_Pss1A_t5);
	assign_map.emplace("Pss1A.t6", &assign_Pss1A_t6);
	assign_map.emplace("Pss1A.tdelay", &assign_Pss1A_tdelay);
	assign_map.emplace("Pss1A.vcl", &assign_Pss1A_vcl);
	assign_map.emplace("Pss1A.vcu", &assign_Pss1A_vcu);
	assign_map.emplace("Pss1A.vrmax", &assign_Pss1A_vrmax);
	assign_map.emplace("Pss1A.vrmin", &assign_Pss1A_vrmin);
}

void Pss1A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void Pss1A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("Pss1A.a1", &get_Pss1A_a1);
	get_map.emplace("Pss1A.a2", &get_Pss1A_a2);
	get_map.emplace("Pss1A.a3", &get_Pss1A_a3);
	get_map.emplace("Pss1A.a4", &get_Pss1A_a4);
	get_map.emplace("Pss1A.a5", &get_Pss1A_a5);
	get_map.emplace("Pss1A.a6", &get_Pss1A_a6);
	get_map.emplace("Pss1A.a7", &get_Pss1A_a7);
	get_map.emplace("Pss1A.a8", &get_Pss1A_a8);
	get_map.emplace("Pss1A.kd", &get_Pss1A_kd);
	get_map.emplace("Pss1A.ks", &get_Pss1A_ks);
	get_map.emplace("Pss1A.t1", &get_Pss1A_t1);
	get_map.emplace("Pss1A.t2", &get_Pss1A_t2);
	get_map.emplace("Pss1A.t3", &get_Pss1A_t3);
	get_map.emplace("Pss1A.t4", &get_Pss1A_t4);
	get_map.emplace("Pss1A.t5", &get_Pss1A_t5);
	get_map.emplace("Pss1A.t6", &get_Pss1A_t6);
	get_map.emplace("Pss1A.tdelay", &get_Pss1A_tdelay);
	get_map.emplace("Pss1A.vcl", &get_Pss1A_vcl);
	get_map.emplace("Pss1A.vcu", &get_Pss1A_vcu);
	get_map.emplace("Pss1A.vrmax", &get_Pss1A_vrmax);
	get_map.emplace("Pss1A.vrmin", &get_Pss1A_vrmin);
}

void Pss1A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void Pss1A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("Pss1A.inputSignalType", &get_Pss1A_inputSignalType);
}

bool Pss1A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "Pss1A" &&
		dynamic_cast<Pss1A*>(otherObject) != nullptr;
}

const BaseClassDefiner Pss1A::declare()
{
	return BaseClassDefiner(Pss1A::addConstructToMap, Pss1A::addPrimitiveAssignFnsToMap, Pss1A::addClassAssignFnsToMap, Pss1A::debugName);
}

std::map<std::string, AttrDetails> Pss1A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemStabilizerDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* Pss1A_factory()
	{
		return new Pss1A;
	}
}
