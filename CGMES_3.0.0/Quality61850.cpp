/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Quality61850.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

Quality61850::Quality61850() {}
Quality61850::~Quality61850() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::OP,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:Quality61850.badReference", { CGMESProfile::OP, } },
	{ "cim:Quality61850.estimatorReplaced", { CGMESProfile::OP, } },
	{ "cim:Quality61850.failure", { CGMESProfile::OP, } },
	{ "cim:Quality61850.oldData", { CGMESProfile::OP, } },
	{ "cim:Quality61850.operatorBlocked", { CGMESProfile::OP, } },
	{ "cim:Quality61850.oscillatory", { CGMESProfile::OP, } },
	{ "cim:Quality61850.outOfRange", { CGMESProfile::OP, } },
	{ "cim:Quality61850.overFlow", { CGMESProfile::OP, } },
	{ "cim:Quality61850.source", { CGMESProfile::OP, } },
	{ "cim:Quality61850.suspect", { CGMESProfile::OP, } },
	{ "cim:Quality61850.test", { CGMESProfile::OP, } },
	{ "cim:Quality61850.validity", { CGMESProfile::OP, } },
};

std::list<CGMESProfile>
Quality61850::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Quality61850::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_Quality61850_badReference(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->badReference;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Quality61850_estimatorReplaced(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->estimatorReplaced;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Quality61850_failure(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->failure;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Quality61850_oldData(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->oldData;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Quality61850_operatorBlocked(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->operatorBlocked;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Quality61850_oscillatory(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->oscillatory;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Quality61850_outOfRange(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->outOfRange;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Quality61850_overFlow(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->overFlow;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Quality61850_source(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->source;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Quality61850_suspect(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->suspect;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Quality61850_test(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->test;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Quality61850_validity(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Quality61850* element = dynamic_cast<Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->validity;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_Quality61850_badReference(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Quality61850* element = dynamic_cast<const Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->badReference;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Quality61850_estimatorReplaced(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Quality61850* element = dynamic_cast<const Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->estimatorReplaced;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Quality61850_failure(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Quality61850* element = dynamic_cast<const Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->failure;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Quality61850_oldData(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Quality61850* element = dynamic_cast<const Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->oldData;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Quality61850_operatorBlocked(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Quality61850* element = dynamic_cast<const Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->operatorBlocked;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Quality61850_oscillatory(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Quality61850* element = dynamic_cast<const Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->oscillatory;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Quality61850_outOfRange(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Quality61850* element = dynamic_cast<const Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->outOfRange;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Quality61850_overFlow(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Quality61850* element = dynamic_cast<const Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->overFlow;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Quality61850_source(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Quality61850* element = dynamic_cast<const Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->source;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Quality61850_suspect(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Quality61850* element = dynamic_cast<const Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->suspect;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Quality61850_test(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Quality61850* element = dynamic_cast<const Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->test;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Quality61850_validity(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Quality61850* element = dynamic_cast<const Quality61850*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->validity;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char Quality61850::debugName[] = "Quality61850";
const char* Quality61850::debugString() const
{
	return Quality61850::debugName;
}

void Quality61850::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:Quality61850", &Quality61850_factory);
}

void Quality61850::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:Quality61850.badReference", &assign_Quality61850_badReference);
	assign_map.emplace("cim:Quality61850.estimatorReplaced", &assign_Quality61850_estimatorReplaced);
	assign_map.emplace("cim:Quality61850.failure", &assign_Quality61850_failure);
	assign_map.emplace("cim:Quality61850.oldData", &assign_Quality61850_oldData);
	assign_map.emplace("cim:Quality61850.operatorBlocked", &assign_Quality61850_operatorBlocked);
	assign_map.emplace("cim:Quality61850.oscillatory", &assign_Quality61850_oscillatory);
	assign_map.emplace("cim:Quality61850.outOfRange", &assign_Quality61850_outOfRange);
	assign_map.emplace("cim:Quality61850.overFlow", &assign_Quality61850_overFlow);
	assign_map.emplace("cim:Quality61850.source", &assign_Quality61850_source);
	assign_map.emplace("cim:Quality61850.suspect", &assign_Quality61850_suspect);
	assign_map.emplace("cim:Quality61850.test", &assign_Quality61850_test);
	assign_map.emplace("cim:Quality61850.validity", &assign_Quality61850_validity);
}

void Quality61850::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void Quality61850::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:Quality61850.badReference", &get_Quality61850_badReference);
	get_map.emplace("cim:Quality61850.estimatorReplaced", &get_Quality61850_estimatorReplaced);
	get_map.emplace("cim:Quality61850.failure", &get_Quality61850_failure);
	get_map.emplace("cim:Quality61850.oldData", &get_Quality61850_oldData);
	get_map.emplace("cim:Quality61850.operatorBlocked", &get_Quality61850_operatorBlocked);
	get_map.emplace("cim:Quality61850.oscillatory", &get_Quality61850_oscillatory);
	get_map.emplace("cim:Quality61850.outOfRange", &get_Quality61850_outOfRange);
	get_map.emplace("cim:Quality61850.overFlow", &get_Quality61850_overFlow);
	get_map.emplace("cim:Quality61850.suspect", &get_Quality61850_suspect);
	get_map.emplace("cim:Quality61850.test", &get_Quality61850_test);
}

void Quality61850::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void Quality61850::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:Quality61850.source", &get_Quality61850_source);
	get_map.emplace("cim:Quality61850.validity", &get_Quality61850_validity);
}

const BaseClassDefiner Quality61850::declare()
{
	return BaseClassDefiner(Quality61850::addConstructToMap, Quality61850::addPrimitiveAssignFnsToMap, Quality61850::addClassAssignFnsToMap, Quality61850::debugName);
}

namespace CIMPP
{
	BaseClass* Quality61850_factory()
	{
		return new Quality61850;
	}
}
