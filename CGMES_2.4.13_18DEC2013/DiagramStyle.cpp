/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiagramStyle.hpp"

#include <algorithm>
#include <sstream>

#include "Diagram.hpp"

using namespace CIMPP;

DiagramStyle::DiagramStyle() {};
DiagramStyle::~DiagramStyle() {};




bool assign_Diagram_DiagramStyle(BaseClass*, BaseClass*);
bool assign_DiagramStyle_Diagram(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiagramStyle* element = dynamic_cast<DiagramStyle*>(BaseClass_ptr1);
	Diagram* element2 = dynamic_cast<Diagram*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Diagram.begin(), element->Diagram.end(), element2) == element->Diagram.end())
		{
			element->Diagram.push_back(element2);
			return assign_Diagram_DiagramStyle(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char DiagramStyle::debugName[] = "DiagramStyle";
const char* DiagramStyle::debugString() const
{
	return DiagramStyle::debugName;
}

void DiagramStyle::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DiagramStyle"), &DiagramStyle_factory));
}

void DiagramStyle::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DiagramStyle::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DiagramStyle.Diagram"), &assign_DiagramStyle_Diagram));
}

const BaseClassDefiner DiagramStyle::declare()
{
	return BaseClassDefiner(DiagramStyle::addConstructToMap, DiagramStyle::addPrimitiveAssignFnsToMap, DiagramStyle::addClassAssignFnsToMap, DiagramStyle::debugName);
}

namespace CIMPP
{
	BaseClass* DiagramStyle_factory()
	{
		return new DiagramStyle;
	}
}
