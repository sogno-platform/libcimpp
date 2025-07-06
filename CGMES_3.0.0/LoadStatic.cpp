/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LoadStatic.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "LoadAggregate.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		LoadStatic(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::DY,
		},
		CGMESProfile::DY
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "LoadStatic.LoadAggregate", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadStatic.ep1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadStatic.ep2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadStatic.ep3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadStatic.eq1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadStatic.eq2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadStatic.eq3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadStatic.kp1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadStatic.kp2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadStatic.kp3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadStatic.kp4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadStatic.kpf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadStatic.kq1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadStatic.kq2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadStatic.kq3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadStatic.kq4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadStatic.kqf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadStatic.staticLoadModelType", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

LoadStatic::LoadStatic() : LoadAggregate(nullptr) {}
LoadStatic::~LoadStatic() {}

const std::list<std::string>& LoadStatic::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& LoadStatic::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& LoadStatic::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& LoadStatic::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& LoadStatic::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& LoadStatic::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& LoadStatic::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_LoadAggregate_LoadStatic(BaseClass*, BaseClass*);
bool assign_LoadStatic_LoadAggregate(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1);
	LoadAggregate* element2 = dynamic_cast<LoadAggregate*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LoadAggregate != element2)
		{
			element->LoadAggregate = element2;
			return assign_LoadAggregate_LoadStatic(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_LoadStatic_ep1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ep1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadStatic_ep2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ep2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadStatic_ep3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ep3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadStatic_eq1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->eq1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadStatic_eq2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->eq2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadStatic_eq3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->eq3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadStatic_kp1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kp1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadStatic_kp2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kp2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadStatic_kp3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kp3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadStatic_kp4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kp4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadStatic_kpf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadStatic_kq1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kq1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadStatic_kq2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kq2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadStatic_kq3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kq3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadStatic_kq4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kq4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadStatic_kqf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kqf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_LoadStatic_staticLoadModelType(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	LoadStatic* element = dynamic_cast<LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->staticLoadModelType;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_LoadStatic_LoadAggregate(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const LoadStatic* element = dynamic_cast<const LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->LoadAggregate != 0)
		{
			BaseClass_list.push_back(element->LoadAggregate);
			return true;
		}
	}
	return false;
}

bool get_LoadStatic_ep1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadStatic* element = dynamic_cast<const LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ep1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadStatic_ep2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadStatic* element = dynamic_cast<const LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ep2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadStatic_ep3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadStatic* element = dynamic_cast<const LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ep3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadStatic_eq1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadStatic* element = dynamic_cast<const LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->eq1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadStatic_eq2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadStatic* element = dynamic_cast<const LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->eq2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadStatic_eq3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadStatic* element = dynamic_cast<const LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->eq3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadStatic_kp1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadStatic* element = dynamic_cast<const LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kp1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadStatic_kp2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadStatic* element = dynamic_cast<const LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kp2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadStatic_kp3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadStatic* element = dynamic_cast<const LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kp3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadStatic_kp4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadStatic* element = dynamic_cast<const LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kp4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadStatic_kpf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadStatic* element = dynamic_cast<const LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadStatic_kq1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadStatic* element = dynamic_cast<const LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kq1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadStatic_kq2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadStatic* element = dynamic_cast<const LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kq2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadStatic_kq3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadStatic* element = dynamic_cast<const LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kq3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadStatic_kq4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadStatic* element = dynamic_cast<const LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kq4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadStatic_kqf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadStatic* element = dynamic_cast<const LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kqf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_LoadStatic_staticLoadModelType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const LoadStatic* element = dynamic_cast<const LoadStatic*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->staticLoadModelType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char LoadStatic::debugName[] = "LoadStatic";
const char* LoadStatic::debugString() const
{
	return LoadStatic::debugName;
}

void LoadStatic::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("LoadStatic", &LoadStatic_factory);
}

void LoadStatic::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("LoadStatic.ep1", &assign_LoadStatic_ep1);
	assign_map.emplace("LoadStatic.ep2", &assign_LoadStatic_ep2);
	assign_map.emplace("LoadStatic.ep3", &assign_LoadStatic_ep3);
	assign_map.emplace("LoadStatic.eq1", &assign_LoadStatic_eq1);
	assign_map.emplace("LoadStatic.eq2", &assign_LoadStatic_eq2);
	assign_map.emplace("LoadStatic.eq3", &assign_LoadStatic_eq3);
	assign_map.emplace("LoadStatic.kp1", &assign_LoadStatic_kp1);
	assign_map.emplace("LoadStatic.kp2", &assign_LoadStatic_kp2);
	assign_map.emplace("LoadStatic.kp3", &assign_LoadStatic_kp3);
	assign_map.emplace("LoadStatic.kp4", &assign_LoadStatic_kp4);
	assign_map.emplace("LoadStatic.kpf", &assign_LoadStatic_kpf);
	assign_map.emplace("LoadStatic.kq1", &assign_LoadStatic_kq1);
	assign_map.emplace("LoadStatic.kq2", &assign_LoadStatic_kq2);
	assign_map.emplace("LoadStatic.kq3", &assign_LoadStatic_kq3);
	assign_map.emplace("LoadStatic.kq4", &assign_LoadStatic_kq4);
	assign_map.emplace("LoadStatic.kqf", &assign_LoadStatic_kqf);
	assign_map.emplace("LoadStatic.staticLoadModelType", &assign_LoadStatic_staticLoadModelType);
}

void LoadStatic::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("LoadStatic.LoadAggregate", &assign_LoadStatic_LoadAggregate);
}

void LoadStatic::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("LoadStatic.ep1", &get_LoadStatic_ep1);
	get_map.emplace("LoadStatic.ep2", &get_LoadStatic_ep2);
	get_map.emplace("LoadStatic.ep3", &get_LoadStatic_ep3);
	get_map.emplace("LoadStatic.eq1", &get_LoadStatic_eq1);
	get_map.emplace("LoadStatic.eq2", &get_LoadStatic_eq2);
	get_map.emplace("LoadStatic.eq3", &get_LoadStatic_eq3);
	get_map.emplace("LoadStatic.kp1", &get_LoadStatic_kp1);
	get_map.emplace("LoadStatic.kp2", &get_LoadStatic_kp2);
	get_map.emplace("LoadStatic.kp3", &get_LoadStatic_kp3);
	get_map.emplace("LoadStatic.kp4", &get_LoadStatic_kp4);
	get_map.emplace("LoadStatic.kpf", &get_LoadStatic_kpf);
	get_map.emplace("LoadStatic.kq1", &get_LoadStatic_kq1);
	get_map.emplace("LoadStatic.kq2", &get_LoadStatic_kq2);
	get_map.emplace("LoadStatic.kq3", &get_LoadStatic_kq3);
	get_map.emplace("LoadStatic.kq4", &get_LoadStatic_kq4);
	get_map.emplace("LoadStatic.kqf", &get_LoadStatic_kqf);
}

void LoadStatic::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("LoadStatic.LoadAggregate", &get_LoadStatic_LoadAggregate);
}

void LoadStatic::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
	get_map.emplace("LoadStatic.staticLoadModelType", &get_LoadStatic_staticLoadModelType);
}

bool LoadStatic::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "LoadStatic" &&
		dynamic_cast<LoadStatic*>(otherObject) != nullptr;
}

const BaseClassDefiner LoadStatic::declare()
{
	return BaseClassDefiner(LoadStatic::addConstructToMap, LoadStatic::addPrimitiveAssignFnsToMap, LoadStatic::addClassAssignFnsToMap, LoadStatic::debugName);
}

std::map<std::string, AttrDetails> LoadStatic::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* LoadStatic_factory()
	{
		return new LoadStatic;
	}
}
