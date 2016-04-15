#ifndef TASK_H
#define TASK_H

#include <unordered_map>
#include <string>
#include "BaseClass.h"

class Task
{
public:
	Task();
	virtual ~Task();
	virtual void resolve() = 0;
	static std::unordered_map<std::string, BaseClass*> RDFMap;
};

#endif // TASK_H
