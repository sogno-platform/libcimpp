#include "Task.hpp"

#include <iostream>

#include "IdentifiedObject.hpp"
#include "CIMClassList.hpp"

using namespace CIMPP;

typedef bool (*task_function)(BaseClass*, BaseClass*);
static std::unordered_map<std::string, bool (*)(BaseClass*, BaseClass*)> initialize();
std::unordered_map<std::string, bool (*)(BaseClass*, BaseClass*)> Task::dynamic_switch = initialize();

Task::Task() {}

Task::Task(BaseClass* CIMObj, const std::string CIMAttrName, const std::string Value)
	: _CIMObj(CIMObj), _CIMAttrName(CIMAttrName), _Value(Value) {}

Task::~Task() {}

void Task::print() const
{
	if(IdentifiedObject* IdObj = dynamic_cast<IdentifiedObject*>(_CIMObj))
		std::cout << _CIMAttrName << " '" << IdObj->name << "' = '" << _Value << "'" << std::endl;
	else
		std::cout << _CIMAttrName << " = '" << _Value << "'" << std::endl;
}

bool Task::resolve(std::unordered_map<std::string, BaseClass*> *RDFMap) const
{
	std::unordered_map<std::string, BaseClass*>::iterator it_id = RDFMap->find(_Value);
	if(it_id == RDFMap->end()) {
		std::cerr << "Couldn't find " << _CIMAttrName << " with value: " << _Value << " in RDFMap." << std::endl;
		return false;
	}

	std::unordered_map<std::string, bool (*)(BaseClass*, BaseClass*)>::iterator it_func = dynamic_switch.find(_CIMAttrName);
	if (it_func == dynamic_switch.end()) {
		std::cerr << "Couldn't find " << _CIMAttrName << " in dynamic_switch map." << std::endl;
		return false;
	}

	if((*it_func->second)(_CIMObj, it_id->second))
		return true;
	else
		return (*it_func->second)(it_id->second, _CIMObj);
}

void Task::replaceObject(BaseClass* oldObject_ptr, BaseClass* newObject_ptr)
{
	if (_CIMObj == oldObject_ptr)
	{
		_CIMObj = newObject_ptr;
	}
}

static std::unordered_map<std::string, class_assign_function> initialize()
{
	std::unordered_map<std::string, class_assign_function> object_map;
	for (const BaseClassDefiner& CIMClass : CIMClassList) {
		CIMClass.addClassAssignFnsToMap(object_map);
	}

	return object_map;
}
