/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LoadComposite.hpp"

#include <algorithm>
#include <sstream>

#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

LoadComposite::LoadComposite() {};
LoadComposite::~LoadComposite() {};


bool assign_LoadComposite_epfd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LoadComposite* element = dynamic_cast<LoadComposite*>(BaseClass_ptr1))
	{
		buffer >> element->epfd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_LoadComposite_epfs(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LoadComposite* element = dynamic_cast<LoadComposite*>(BaseClass_ptr1))
	{
		buffer >> element->epfs;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_LoadComposite_epvd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LoadComposite* element = dynamic_cast<LoadComposite*>(BaseClass_ptr1))
	{
		buffer >> element->epvd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_LoadComposite_epvs(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LoadComposite* element = dynamic_cast<LoadComposite*>(BaseClass_ptr1))
	{
		buffer >> element->epvs;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_LoadComposite_eqfd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LoadComposite* element = dynamic_cast<LoadComposite*>(BaseClass_ptr1))
	{
		buffer >> element->eqfd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_LoadComposite_eqfs(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LoadComposite* element = dynamic_cast<LoadComposite*>(BaseClass_ptr1))
	{
		buffer >> element->eqfs;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_LoadComposite_eqvd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LoadComposite* element = dynamic_cast<LoadComposite*>(BaseClass_ptr1))
	{
		buffer >> element->eqvd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_LoadComposite_eqvs(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LoadComposite* element = dynamic_cast<LoadComposite*>(BaseClass_ptr1))
	{
		buffer >> element->eqvs;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_LoadComposite_h(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LoadComposite* element = dynamic_cast<LoadComposite*>(BaseClass_ptr1))
	{
		buffer >> element->h;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_LoadComposite_lfrac(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LoadComposite* element = dynamic_cast<LoadComposite*>(BaseClass_ptr1))
	{
		buffer >> element->lfrac;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_LoadComposite_pfrac(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LoadComposite* element = dynamic_cast<LoadComposite*>(BaseClass_ptr1))
	{
		buffer >> element->pfrac;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}













const char LoadComposite::debugName[] = "LoadComposite";
const char* LoadComposite::debugString() const
{
	return LoadComposite::debugName;
}

void LoadComposite::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:LoadComposite"), &LoadComposite_factory));
}

void LoadComposite::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:LoadComposite.epfd"), &assign_LoadComposite_epfd));
	assign_map.insert(std::make_pair(std::string("cim:LoadComposite.epfs"), &assign_LoadComposite_epfs));
	assign_map.insert(std::make_pair(std::string("cim:LoadComposite.epvd"), &assign_LoadComposite_epvd));
	assign_map.insert(std::make_pair(std::string("cim:LoadComposite.epvs"), &assign_LoadComposite_epvs));
	assign_map.insert(std::make_pair(std::string("cim:LoadComposite.eqfd"), &assign_LoadComposite_eqfd));
	assign_map.insert(std::make_pair(std::string("cim:LoadComposite.eqfs"), &assign_LoadComposite_eqfs));
	assign_map.insert(std::make_pair(std::string("cim:LoadComposite.eqvd"), &assign_LoadComposite_eqvd));
	assign_map.insert(std::make_pair(std::string("cim:LoadComposite.eqvs"), &assign_LoadComposite_eqvs));
	assign_map.insert(std::make_pair(std::string("cim:LoadComposite.h"), &assign_LoadComposite_h));
	assign_map.insert(std::make_pair(std::string("cim:LoadComposite.lfrac"), &assign_LoadComposite_lfrac));
	assign_map.insert(std::make_pair(std::string("cim:LoadComposite.pfrac"), &assign_LoadComposite_pfrac));
}

void LoadComposite::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
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
