/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcRQB.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcRQB(),
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
		{ "ExcRQB.ki0", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcRQB.ki1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcRQB.klir", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcRQB.klus", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcRQB.lsat", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcRQB.lus", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcRQB.mesu", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcRQB.t4m", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcRQB.tc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcRQB.te", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcRQB.tf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcRQB.ucmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcRQB.ucmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcRQB::ExcRQB() {}
ExcRQB::~ExcRQB() {}

const std::list<std::string>& ExcRQB::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcRQB::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcRQB::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcRQB::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcRQB::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcRQB::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcRQB::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcRQB_ki0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcRQB_ki1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcRQB_klir(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->klir;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcRQB_klus(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->klus;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcRQB_lsat(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->lsat;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcRQB_lus(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->lus;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcRQB_mesu(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mesu;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcRQB_t4m(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t4m;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcRQB_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1);
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

bool assign_ExcRQB_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1);
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

bool assign_ExcRQB_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1);
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

bool assign_ExcRQB_ucmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ucmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcRQB_ucmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ucmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcRQB_ki0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ki0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcRQB_ki1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ki1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcRQB_klir(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->klir;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcRQB_klus(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->klus;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcRQB_lsat(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->lsat;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcRQB_lus(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->lus;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcRQB_mesu(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mesu;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcRQB_t4m(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t4m;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcRQB_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1);
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

bool get_ExcRQB_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1);
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

bool get_ExcRQB_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1);
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

bool get_ExcRQB_ucmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ucmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcRQB_ucmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcRQB* element = dynamic_cast<const ExcRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ucmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ExcRQB::debugName[] = "ExcRQB";
const char* ExcRQB::debugString() const
{
	return ExcRQB::debugName;
}

void ExcRQB::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcRQB", &ExcRQB_factory);
}

void ExcRQB::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcRQB.ki0", &assign_ExcRQB_ki0);
	assign_map.emplace("ExcRQB.ki1", &assign_ExcRQB_ki1);
	assign_map.emplace("ExcRQB.klir", &assign_ExcRQB_klir);
	assign_map.emplace("ExcRQB.klus", &assign_ExcRQB_klus);
	assign_map.emplace("ExcRQB.lsat", &assign_ExcRQB_lsat);
	assign_map.emplace("ExcRQB.lus", &assign_ExcRQB_lus);
	assign_map.emplace("ExcRQB.mesu", &assign_ExcRQB_mesu);
	assign_map.emplace("ExcRQB.t4m", &assign_ExcRQB_t4m);
	assign_map.emplace("ExcRQB.tc", &assign_ExcRQB_tc);
	assign_map.emplace("ExcRQB.te", &assign_ExcRQB_te);
	assign_map.emplace("ExcRQB.tf", &assign_ExcRQB_tf);
	assign_map.emplace("ExcRQB.ucmax", &assign_ExcRQB_ucmax);
	assign_map.emplace("ExcRQB.ucmin", &assign_ExcRQB_ucmin);
}

void ExcRQB::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcRQB::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcRQB.ki0", &get_ExcRQB_ki0);
	get_map.emplace("ExcRQB.ki1", &get_ExcRQB_ki1);
	get_map.emplace("ExcRQB.klir", &get_ExcRQB_klir);
	get_map.emplace("ExcRQB.klus", &get_ExcRQB_klus);
	get_map.emplace("ExcRQB.lsat", &get_ExcRQB_lsat);
	get_map.emplace("ExcRQB.lus", &get_ExcRQB_lus);
	get_map.emplace("ExcRQB.mesu", &get_ExcRQB_mesu);
	get_map.emplace("ExcRQB.t4m", &get_ExcRQB_t4m);
	get_map.emplace("ExcRQB.tc", &get_ExcRQB_tc);
	get_map.emplace("ExcRQB.te", &get_ExcRQB_te);
	get_map.emplace("ExcRQB.tf", &get_ExcRQB_tf);
	get_map.emplace("ExcRQB.ucmax", &get_ExcRQB_ucmax);
	get_map.emplace("ExcRQB.ucmin", &get_ExcRQB_ucmin);
}

void ExcRQB::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcRQB::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcRQB::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcRQB" &&
		dynamic_cast<ExcRQB*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcRQB::declare()
{
	return BaseClassDefiner(ExcRQB::addConstructToMap, ExcRQB::addPrimitiveAssignFnsToMap, ExcRQB::addClassAssignFnsToMap, ExcRQB::debugName);
}

std::map<std::string, AttrDetails> ExcRQB::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcRQB_factory()
	{
		return new ExcRQB;
	}
}
