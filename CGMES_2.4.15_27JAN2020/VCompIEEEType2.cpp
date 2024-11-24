/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VCompIEEEType2.hpp"

#include <algorithm>
#include <sstream>

#include "GenICompensationForGenJ.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

VCompIEEEType2::VCompIEEEType2() {};
VCompIEEEType2::~VCompIEEEType2() {};



bool assign_VCompIEEEType2_tr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VCompIEEEType2* element = dynamic_cast<VCompIEEEType2*>(BaseClass_ptr1))
	{
		buffer >> element->tr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_GenICompensationForGenJ_VcompIEEEType2(BaseClass*, BaseClass*);
bool assign_VCompIEEEType2_GenICompensationForGenJ(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VCompIEEEType2* element = dynamic_cast<VCompIEEEType2*>(BaseClass_ptr1);
	GenICompensationForGenJ* element2 = dynamic_cast<GenICompensationForGenJ*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->GenICompensationForGenJ.begin(), element->GenICompensationForGenJ.end(), element2) == element->GenICompensationForGenJ.end())
		{
			element->GenICompensationForGenJ.push_back(element2);
			return assign_GenICompensationForGenJ_VcompIEEEType2(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char VCompIEEEType2::debugName[] = "VCompIEEEType2";
const char* VCompIEEEType2::debugString() const
{
	return VCompIEEEType2::debugName;
}

void VCompIEEEType2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:VCompIEEEType2"), &VCompIEEEType2_factory));
}

void VCompIEEEType2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VCompIEEEType2.tr"), &assign_VCompIEEEType2_tr));
}

void VCompIEEEType2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VCompIEEEType2.GenICompensationForGenJ"), &assign_VCompIEEEType2_GenICompensationForGenJ));
}

const BaseClassDefiner VCompIEEEType2::declare()
{
	return BaseClassDefiner(VCompIEEEType2::addConstructToMap, VCompIEEEType2::addPrimitiveAssignFnsToMap, VCompIEEEType2::addClassAssignFnsToMap, VCompIEEEType2::debugName);
}

namespace CIMPP
{
	BaseClass* VCompIEEEType2_factory()
	{
		return new VCompIEEEType2;
	}
}
