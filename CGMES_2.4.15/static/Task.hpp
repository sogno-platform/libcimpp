#ifndef TASK_HPP
#define TASK_HPP

#include <unordered_map>
#include <string>
#include "BaseClass.hpp"

using namespace CGMES;

class Task
{
public:
	Task();
	Task(BaseClass* CIMObj, const std::string CIMAttrName, const std::string Value);
	~Task();
	bool resolve(std::unordered_map<std::string, BaseClass*> *RDFMap);
	void print();
private:
	BaseClass* _CIMObj;
	std::string _CIMAttrName;
	std::string _Value;
	static std::unordered_map<std::string, bool (*)(BaseClass*, BaseClass*)> dynamic_switch;
};
#endif // TASK_HPP
