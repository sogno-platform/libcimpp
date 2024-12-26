/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhaseTapChangerTable.hpp"

#include <algorithm>
#include <sstream>

#include "PhaseTapChangerTablePoint.hpp"
#include "PhaseTapChangerTabular.hpp"

using namespace CIMPP;

PhaseTapChangerTable::PhaseTapChangerTable() {};
PhaseTapChangerTable::~PhaseTapChangerTable() {};





bool assign_PhaseTapChangerTablePoint_PhaseTapChangerTable(BaseClass*, BaseClass*);
bool assign_PhaseTapChangerTable_PhaseTapChangerTablePoint(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PhaseTapChangerTable* element = dynamic_cast<PhaseTapChangerTable*>(BaseClass_ptr1);
	PhaseTapChangerTablePoint* element2 = dynamic_cast<PhaseTapChangerTablePoint*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->PhaseTapChangerTablePoint.begin(), element->PhaseTapChangerTablePoint.end(), element2) == element->PhaseTapChangerTablePoint.end())
		{
			element->PhaseTapChangerTablePoint.push_back(element2);
			return assign_PhaseTapChangerTablePoint_PhaseTapChangerTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PhaseTapChangerTabular_PhaseTapChangerTable(BaseClass*, BaseClass*);
bool assign_PhaseTapChangerTable_PhaseTapChangerTabular(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PhaseTapChangerTable* element = dynamic_cast<PhaseTapChangerTable*>(BaseClass_ptr1);
	PhaseTapChangerTabular* element2 = dynamic_cast<PhaseTapChangerTabular*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->PhaseTapChangerTabular.begin(), element->PhaseTapChangerTabular.end(), element2) == element->PhaseTapChangerTabular.end())
		{
			element->PhaseTapChangerTabular.push_back(element2);
			return assign_PhaseTapChangerTabular_PhaseTapChangerTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char PhaseTapChangerTable::debugName[] = "PhaseTapChangerTable";
const char* PhaseTapChangerTable::debugString() const
{
	return PhaseTapChangerTable::debugName;
}

void PhaseTapChangerTable::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PhaseTapChangerTable"), &PhaseTapChangerTable_factory));
}

void PhaseTapChangerTable::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PhaseTapChangerTable::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PhaseTapChangerTable.PhaseTapChangerTablePoint"), &assign_PhaseTapChangerTable_PhaseTapChangerTablePoint));
	assign_map.insert(std::make_pair(std::string("cim:PhaseTapChangerTable.PhaseTapChangerTabular"), &assign_PhaseTapChangerTable_PhaseTapChangerTabular));
}

const BaseClassDefiner PhaseTapChangerTable::declare()
{
	return BaseClassDefiner(PhaseTapChangerTable::addConstructToMap, PhaseTapChangerTable::addPrimitiveAssignFnsToMap, PhaseTapChangerTable::addClassAssignFnsToMap, PhaseTapChangerTable::debugName);
}

namespace CIMPP
{
	BaseClass* PhaseTapChangerTable_factory()
	{
		return new PhaseTapChangerTable;
	}
}
