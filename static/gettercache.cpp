#include "gettercache.hpp"

#include <map>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"

using namespace CIMPP;

static std::unordered_map<std::string, std::map<std::string, get_function>> primitive_getter_cache;
static std::unordered_map<std::string, std::map<std::string, class_get_function>> class_getter_cache;
static std::unordered_map<std::string, std::map<std::string, get_function>> enum_getter_cache;

const std::map<std::string, get_function>& get_primitive_getter_map(const BaseClass* obj)
{
  std::string type = obj->debugString();

  if (primitive_getter_cache.find(type) == primitive_getter_cache.end())
  {
    obj->addPrimitiveGetFnsToMap(primitive_getter_cache[type]);
  }

  return primitive_getter_cache.at(type);
}

const std::map<std::string, class_get_function>& get_class_getter_map(const BaseClass* obj)
{
  std::string type = obj->debugString();

  if (class_getter_cache.find(type) == class_getter_cache.end())
  {
    obj->addClassGetFnsToMap(class_getter_cache[type]);
  }

  return class_getter_cache.at(type);
}

const std::map<std::string, get_function>& get_enum_getter_map(const BaseClass* obj)
{
  std::string type = obj->debugString();

  if (enum_getter_cache.find(type) == enum_getter_cache.end())
  {
    obj->addEnumGetFnsToMap(enum_getter_cache[type]);
  }

  return enum_getter_cache.at(type);
}
