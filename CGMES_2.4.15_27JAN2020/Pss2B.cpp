/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Pss2B.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		Pss2B(),
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
		{ "Pss2B.a", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.inputSignal1Type", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.inputSignal2Type", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.ks1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.ks2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.ks3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.ks4", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.m", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.n", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.t1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.t10", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.t11", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.t2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.t3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.t4", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.t6", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.t7", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.t8", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.t9", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.ta", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.tb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.tw1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.tw2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.tw3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.tw4", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.vsi1max", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.vsi1min", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.vsi2max", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.vsi2min", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.vstmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "Pss2B.vstmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

Pss2B::Pss2B() {}
Pss2B::~Pss2B() {}

const std::list<std::string>& Pss2B::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& Pss2B::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& Pss2B::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& Pss2B::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& Pss2B::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& Pss2B::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& Pss2B::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_Pss2B_a(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2B_inputSignal1Type(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
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

bool assign_Pss2B_inputSignal2Type(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
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

bool assign_Pss2B_ks1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ks1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2B_ks2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ks2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2B_ks3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ks3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2B_ks4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ks4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2B_m(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->m;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2B_n(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->n;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2B_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
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

bool assign_Pss2B_t10(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
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

bool assign_Pss2B_t11(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t11;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2B_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
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

bool assign_Pss2B_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
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

bool assign_Pss2B_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
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

bool assign_Pss2B_t6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
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

bool assign_Pss2B_t7(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
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

bool assign_Pss2B_t8(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
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

bool assign_Pss2B_t9(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
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

bool assign_Pss2B_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
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

bool assign_Pss2B_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
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

bool assign_Pss2B_tw1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tw1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2B_tw2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tw2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2B_tw3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tw3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2B_tw4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tw4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2B_vsi1max(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vsi1max;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2B_vsi1min(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vsi1min;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2B_vsi2max(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vsi2max;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2B_vsi2min(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vsi2min;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2B_vstmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vstmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss2B_vstmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss2B* element = dynamic_cast<Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vstmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_Pss2B_a(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2B_inputSignal1Type(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
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

bool get_Pss2B_inputSignal2Type(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
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

bool get_Pss2B_ks1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ks1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2B_ks2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ks2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2B_ks3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ks3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2B_ks4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ks4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2B_m(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->m;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2B_n(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->n;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2B_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
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

bool get_Pss2B_t10(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
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

bool get_Pss2B_t11(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t11;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2B_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
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

bool get_Pss2B_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
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

bool get_Pss2B_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
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

bool get_Pss2B_t6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
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

bool get_Pss2B_t7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
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

bool get_Pss2B_t8(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
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

bool get_Pss2B_t9(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
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

bool get_Pss2B_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
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

bool get_Pss2B_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
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

bool get_Pss2B_tw1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tw1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2B_tw2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tw2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2B_tw3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tw3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2B_tw4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tw4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2B_vsi1max(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vsi1max;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2B_vsi1min(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vsi1min;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2B_vsi2max(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vsi2max;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2B_vsi2min(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vsi2min;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2B_vstmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vstmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss2B_vstmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss2B* element = dynamic_cast<const Pss2B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vstmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char Pss2B::debugName[] = "Pss2B";
const char* Pss2B::debugString() const
{
	return Pss2B::debugName;
}

void Pss2B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("Pss2B", &Pss2B_factory);
}

void Pss2B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("Pss2B.a", &assign_Pss2B_a);
	assign_map.emplace("Pss2B.inputSignal1Type", &assign_Pss2B_inputSignal1Type);
	assign_map.emplace("Pss2B.inputSignal2Type", &assign_Pss2B_inputSignal2Type);
	assign_map.emplace("Pss2B.ks1", &assign_Pss2B_ks1);
	assign_map.emplace("Pss2B.ks2", &assign_Pss2B_ks2);
	assign_map.emplace("Pss2B.ks3", &assign_Pss2B_ks3);
	assign_map.emplace("Pss2B.ks4", &assign_Pss2B_ks4);
	assign_map.emplace("Pss2B.m", &assign_Pss2B_m);
	assign_map.emplace("Pss2B.n", &assign_Pss2B_n);
	assign_map.emplace("Pss2B.t1", &assign_Pss2B_t1);
	assign_map.emplace("Pss2B.t10", &assign_Pss2B_t10);
	assign_map.emplace("Pss2B.t11", &assign_Pss2B_t11);
	assign_map.emplace("Pss2B.t2", &assign_Pss2B_t2);
	assign_map.emplace("Pss2B.t3", &assign_Pss2B_t3);
	assign_map.emplace("Pss2B.t4", &assign_Pss2B_t4);
	assign_map.emplace("Pss2B.t6", &assign_Pss2B_t6);
	assign_map.emplace("Pss2B.t7", &assign_Pss2B_t7);
	assign_map.emplace("Pss2B.t8", &assign_Pss2B_t8);
	assign_map.emplace("Pss2B.t9", &assign_Pss2B_t9);
	assign_map.emplace("Pss2B.ta", &assign_Pss2B_ta);
	assign_map.emplace("Pss2B.tb", &assign_Pss2B_tb);
	assign_map.emplace("Pss2B.tw1", &assign_Pss2B_tw1);
	assign_map.emplace("Pss2B.tw2", &assign_Pss2B_tw2);
	assign_map.emplace("Pss2B.tw3", &assign_Pss2B_tw3);
	assign_map.emplace("Pss2B.tw4", &assign_Pss2B_tw4);
	assign_map.emplace("Pss2B.vsi1max", &assign_Pss2B_vsi1max);
	assign_map.emplace("Pss2B.vsi1min", &assign_Pss2B_vsi1min);
	assign_map.emplace("Pss2B.vsi2max", &assign_Pss2B_vsi2max);
	assign_map.emplace("Pss2B.vsi2min", &assign_Pss2B_vsi2min);
	assign_map.emplace("Pss2B.vstmax", &assign_Pss2B_vstmax);
	assign_map.emplace("Pss2B.vstmin", &assign_Pss2B_vstmin);
}

void Pss2B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void Pss2B::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("Pss2B.a", &get_Pss2B_a);
	get_map.emplace("Pss2B.ks1", &get_Pss2B_ks1);
	get_map.emplace("Pss2B.ks2", &get_Pss2B_ks2);
	get_map.emplace("Pss2B.ks3", &get_Pss2B_ks3);
	get_map.emplace("Pss2B.ks4", &get_Pss2B_ks4);
	get_map.emplace("Pss2B.m", &get_Pss2B_m);
	get_map.emplace("Pss2B.n", &get_Pss2B_n);
	get_map.emplace("Pss2B.t1", &get_Pss2B_t1);
	get_map.emplace("Pss2B.t10", &get_Pss2B_t10);
	get_map.emplace("Pss2B.t11", &get_Pss2B_t11);
	get_map.emplace("Pss2B.t2", &get_Pss2B_t2);
	get_map.emplace("Pss2B.t3", &get_Pss2B_t3);
	get_map.emplace("Pss2B.t4", &get_Pss2B_t4);
	get_map.emplace("Pss2B.t6", &get_Pss2B_t6);
	get_map.emplace("Pss2B.t7", &get_Pss2B_t7);
	get_map.emplace("Pss2B.t8", &get_Pss2B_t8);
	get_map.emplace("Pss2B.t9", &get_Pss2B_t9);
	get_map.emplace("Pss2B.ta", &get_Pss2B_ta);
	get_map.emplace("Pss2B.tb", &get_Pss2B_tb);
	get_map.emplace("Pss2B.tw1", &get_Pss2B_tw1);
	get_map.emplace("Pss2B.tw2", &get_Pss2B_tw2);
	get_map.emplace("Pss2B.tw3", &get_Pss2B_tw3);
	get_map.emplace("Pss2B.tw4", &get_Pss2B_tw4);
	get_map.emplace("Pss2B.vsi1max", &get_Pss2B_vsi1max);
	get_map.emplace("Pss2B.vsi1min", &get_Pss2B_vsi1min);
	get_map.emplace("Pss2B.vsi2max", &get_Pss2B_vsi2max);
	get_map.emplace("Pss2B.vsi2min", &get_Pss2B_vsi2min);
	get_map.emplace("Pss2B.vstmax", &get_Pss2B_vstmax);
	get_map.emplace("Pss2B.vstmin", &get_Pss2B_vstmin);
}

void Pss2B::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void Pss2B::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("Pss2B.inputSignal1Type", &get_Pss2B_inputSignal1Type);
	get_map.emplace("Pss2B.inputSignal2Type", &get_Pss2B_inputSignal2Type);
}

bool Pss2B::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "Pss2B" &&
		dynamic_cast<Pss2B*>(otherObject) != nullptr;
}

const BaseClassDefiner Pss2B::declare()
{
	return BaseClassDefiner(Pss2B::addConstructToMap, Pss2B::addPrimitiveAssignFnsToMap, Pss2B::addClassAssignFnsToMap, Pss2B::debugName);
}

std::map<std::string, AttrDetails> Pss2B::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemStabilizerDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* Pss2B_factory()
	{
		return new Pss2B;
	}
}
