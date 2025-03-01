/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LoadComposite.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

LoadComposite::LoadComposite() {}
LoadComposite::~LoadComposite() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:LoadComposite.epfd", { CGMESProfile::DY, } },
	{ "cim:LoadComposite.epfs", { CGMESProfile::DY, } },
	{ "cim:LoadComposite.epvd", { CGMESProfile::DY, } },
	{ "cim:LoadComposite.epvs", { CGMESProfile::DY, } },
	{ "cim:LoadComposite.eqfd", { CGMESProfile::DY, } },
	{ "cim:LoadComposite.eqfs", { CGMESProfile::DY, } },
	{ "cim:LoadComposite.eqvd", { CGMESProfile::DY, } },
	{ "cim:LoadComposite.eqvs", { CGMESProfile::DY, } },
	{ "cim:LoadComposite.h", { CGMESProfile::DY, } },
	{ "cim:LoadComposite.lfrac", { CGMESProfile::DY, } },
	{ "cim:LoadComposite.pfrac", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
LoadComposite::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
LoadComposite::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = LoadDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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

bool assign_LoadComposite_lfrac(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadComposite* element = dynamic_cast<LoadComposite*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->lfrac;
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

bool get_LoadComposite_lfrac(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadComposite* element = dynamic_cast<const LoadComposite*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->lfrac;
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
	factory_map.emplace("cim:LoadComposite", &LoadComposite_factory);
}

void LoadComposite::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:LoadComposite.epfd", &assign_LoadComposite_epfd);
	assign_map.emplace("cim:LoadComposite.epfs", &assign_LoadComposite_epfs);
	assign_map.emplace("cim:LoadComposite.epvd", &assign_LoadComposite_epvd);
	assign_map.emplace("cim:LoadComposite.epvs", &assign_LoadComposite_epvs);
	assign_map.emplace("cim:LoadComposite.eqfd", &assign_LoadComposite_eqfd);
	assign_map.emplace("cim:LoadComposite.eqfs", &assign_LoadComposite_eqfs);
	assign_map.emplace("cim:LoadComposite.eqvd", &assign_LoadComposite_eqvd);
	assign_map.emplace("cim:LoadComposite.eqvs", &assign_LoadComposite_eqvs);
	assign_map.emplace("cim:LoadComposite.h", &assign_LoadComposite_h);
	assign_map.emplace("cim:LoadComposite.lfrac", &assign_LoadComposite_lfrac);
	assign_map.emplace("cim:LoadComposite.pfrac", &assign_LoadComposite_pfrac);
}

void LoadComposite::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void LoadComposite::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	LoadDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:LoadComposite.epfd", &get_LoadComposite_epfd);
	get_map.emplace("cim:LoadComposite.epfs", &get_LoadComposite_epfs);
	get_map.emplace("cim:LoadComposite.epvd", &get_LoadComposite_epvd);
	get_map.emplace("cim:LoadComposite.epvs", &get_LoadComposite_epvs);
	get_map.emplace("cim:LoadComposite.eqfd", &get_LoadComposite_eqfd);
	get_map.emplace("cim:LoadComposite.eqfs", &get_LoadComposite_eqfs);
	get_map.emplace("cim:LoadComposite.eqvd", &get_LoadComposite_eqvd);
	get_map.emplace("cim:LoadComposite.eqvs", &get_LoadComposite_eqvs);
	get_map.emplace("cim:LoadComposite.h", &get_LoadComposite_h);
	get_map.emplace("cim:LoadComposite.lfrac", &get_LoadComposite_lfrac);
	get_map.emplace("cim:LoadComposite.pfrac", &get_LoadComposite_pfrac);
}

void LoadComposite::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	LoadDynamics::addClassGetFnsToMap(get_map);
}

void LoadComposite::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	LoadDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner LoadComposite::declare()
{
	return BaseClassDefiner(LoadComposite::addConstructToMap, LoadComposite::addPrimitiveAssignFnsToMap, LoadComposite::addClassAssignFnsToMap, LoadComposite::debugName);
}

namespace CIMPP
{
	BaseClass* LoadComposite_factory()
	{
		return new LoadComposite;
	}
}
