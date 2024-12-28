#include "profilecache.hpp"

#include <map>
#include <string>
#include <unordered_map>

#include "CGMESProfile.hpp"
#include "BaseClass.hpp"

using namespace CIMPP;

static std::unordered_map<std::string, const std::list<CGMESProfile>> profiles_for_class_cache;
static std::unordered_map<std::string, const std::map<std::string, std::list<CGMESProfile>>> profiles_for_attributes_cache;
static const std::list<CGMESProfile> empty_list;
static const std::map<std::string, std::list<CGMESProfile>> empty_map;

const std::list<CGMESProfile>& get_possible_profiles_for_class(const BaseClass* obj)
{
  std::string type = obj->debugString();

  if (profiles_for_class_cache.find(type) == profiles_for_class_cache.end())
  {
    profiles_for_class_cache.emplace(type, obj->getPossibleProfilesForClass());
  }

  return profiles_for_class_cache.at(type);
}

const std::map<std::string, std::list<CGMESProfile>>& get_possible_profiles_for_attributes(const BaseClass* obj)
{
  std::string type = obj->debugString();

  if (profiles_for_attributes_cache.find(type) == profiles_for_attributes_cache.end())
  {
    profiles_for_attributes_cache.emplace(type, obj->getPossibleProfilesForAttributes());
  }

  return profiles_for_attributes_cache.at(type);
}
