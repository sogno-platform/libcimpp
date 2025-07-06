/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiscExcContIEEEDEC1A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DiscExcContIEEEDEC1A(),
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
		{ "DiscExcContIEEEDEC1A.esc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "DiscExcContIEEEDEC1A.kan", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "DiscExcContIEEEDEC1A.ketl", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "DiscExcContIEEEDEC1A.tan", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "DiscExcContIEEEDEC1A.td", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "DiscExcContIEEEDEC1A.tl1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "DiscExcContIEEEDEC1A.tl2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "DiscExcContIEEEDEC1A.tw5", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "DiscExcContIEEEDEC1A.val", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "DiscExcContIEEEDEC1A.vanmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "DiscExcContIEEEDEC1A.vomax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "DiscExcContIEEEDEC1A.vomin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "DiscExcContIEEEDEC1A.vsmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "DiscExcContIEEEDEC1A.vsmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "DiscExcContIEEEDEC1A.vtc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "DiscExcContIEEEDEC1A.vtlmt", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "DiscExcContIEEEDEC1A.vtm", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "DiscExcContIEEEDEC1A.vtn", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

DiscExcContIEEEDEC1A::DiscExcContIEEEDEC1A() {}
DiscExcContIEEEDEC1A::~DiscExcContIEEEDEC1A() {}

const std::list<std::string>& DiscExcContIEEEDEC1A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DiscExcContIEEEDEC1A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DiscExcContIEEEDEC1A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DiscExcContIEEEDEC1A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DiscExcContIEEEDEC1A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DiscExcContIEEEDEC1A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DiscExcContIEEEDEC1A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_DiscExcContIEEEDEC1A_esc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->esc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_kan(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kan;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_ketl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ketl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_tan(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tan;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_td(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->td;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_tl1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tl1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_tl2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tl2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_tw5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tw5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_val(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->val;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_vanmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vanmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_vomax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vomax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_vomin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vomin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_vsmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
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

bool assign_DiscExcContIEEEDEC1A_vsmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
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

bool assign_DiscExcContIEEEDEC1A_vtc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vtc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_vtlmt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vtlmt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_vtm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vtm;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_vtn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vtn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_DiscExcContIEEEDEC1A_esc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC1A* element = dynamic_cast<const DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->esc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC1A_kan(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC1A* element = dynamic_cast<const DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kan;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC1A_ketl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC1A* element = dynamic_cast<const DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ketl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC1A_tan(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC1A* element = dynamic_cast<const DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tan;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC1A_td(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC1A* element = dynamic_cast<const DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->td;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC1A_tl1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC1A* element = dynamic_cast<const DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tl1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC1A_tl2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC1A* element = dynamic_cast<const DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tl2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC1A_tw5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC1A* element = dynamic_cast<const DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tw5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC1A_val(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC1A* element = dynamic_cast<const DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->val;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC1A_vanmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC1A* element = dynamic_cast<const DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vanmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC1A_vomax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC1A* element = dynamic_cast<const DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vomax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC1A_vomin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC1A* element = dynamic_cast<const DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vomin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC1A_vsmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC1A* element = dynamic_cast<const DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
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

bool get_DiscExcContIEEEDEC1A_vsmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC1A* element = dynamic_cast<const DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
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

bool get_DiscExcContIEEEDEC1A_vtc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC1A* element = dynamic_cast<const DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vtc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC1A_vtlmt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC1A* element = dynamic_cast<const DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vtlmt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC1A_vtm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC1A* element = dynamic_cast<const DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vtm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_DiscExcContIEEEDEC1A_vtn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscExcContIEEEDEC1A* element = dynamic_cast<const DiscExcContIEEEDEC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vtn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char DiscExcContIEEEDEC1A::debugName[] = "DiscExcContIEEEDEC1A";
const char* DiscExcContIEEEDEC1A::debugString() const
{
	return DiscExcContIEEEDEC1A::debugName;
}

void DiscExcContIEEEDEC1A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("DiscExcContIEEEDEC1A", &DiscExcContIEEEDEC1A_factory);
}

void DiscExcContIEEEDEC1A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("DiscExcContIEEEDEC1A.esc", &assign_DiscExcContIEEEDEC1A_esc);
	assign_map.emplace("DiscExcContIEEEDEC1A.kan", &assign_DiscExcContIEEEDEC1A_kan);
	assign_map.emplace("DiscExcContIEEEDEC1A.ketl", &assign_DiscExcContIEEEDEC1A_ketl);
	assign_map.emplace("DiscExcContIEEEDEC1A.tan", &assign_DiscExcContIEEEDEC1A_tan);
	assign_map.emplace("DiscExcContIEEEDEC1A.td", &assign_DiscExcContIEEEDEC1A_td);
	assign_map.emplace("DiscExcContIEEEDEC1A.tl1", &assign_DiscExcContIEEEDEC1A_tl1);
	assign_map.emplace("DiscExcContIEEEDEC1A.tl2", &assign_DiscExcContIEEEDEC1A_tl2);
	assign_map.emplace("DiscExcContIEEEDEC1A.tw5", &assign_DiscExcContIEEEDEC1A_tw5);
	assign_map.emplace("DiscExcContIEEEDEC1A.val", &assign_DiscExcContIEEEDEC1A_val);
	assign_map.emplace("DiscExcContIEEEDEC1A.vanmax", &assign_DiscExcContIEEEDEC1A_vanmax);
	assign_map.emplace("DiscExcContIEEEDEC1A.vomax", &assign_DiscExcContIEEEDEC1A_vomax);
	assign_map.emplace("DiscExcContIEEEDEC1A.vomin", &assign_DiscExcContIEEEDEC1A_vomin);
	assign_map.emplace("DiscExcContIEEEDEC1A.vsmax", &assign_DiscExcContIEEEDEC1A_vsmax);
	assign_map.emplace("DiscExcContIEEEDEC1A.vsmin", &assign_DiscExcContIEEEDEC1A_vsmin);
	assign_map.emplace("DiscExcContIEEEDEC1A.vtc", &assign_DiscExcContIEEEDEC1A_vtc);
	assign_map.emplace("DiscExcContIEEEDEC1A.vtlmt", &assign_DiscExcContIEEEDEC1A_vtlmt);
	assign_map.emplace("DiscExcContIEEEDEC1A.vtm", &assign_DiscExcContIEEEDEC1A_vtm);
	assign_map.emplace("DiscExcContIEEEDEC1A.vtn", &assign_DiscExcContIEEEDEC1A_vtn);
}

void DiscExcContIEEEDEC1A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DiscExcContIEEEDEC1A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DiscontinuousExcitationControlDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("DiscExcContIEEEDEC1A.esc", &get_DiscExcContIEEEDEC1A_esc);
	get_map.emplace("DiscExcContIEEEDEC1A.kan", &get_DiscExcContIEEEDEC1A_kan);
	get_map.emplace("DiscExcContIEEEDEC1A.ketl", &get_DiscExcContIEEEDEC1A_ketl);
	get_map.emplace("DiscExcContIEEEDEC1A.tan", &get_DiscExcContIEEEDEC1A_tan);
	get_map.emplace("DiscExcContIEEEDEC1A.td", &get_DiscExcContIEEEDEC1A_td);
	get_map.emplace("DiscExcContIEEEDEC1A.tl1", &get_DiscExcContIEEEDEC1A_tl1);
	get_map.emplace("DiscExcContIEEEDEC1A.tl2", &get_DiscExcContIEEEDEC1A_tl2);
	get_map.emplace("DiscExcContIEEEDEC1A.tw5", &get_DiscExcContIEEEDEC1A_tw5);
	get_map.emplace("DiscExcContIEEEDEC1A.val", &get_DiscExcContIEEEDEC1A_val);
	get_map.emplace("DiscExcContIEEEDEC1A.vanmax", &get_DiscExcContIEEEDEC1A_vanmax);
	get_map.emplace("DiscExcContIEEEDEC1A.vomax", &get_DiscExcContIEEEDEC1A_vomax);
	get_map.emplace("DiscExcContIEEEDEC1A.vomin", &get_DiscExcContIEEEDEC1A_vomin);
	get_map.emplace("DiscExcContIEEEDEC1A.vsmax", &get_DiscExcContIEEEDEC1A_vsmax);
	get_map.emplace("DiscExcContIEEEDEC1A.vsmin", &get_DiscExcContIEEEDEC1A_vsmin);
	get_map.emplace("DiscExcContIEEEDEC1A.vtc", &get_DiscExcContIEEEDEC1A_vtc);
	get_map.emplace("DiscExcContIEEEDEC1A.vtlmt", &get_DiscExcContIEEEDEC1A_vtlmt);
	get_map.emplace("DiscExcContIEEEDEC1A.vtm", &get_DiscExcContIEEEDEC1A_vtm);
	get_map.emplace("DiscExcContIEEEDEC1A.vtn", &get_DiscExcContIEEEDEC1A_vtn);
}

void DiscExcContIEEEDEC1A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DiscontinuousExcitationControlDynamics::addClassGetFnsToMap(get_map);
}

void DiscExcContIEEEDEC1A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DiscontinuousExcitationControlDynamics::addEnumGetFnsToMap(get_map);
}

bool DiscExcContIEEEDEC1A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DiscExcContIEEEDEC1A" &&
		dynamic_cast<DiscExcContIEEEDEC1A*>(otherObject) != nullptr;
}

const BaseClassDefiner DiscExcContIEEEDEC1A::declare()
{
	return BaseClassDefiner(DiscExcContIEEEDEC1A::addConstructToMap, DiscExcContIEEEDEC1A::addPrimitiveAssignFnsToMap, DiscExcContIEEEDEC1A::addClassAssignFnsToMap, DiscExcContIEEEDEC1A::debugName);
}

std::map<std::string, AttrDetails> DiscExcContIEEEDEC1A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DiscontinuousExcitationControlDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DiscExcContIEEEDEC1A_factory()
	{
		return new DiscExcContIEEEDEC1A;
	}
}
