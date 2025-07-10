/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LoadMotor.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "LoadAggregate.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		LoadMotor(),
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
		{ "LoadMotor.LoadAggregate", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "LoadMotor.d", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "LoadMotor.h", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "LoadMotor.lfac", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "LoadMotor.lp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "LoadMotor.lpp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "LoadMotor.ls", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "LoadMotor.pfrac", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "LoadMotor.ra", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "LoadMotor.tbkr", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "LoadMotor.tpo", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "LoadMotor.tppo", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "LoadMotor.tv", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "LoadMotor.vt", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

LoadMotor::LoadMotor() : LoadAggregate(nullptr) {}
LoadMotor::~LoadMotor() {}

const std::list<std::string>& LoadMotor::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& LoadMotor::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& LoadMotor::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& LoadMotor::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& LoadMotor::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& LoadMotor::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& LoadMotor::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_LoadAggregate_LoadMotor(BaseClass*, BaseClass*);
bool assign_LoadMotor_LoadAggregate(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	LoadAggregate* element2 = dynamic_cast<LoadAggregate*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LoadAggregate != element2)
		{
			element->LoadAggregate = element2;
			return assign_LoadAggregate_LoadMotor(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_LoadMotor_d(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->d;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_h(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->h;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_lfac(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->lfac;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_lp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->lp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_lpp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->lpp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_ls(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ls;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_pfrac(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pfrac;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_ra(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ra;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_tbkr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tbkr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_tpo(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpo;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_tppo(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tppo;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_tv(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tv;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadMotor_vt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadMotor* element = dynamic_cast<LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_LoadMotor_LoadAggregate(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->LoadAggregate != 0)
		{
			BaseClass_list.push_back(element->LoadAggregate);
			return true;
		}
	}
	return false;
}

bool get_LoadMotor_d(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->d;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_h(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->h;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_lfac(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->lfac;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_lp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->lp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_lpp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->lpp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_ls(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ls;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_pfrac(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pfrac;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_ra(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ra;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_tbkr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tbkr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_tpo(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tpo;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_tppo(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tppo;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_tv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadMotor_vt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadMotor* element = dynamic_cast<const LoadMotor*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char LoadMotor::debugName[] = "LoadMotor";
const char* LoadMotor::debugString() const
{
	return LoadMotor::debugName;
}

void LoadMotor::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("LoadMotor", &LoadMotor_factory);
}

void LoadMotor::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("LoadMotor.d", &assign_LoadMotor_d);
	assign_map.emplace("LoadMotor.h", &assign_LoadMotor_h);
	assign_map.emplace("LoadMotor.lfac", &assign_LoadMotor_lfac);
	assign_map.emplace("LoadMotor.lp", &assign_LoadMotor_lp);
	assign_map.emplace("LoadMotor.lpp", &assign_LoadMotor_lpp);
	assign_map.emplace("LoadMotor.ls", &assign_LoadMotor_ls);
	assign_map.emplace("LoadMotor.pfrac", &assign_LoadMotor_pfrac);
	assign_map.emplace("LoadMotor.ra", &assign_LoadMotor_ra);
	assign_map.emplace("LoadMotor.tbkr", &assign_LoadMotor_tbkr);
	assign_map.emplace("LoadMotor.tpo", &assign_LoadMotor_tpo);
	assign_map.emplace("LoadMotor.tppo", &assign_LoadMotor_tppo);
	assign_map.emplace("LoadMotor.tv", &assign_LoadMotor_tv);
	assign_map.emplace("LoadMotor.vt", &assign_LoadMotor_vt);
}

void LoadMotor::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("LoadMotor.LoadAggregate", &assign_LoadMotor_LoadAggregate);
}

void LoadMotor::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("LoadMotor.d", &get_LoadMotor_d);
	get_map.emplace("LoadMotor.h", &get_LoadMotor_h);
	get_map.emplace("LoadMotor.lfac", &get_LoadMotor_lfac);
	get_map.emplace("LoadMotor.lp", &get_LoadMotor_lp);
	get_map.emplace("LoadMotor.lpp", &get_LoadMotor_lpp);
	get_map.emplace("LoadMotor.ls", &get_LoadMotor_ls);
	get_map.emplace("LoadMotor.pfrac", &get_LoadMotor_pfrac);
	get_map.emplace("LoadMotor.ra", &get_LoadMotor_ra);
	get_map.emplace("LoadMotor.tbkr", &get_LoadMotor_tbkr);
	get_map.emplace("LoadMotor.tpo", &get_LoadMotor_tpo);
	get_map.emplace("LoadMotor.tppo", &get_LoadMotor_tppo);
	get_map.emplace("LoadMotor.tv", &get_LoadMotor_tv);
	get_map.emplace("LoadMotor.vt", &get_LoadMotor_vt);
}

void LoadMotor::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("LoadMotor.LoadAggregate", &get_LoadMotor_LoadAggregate);
}

void LoadMotor::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool LoadMotor::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "LoadMotor" &&
		dynamic_cast<LoadMotor*>(otherObject) != nullptr;
}

const BaseClassDefiner LoadMotor::declare()
{
	return BaseClassDefiner(LoadMotor::addConstructToMap, LoadMotor::addPrimitiveAssignFnsToMap, LoadMotor::addClassAssignFnsToMap, LoadMotor::debugName);
}

std::map<std::string, AttrDetails> LoadMotor::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* LoadMotor_factory()
	{
		return new LoadMotor;
	}
}
