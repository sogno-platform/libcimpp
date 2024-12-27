/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GenICompensationForGenJ.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "SynchronousMachineDynamics.hpp"
#include "VCompIEEEType2.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

GenICompensationForGenJ::GenICompensationForGenJ() : SynchronousMachineDynamics(nullptr), VcompIEEEType2(nullptr) {};
GenICompensationForGenJ::~GenICompensationForGenJ() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GenICompensationForGenJ.SynchronousMachineDynamics", { CGMESProfile::DY, } },
	{ "cim:GenICompensationForGenJ.VcompIEEEType2", { CGMESProfile::DY, } },
	{ "cim:GenICompensationForGenJ.rcij", { CGMESProfile::DY, } },
	{ "cim:GenICompensationForGenJ.xcij", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GenICompensationForGenJ::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GenICompensationForGenJ::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


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

bool get_GenICompensationForGenJ_rcij(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GenICompensationForGenJ* element = dynamic_cast<const GenICompensationForGenJ*>(BaseClass_ptr1))
	{
		buffer << element->rcij;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GenICompensationForGenJ_xcij(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GenICompensationForGenJ* element = dynamic_cast<const GenICompensationForGenJ*>(BaseClass_ptr1))
	{
		buffer << element->xcij;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}


bool get_GenICompensationForGenJ_SynchronousMachineDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const GenICompensationForGenJ* element = dynamic_cast<const GenICompensationForGenJ*>(BaseClass_ptr1))
	{
		if (element->SynchronousMachineDynamics != 0)
		{
			BaseClass_list.push_back(element->SynchronousMachineDynamics);
			return true;
		}
	}
	return false;
}

bool get_GenICompensationForGenJ_VcompIEEEType2(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const GenICompensationForGenJ* element = dynamic_cast<const GenICompensationForGenJ*>(BaseClass_ptr1))
	{
		if (element->VcompIEEEType2 != 0)
		{
			BaseClass_list.push_back(element->VcompIEEEType2);
			return true;
		}
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

void GenICompensationForGenJ::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GenICompensationForGenJ.rcij", &get_GenICompensationForGenJ_rcij);
	get_map.emplace("cim:GenICompensationForGenJ.xcij", &get_GenICompensationForGenJ_xcij);
}

void GenICompensationForGenJ::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:GenICompensationForGenJ.SynchronousMachineDynamics", &get_GenICompensationForGenJ_SynchronousMachineDynamics);
	get_map.emplace("cim:GenICompensationForGenJ.VcompIEEEType2", &get_GenICompensationForGenJ_VcompIEEEType2);
}

void GenICompensationForGenJ::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
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
