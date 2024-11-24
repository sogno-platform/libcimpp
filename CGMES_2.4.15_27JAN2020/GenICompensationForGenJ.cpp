/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GenICompensationForGenJ.hpp"

#include <algorithm>
#include <sstream>

#include "SynchronousMachineDynamics.hpp"
#include "VCompIEEEType2.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

GenICompensationForGenJ::GenICompensationForGenJ() : SynchronousMachineDynamics(nullptr), VcompIEEEType2(nullptr) {};
GenICompensationForGenJ::~GenICompensationForGenJ() {};




bool assign_GenICompensationForGenJ_rcij(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GenICompensationForGenJ* element = dynamic_cast<GenICompensationForGenJ*>(BaseClass_ptr1))
	{
		buffer >> element->rcij;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GenICompensationForGenJ_xcij(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GenICompensationForGenJ* element = dynamic_cast<GenICompensationForGenJ*>(BaseClass_ptr1))
	{
		buffer >> element->xcij;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_SynchronousMachineDynamics_GenICompensationForGenJ(BaseClass*, BaseClass*);
bool assign_GenICompensationForGenJ_SynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	GenICompensationForGenJ* element = dynamic_cast<GenICompensationForGenJ*>(BaseClass_ptr1);
	SynchronousMachineDynamics* element2 = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SynchronousMachineDynamics != element2)
		{
			element->SynchronousMachineDynamics = element2;
			return assign_SynchronousMachineDynamics_GenICompensationForGenJ(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_VCompIEEEType2_GenICompensationForGenJ(BaseClass*, BaseClass*);
bool assign_GenICompensationForGenJ_VcompIEEEType2(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	GenICompensationForGenJ* element = dynamic_cast<GenICompensationForGenJ*>(BaseClass_ptr1);
	VCompIEEEType2* element2 = dynamic_cast<VCompIEEEType2*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->VcompIEEEType2 != element2)
		{
			element->VcompIEEEType2 = element2;
			return assign_VCompIEEEType2_GenICompensationForGenJ(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char GenICompensationForGenJ::debugName[] = "GenICompensationForGenJ";
const char* GenICompensationForGenJ::debugString() const
{
	return GenICompensationForGenJ::debugName;
}

void GenICompensationForGenJ::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GenICompensationForGenJ"), &GenICompensationForGenJ_factory));
}

void GenICompensationForGenJ::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GenICompensationForGenJ.rcij"), &assign_GenICompensationForGenJ_rcij));
	assign_map.insert(std::make_pair(std::string("cim:GenICompensationForGenJ.xcij"), &assign_GenICompensationForGenJ_xcij));
}

void GenICompensationForGenJ::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GenICompensationForGenJ.SynchronousMachineDynamics"), &assign_GenICompensationForGenJ_SynchronousMachineDynamics));
	assign_map.insert(std::make_pair(std::string("cim:GenICompensationForGenJ.VcompIEEEType2"), &assign_GenICompensationForGenJ_VcompIEEEType2));
}

const BaseClassDefiner GenICompensationForGenJ::declare()
{
	return BaseClassDefiner(GenICompensationForGenJ::addConstructToMap, GenICompensationForGenJ::addPrimitiveAssignFnsToMap, GenICompensationForGenJ::addClassAssignFnsToMap, GenICompensationForGenJ::debugName);
}

namespace CIMPP
{
	BaseClass* GenICompensationForGenJ_factory()
	{
		return new GenICompensationForGenJ;
	}
}
