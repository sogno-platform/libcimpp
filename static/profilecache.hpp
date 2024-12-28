#ifndef PROFILECACHE_HPP
#define PROFILECACHE_HPP

#include <list>
#include <map>
#include <string>

#include "CGMESProfile.hpp"
#include "BaseClass.hpp"

const std::list<CGMESProfile>& get_possible_profiles_for_class(const BaseClass* obj);
const std::map<std::string, std::list<CGMESProfile>>& get_possible_profiles_for_attributes(const BaseClass* obj);

#endif // PROFILECACHE_HPP
