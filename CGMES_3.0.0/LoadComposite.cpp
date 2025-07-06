/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LoadComposite.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		LoadComposite(),
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
		{ "LoadComposite.epfd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadComposite.epfs", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadComposite.epvd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadComposite.epvs", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadComposite.eqfd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadComposite.eqfs", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadComposite.eqvd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadComposite.eqvs", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadComposite.h", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadComposite.lfac", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadComposite.pfrac", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

LoadComposite::LoadComposite() {}
LoadComposite::~LoadComposite() {}

const std::list<std::string>& LoadComposite::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& LoadComposite::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& LoadComposite::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& LoadComposite::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& LoadComposite::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& LoadComposite::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& LoadComposite::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_LoadComposite_epfd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadComposite* element = dynamic_cast<LoadComposite*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->epfd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadComposite_epfs(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadComposite* element = dynamic_cast<LoadComposite*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->epfs;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadComposite_epvd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadComposite* element = dynamic_cast<LoadComposite*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->epvd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadComposite_epvs(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadComposite* element = dynamic_cast<LoadComposite*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->epvs;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadComposite_eqfd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadComposite* element = dynamic_cast<LoadComposite*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->eqfd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadComposite_eqfs(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadComposite* element = dynamic_cast<LoadComposite*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->eqfs;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadComposite_eqvd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadComposite* element = dynamic_cast<LoadComposite*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->eqvd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadComposite_eqvs(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadComposite* element = dynamic_cast<LoadComposite*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->eqvs;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadComposite_h(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadComposite* element = dynamic_cast<LoadComposite*>(BaseClass_ptr1);
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

bool assign_LoadComposite_lfac(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadComposite* element = dynamic_cast<LoadComposite*>(BaseClass_ptr1);
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

bool assign_LoadComposite_pfrac(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadComposite* element = dynamic_cast<LoadComposite*>(BaseClass_ptr1);
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

bool get_LoadComposite_epfd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadComposite* element = dynamic_cast<const LoadComposite*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->epfd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadComposite_epfs(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadComposite* element = dynamic_cast<const LoadComposite*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->epfs;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadComposite_epvd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadComposite* element = dynamic_cast<const LoadComposite*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->epvd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadComposite_epvs(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadComposite* element = dynamic_cast<const LoadComposite*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->epvs;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadComposite_eqfd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadComposite* element = dynamic_cast<const LoadComposite*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->eqfd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadComposite_eqfs(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadComposite* element = dynamic_cast<const LoadComposite*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->eqfs;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadComposite_eqvd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadComposite* element = dynamic_cast<const LoadComposite*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->eqvd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadComposite_eqvs(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadComposite* element = dynamic_cast<const LoadComposite*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->eqvs;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadComposite_h(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadComposite* element = dynamic_cast<const LoadComposite*>(BaseClass_ptr1);
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

bool get_LoadComposite_lfac(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadComposite* element = dynamic_cast<const LoadComposite*>(BaseClass_ptr1);
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

bool get_LoadComposite_pfrac(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadComposite* element = dynamic_cast<const LoadComposite*>(BaseClass_ptr1);
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

const char LoadComposite::debugName[] = "LoadComposite";
const char* LoadComposite::debugString() const
{
	return LoadComposite::debugName;
}

void LoadComposite::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("LoadComposite", &LoadComposite_factory);
}

void LoadComposite::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("LoadComposite.epfd", &assign_LoadComposite_epfd);
	assign_map.emplace("LoadComposite.epfs", &assign_LoadComposite_epfs);
	assign_map.emplace("LoadComposite.epvd", &assign_LoadComposite_epvd);
	assign_map.emplace("LoadComposite.epvs", &assign_LoadComposite_epvs);
	assign_map.emplace("LoadComposite.eqfd", &assign_LoadComposite_eqfd);
	assign_map.emplace("LoadComposite.eqfs", &assign_LoadComposite_eqfs);
	assign_map.emplace("LoadComposite.eqvd", &assign_LoadComposite_eqvd);
	assign_map.emplace("LoadComposite.eqvs", &assign_LoadComposite_eqvs);
	assign_map.emplace("LoadComposite.h", &assign_LoadComposite_h);
	assign_map.emplace("LoadComposite.lfac", &assign_LoadComposite_lfac);
	assign_map.emplace("LoadComposite.pfrac", &assign_LoadComposite_pfrac);
}

void LoadComposite::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void LoadComposite::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	LoadDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("LoadComposite.epfd", &get_LoadComposite_epfd);
	get_map.emplace("LoadComposite.epfs", &get_LoadComposite_epfs);
	get_map.emplace("LoadComposite.epvd", &get_LoadComposite_epvd);
	get_map.emplace("LoadComposite.epvs", &get_LoadComposite_epvs);
	get_map.emplace("LoadComposite.eqfd", &get_LoadComposite_eqfd);
	get_map.emplace("LoadComposite.eqfs", &get_LoadComposite_eqfs);
	get_map.emplace("LoadComposite.eqvd", &get_LoadComposite_eqvd);
	get_map.emplace("LoadComposite.eqvs", &get_LoadComposite_eqvs);
	get_map.emplace("LoadComposite.h", &get_LoadComposite_h);
	get_map.emplace("LoadComposite.lfac", &get_LoadComposite_lfac);
	get_map.emplace("LoadComposite.pfrac", &get_LoadComposite_pfrac);
}

void LoadComposite::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	LoadDynamics::addClassGetFnsToMap(get_map);
}

void LoadComposite::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	LoadDynamics::addEnumGetFnsToMap(get_map);
}

bool LoadComposite::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "LoadComposite" &&
		dynamic_cast<LoadComposite*>(otherObject) != nullptr;
}

const BaseClassDefiner LoadComposite::declare()
{
	return BaseClassDefiner(LoadComposite::addConstructToMap, LoadComposite::addPrimitiveAssignFnsToMap, LoadComposite::addClassAssignFnsToMap, LoadComposite::debugName);
}

std::map<std::string, AttrDetails> LoadComposite::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = LoadDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* LoadComposite_factory()
	{
		return new LoadComposite;
	}
}
