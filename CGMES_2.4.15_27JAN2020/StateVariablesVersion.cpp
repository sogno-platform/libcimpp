/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "StateVariablesVersion.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

StateVariablesVersion::StateVariablesVersion() {}
StateVariablesVersion::~StateVariablesVersion() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::SV,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:StateVariablesVersion.baseUML", { CGMESProfile::SV, } },
	{ "cim:StateVariablesVersion.baseURI", { CGMESProfile::SV, } },
	{ "cim:StateVariablesVersion.date", { CGMESProfile::SV, } },
	{ "cim:StateVariablesVersion.differenceModelURI", { CGMESProfile::SV, } },
	{ "cim:StateVariablesVersion.entsoeUML", { CGMESProfile::SV, } },
	{ "cim:StateVariablesVersion.entsoeURI", { CGMESProfile::SV, } },
	{ "cim:StateVariablesVersion.modelDescriptionURI", { CGMESProfile::SV, } },
	{ "cim:StateVariablesVersion.namespaceRDF", { CGMESProfile::SV, } },
	{ "cim:StateVariablesVersion.namespaceUML", { CGMESProfile::SV, } },
	{ "cim:StateVariablesVersion.shortName", { CGMESProfile::SV, } },
};

std::list<CGMESProfile>
StateVariablesVersion::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
StateVariablesVersion::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_StateVariablesVersion_baseUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->baseUML = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StateVariablesVersion_baseURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->baseURI = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StateVariablesVersion_date(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->date = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StateVariablesVersion_differenceModelURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->differenceModelURI = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StateVariablesVersion_entsoeUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->entsoeUML = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StateVariablesVersion_entsoeURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->entsoeURI = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StateVariablesVersion_modelDescriptionURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->modelDescriptionURI = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StateVariablesVersion_namespaceRDF(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->namespaceRDF = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StateVariablesVersion_namespaceUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->namespaceUML = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StateVariablesVersion_shortName(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StateVariablesVersion* element = dynamic_cast<StateVariablesVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->shortName = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_StateVariablesVersion_baseUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StateVariablesVersion* element = dynamic_cast<const StateVariablesVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->baseUML;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StateVariablesVersion_baseURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StateVariablesVersion* element = dynamic_cast<const StateVariablesVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->baseURI;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StateVariablesVersion_date(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StateVariablesVersion* element = dynamic_cast<const StateVariablesVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->date;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StateVariablesVersion_differenceModelURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StateVariablesVersion* element = dynamic_cast<const StateVariablesVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->differenceModelURI;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StateVariablesVersion_entsoeUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StateVariablesVersion* element = dynamic_cast<const StateVariablesVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->entsoeUML;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StateVariablesVersion_entsoeURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StateVariablesVersion* element = dynamic_cast<const StateVariablesVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->entsoeURI;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StateVariablesVersion_modelDescriptionURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StateVariablesVersion* element = dynamic_cast<const StateVariablesVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->modelDescriptionURI;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StateVariablesVersion_namespaceRDF(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StateVariablesVersion* element = dynamic_cast<const StateVariablesVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->namespaceRDF;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StateVariablesVersion_namespaceUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StateVariablesVersion* element = dynamic_cast<const StateVariablesVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->namespaceUML;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StateVariablesVersion_shortName(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StateVariablesVersion* element = dynamic_cast<const StateVariablesVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->shortName;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char StateVariablesVersion::debugName[] = "StateVariablesVersion";
const char* StateVariablesVersion::debugString() const
{
	return StateVariablesVersion::debugName;
}

void StateVariablesVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:StateVariablesVersion", &StateVariablesVersion_factory);
}

void StateVariablesVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:StateVariablesVersion.baseUML", &assign_StateVariablesVersion_baseUML);
	assign_map.emplace("cim:StateVariablesVersion.baseURI", &assign_StateVariablesVersion_baseURI);
	assign_map.emplace("cim:StateVariablesVersion.date", &assign_StateVariablesVersion_date);
	assign_map.emplace("cim:StateVariablesVersion.differenceModelURI", &assign_StateVariablesVersion_differenceModelURI);
	assign_map.emplace("cim:StateVariablesVersion.entsoeUML", &assign_StateVariablesVersion_entsoeUML);
	assign_map.emplace("cim:StateVariablesVersion.entsoeURI", &assign_StateVariablesVersion_entsoeURI);
	assign_map.emplace("cim:StateVariablesVersion.modelDescriptionURI", &assign_StateVariablesVersion_modelDescriptionURI);
	assign_map.emplace("cim:StateVariablesVersion.namespaceRDF", &assign_StateVariablesVersion_namespaceRDF);
	assign_map.emplace("cim:StateVariablesVersion.namespaceUML", &assign_StateVariablesVersion_namespaceUML);
	assign_map.emplace("cim:StateVariablesVersion.shortName", &assign_StateVariablesVersion_shortName);
}

void StateVariablesVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void StateVariablesVersion::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:StateVariablesVersion.baseUML", &get_StateVariablesVersion_baseUML);
	get_map.emplace("cim:StateVariablesVersion.baseURI", &get_StateVariablesVersion_baseURI);
	get_map.emplace("cim:StateVariablesVersion.date", &get_StateVariablesVersion_date);
	get_map.emplace("cim:StateVariablesVersion.differenceModelURI", &get_StateVariablesVersion_differenceModelURI);
	get_map.emplace("cim:StateVariablesVersion.entsoeUML", &get_StateVariablesVersion_entsoeUML);
	get_map.emplace("cim:StateVariablesVersion.entsoeURI", &get_StateVariablesVersion_entsoeURI);
	get_map.emplace("cim:StateVariablesVersion.modelDescriptionURI", &get_StateVariablesVersion_modelDescriptionURI);
	get_map.emplace("cim:StateVariablesVersion.namespaceRDF", &get_StateVariablesVersion_namespaceRDF);
	get_map.emplace("cim:StateVariablesVersion.namespaceUML", &get_StateVariablesVersion_namespaceUML);
	get_map.emplace("cim:StateVariablesVersion.shortName", &get_StateVariablesVersion_shortName);
}

void StateVariablesVersion::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void StateVariablesVersion::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner StateVariablesVersion::declare()
{
	return BaseClassDefiner(StateVariablesVersion::addConstructToMap, StateVariablesVersion::addPrimitiveAssignFnsToMap, StateVariablesVersion::addClassAssignFnsToMap, StateVariablesVersion::debugName);
}

namespace CIMPP
{
	BaseClass* StateVariablesVersion_factory()
	{
		return new StateVariablesVersion;
	}
}
