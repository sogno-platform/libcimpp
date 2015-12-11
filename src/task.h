#ifndef TASK_H
#define TASK_H

#include <vector>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.h"

/*
enum type
{
    UNDEFINED,
    PowerSystemResource_ComMod,
    CommChannel_src,
    CommChannel_dest
};*/

class task
{
public:
    task();
	task(void* ptr, std::string rdfID);
    
	void resolve(std::unordered_map<std::string, std::shared_ptr<IdentifiedObject>> &map);
    
private:
	//type m_what;
	void* ptr;
    std::string m_rdfID;
};

#endif // TASK_H
