#ifndef TASK_H
#define TASK_H

#include <vector>
#include <string>
#include <unordered_map>
#include "base.h"

enum type
{
    UNDEFINED,
    PowerSystemResource_ComMod,
    CommChannel_src,
    CommChannel_dest
};

class task
{
public:
    task();
    task(std::shared_ptr<base> basePtr, std::string rdfID, type what);
    
    void resolve(std::unordered_map<std::string, std::shared_ptr<base>> &map);
    
private:
    type m_what;
    std::shared_ptr<base> m_basePtr;
    std::string m_rdfID;
};

#endif // TASK_H
