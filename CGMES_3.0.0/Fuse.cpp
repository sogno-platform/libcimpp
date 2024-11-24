/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Fuse.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

Fuse::Fuse() {};
Fuse::~Fuse() {};



const char Fuse::debugName[] = "Fuse";
const char* Fuse::debugString() const
{
	return Fuse::debugName;
}

void Fuse::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Fuse"), &Fuse_factory));
}

void Fuse::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Fuse::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner Fuse::declare()
{
	return BaseClassDefiner(Fuse::addConstructToMap, Fuse::addPrimitiveAssignFnsToMap, Fuse::addClassAssignFnsToMap, Fuse::debugName);
}

namespace CIMPP
{
	BaseClass* Fuse_factory()
	{
		return new Fuse;
	}
}
