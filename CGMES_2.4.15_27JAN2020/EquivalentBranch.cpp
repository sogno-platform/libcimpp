/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EquivalentBranch.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

EquivalentBranch::EquivalentBranch() {}
EquivalentBranch::~EquivalentBranch() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:EquivalentBranch.negativeR12", { CGMESProfile::EQ, } },
	{ "cim:EquivalentBranch.negativeR21", { CGMESProfile::EQ, } },
	{ "cim:EquivalentBranch.negativeX12", { CGMESProfile::EQ, } },
	{ "cim:EquivalentBranch.negativeX21", { CGMESProfile::EQ, } },
	{ "cim:EquivalentBranch.positiveR12", { CGMESProfile::EQ, } },
	{ "cim:EquivalentBranch.positiveR21", { CGMESProfile::EQ, } },
	{ "cim:EquivalentBranch.positiveX12", { CGMESProfile::EQ, } },
	{ "cim:EquivalentBranch.positiveX21", { CGMESProfile::EQ, } },
	{ "cim:EquivalentBranch.r", { CGMESProfile::EQ, } },
	{ "cim:EquivalentBranch.r21", { CGMESProfile::EQ, } },
	{ "cim:EquivalentBranch.x", { CGMESProfile::EQ, } },
	{ "cim:EquivalentBranch.x21", { CGMESProfile::EQ, } },
	{ "cim:EquivalentBranch.zeroR12", { CGMESProfile::EQ, } },
	{ "cim:EquivalentBranch.zeroR21", { CGMESProfile::EQ, } },
	{ "cim:EquivalentBranch.zeroX12", { CGMESProfile::EQ, } },
	{ "cim:EquivalentBranch.zeroX21", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
EquivalentBranch::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
EquivalentBranch::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = EquivalentEquipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_EquivalentBranch_negativeR12(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->negativeR12;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_negativeR21(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->negativeR21;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_negativeX12(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->negativeX12;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_negativeX21(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->negativeX21;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_positiveR12(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->positiveR12;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_positiveR21(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->positiveR21;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_positiveX12(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->positiveX12;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_positiveX21(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->positiveX21;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->r;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_r21(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->r21;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_x(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->x;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_x21(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->x21;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_zeroR12(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->zeroR12;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_zeroR21(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->zeroR21;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_zeroX12(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->zeroX12;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_zeroX21(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->zeroX21;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_EquivalentBranch_negativeR12(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->negativeR12;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_negativeR21(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->negativeR21;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_negativeX12(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->negativeX12;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_negativeX21(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->negativeX21;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_positiveR12(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->positiveR12;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_positiveR21(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->positiveR21;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_positiveX12(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->positiveX12;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_positiveX21(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->positiveX21;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->r;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_r21(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->r21;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_x(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->x;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_x21(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->x21;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_zeroR12(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->zeroR12;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_zeroR21(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->zeroR21;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_zeroX12(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->zeroX12;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_zeroX21(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->zeroX21;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char EquivalentBranch::debugName[] = "EquivalentBranch";
const char* EquivalentBranch::debugString() const
{
	return EquivalentBranch::debugName;
}

void EquivalentBranch::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:EquivalentBranch", &EquivalentBranch_factory);
}

void EquivalentBranch::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:EquivalentBranch.negativeR12", &assign_EquivalentBranch_negativeR12);
	assign_map.emplace("cim:EquivalentBranch.negativeR21", &assign_EquivalentBranch_negativeR21);
	assign_map.emplace("cim:EquivalentBranch.negativeX12", &assign_EquivalentBranch_negativeX12);
	assign_map.emplace("cim:EquivalentBranch.negativeX21", &assign_EquivalentBranch_negativeX21);
	assign_map.emplace("cim:EquivalentBranch.positiveR12", &assign_EquivalentBranch_positiveR12);
	assign_map.emplace("cim:EquivalentBranch.positiveR21", &assign_EquivalentBranch_positiveR21);
	assign_map.emplace("cim:EquivalentBranch.positiveX12", &assign_EquivalentBranch_positiveX12);
	assign_map.emplace("cim:EquivalentBranch.positiveX21", &assign_EquivalentBranch_positiveX21);
	assign_map.emplace("cim:EquivalentBranch.r", &assign_EquivalentBranch_r);
	assign_map.emplace("cim:EquivalentBranch.r21", &assign_EquivalentBranch_r21);
	assign_map.emplace("cim:EquivalentBranch.x", &assign_EquivalentBranch_x);
	assign_map.emplace("cim:EquivalentBranch.x21", &assign_EquivalentBranch_x21);
	assign_map.emplace("cim:EquivalentBranch.zeroR12", &assign_EquivalentBranch_zeroR12);
	assign_map.emplace("cim:EquivalentBranch.zeroR21", &assign_EquivalentBranch_zeroR21);
	assign_map.emplace("cim:EquivalentBranch.zeroX12", &assign_EquivalentBranch_zeroX12);
	assign_map.emplace("cim:EquivalentBranch.zeroX21", &assign_EquivalentBranch_zeroX21);
}

void EquivalentBranch::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void EquivalentBranch::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquivalentEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:EquivalentBranch.negativeR12", &get_EquivalentBranch_negativeR12);
	get_map.emplace("cim:EquivalentBranch.negativeR21", &get_EquivalentBranch_negativeR21);
	get_map.emplace("cim:EquivalentBranch.negativeX12", &get_EquivalentBranch_negativeX12);
	get_map.emplace("cim:EquivalentBranch.negativeX21", &get_EquivalentBranch_negativeX21);
	get_map.emplace("cim:EquivalentBranch.positiveR12", &get_EquivalentBranch_positiveR12);
	get_map.emplace("cim:EquivalentBranch.positiveR21", &get_EquivalentBranch_positiveR21);
	get_map.emplace("cim:EquivalentBranch.positiveX12", &get_EquivalentBranch_positiveX12);
	get_map.emplace("cim:EquivalentBranch.positiveX21", &get_EquivalentBranch_positiveX21);
	get_map.emplace("cim:EquivalentBranch.r", &get_EquivalentBranch_r);
	get_map.emplace("cim:EquivalentBranch.r21", &get_EquivalentBranch_r21);
	get_map.emplace("cim:EquivalentBranch.x", &get_EquivalentBranch_x);
	get_map.emplace("cim:EquivalentBranch.x21", &get_EquivalentBranch_x21);
	get_map.emplace("cim:EquivalentBranch.zeroR12", &get_EquivalentBranch_zeroR12);
	get_map.emplace("cim:EquivalentBranch.zeroR21", &get_EquivalentBranch_zeroR21);
	get_map.emplace("cim:EquivalentBranch.zeroX12", &get_EquivalentBranch_zeroX12);
	get_map.emplace("cim:EquivalentBranch.zeroX21", &get_EquivalentBranch_zeroX21);
}

void EquivalentBranch::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EquivalentEquipment::addClassGetFnsToMap(get_map);
}

void EquivalentBranch::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquivalentEquipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner EquivalentBranch::declare()
{
	return BaseClassDefiner(EquivalentBranch::addConstructToMap, EquivalentBranch::addPrimitiveAssignFnsToMap, EquivalentBranch::addClassAssignFnsToMap, EquivalentBranch::debugName);
}

namespace CIMPP
{
	BaseClass* EquivalentBranch_factory()
	{
		return new EquivalentBranch;
	}
}
