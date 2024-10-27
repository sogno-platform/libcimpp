#ifndef GETTERCACHE_HPP
#define GETTERCACHE_HPP

#include <map>
#include <string>

#include "BaseClass.hpp"

const std::map<std::string, get_function>& get_primitive_getter_map(const BaseClass* obj);
const std::map<std::string, class_get_function>& get_class_getter_map(const BaseClass* obj);
const std::map<std::string, get_function>& get_enum_getter_map(const BaseClass* obj);

#endif // GETTERCACHE_HPP
