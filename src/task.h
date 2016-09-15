#ifndef TASK_H
#define TASK_H

#include <unordered_map>
#include <string>
#include "BaseClass.h"

class Task
{
public:
	Task();
	Task(BaseClass* CIMObj, const std::string CIMAttrName, const std::string Value);
	~Task();
	bool resolve();
	void print();
	static std::unordered_map<std::string, BaseClass*> RDFMap;

private:
	BaseClass* _CIMObj;
	std::string _CIMAttrName;
	std::string _Value;
	static std::unordered_map<std::string, bool (*)(BaseClass*, BaseClass*)> dynamic_switch;
};

#endif // TASK_H
