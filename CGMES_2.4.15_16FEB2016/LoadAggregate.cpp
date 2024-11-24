/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LoadAggregate.hpp"

#include <algorithm>
#include <sstream>

#include "LoadMotor.hpp"
#include "LoadStatic.hpp"

using namespace CIMPP;

LoadAggregate::LoadAggregate() : LoadMotor(nullptr), LoadStatic(nullptr) {};
LoadAggregate::~LoadAggregate() {};





bool assign_LoadMotor_LoadAggregate(BaseClass*, BaseClass*);
bool assign_LoadAggregate_LoadMotor(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	LoadAggregate* element = dynamic_cast<LoadAggregate*>(BaseClass_ptr1);
	LoadMotor* element2 = dynamic_cast<LoadMotor*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LoadMotor != element2)
		{
			element->LoadMotor = element2;
			return assign_LoadMotor_LoadAggregate(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_LoadStatic_LoadAggregate(BaseClass*, BaseClass*);
bool assign_LoadAggregate_LoadStatic(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	LoadAggregate* element = dynamic_cast<LoadAggregate*>(BaseClass_ptr1);
	LoadStatic* element2 = dynamic_cast<LoadStatic*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LoadStatic != element2)
		{
			element->LoadStatic = element2;
			return assign_LoadStatic_LoadAggregate(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char LoadAggregate::debugName[] = "LoadAggregate";
const char* LoadAggregate::debugString() const
{
	return LoadAggregate::debugName;
}

void LoadAggregate::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:LoadAggregate"), &LoadAggregate_factory));
}

void LoadAggregate::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void LoadAggregate::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:LoadAggregate.LoadMotor"), &assign_LoadAggregate_LoadMotor));
	assign_map.insert(std::make_pair(std::string("cim:LoadAggregate.LoadStatic"), &assign_LoadAggregate_LoadStatic));
}

const BaseClassDefiner LoadAggregate::declare()
{
	return BaseClassDefiner(LoadAggregate::addConstructToMap, LoadAggregate::addPrimitiveAssignFnsToMap, LoadAggregate::addClassAssignFnsToMap, LoadAggregate::debugName);
}

namespace CIMPP
{
	BaseClass* LoadAggregate_factory()
	{
		return new LoadAggregate;
	}
}
