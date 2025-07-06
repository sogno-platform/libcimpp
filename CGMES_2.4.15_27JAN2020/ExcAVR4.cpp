/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcAVR4.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcAVR4(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
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
		{ "ExcAVR4.imul", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR4.ka", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR4.ke", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR4.kif", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR4.t1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR4.t1if", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR4.t2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR4.t3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR4.t4", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR4.tif", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR4.vfmn", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR4.vfmx", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR4.vrmn", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAVR4.vrmx", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcAVR4::ExcAVR4() {}
ExcAVR4::~ExcAVR4() {}

const std::list<std::string>& ExcAVR4::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcAVR4::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcAVR4::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcAVR4::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcAVR4::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcAVR4::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcAVR4::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcAVR4_imul(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->imul;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR4_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ka;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR4_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ke;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR4_kif(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kif;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR4_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR4_t1if(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t1if;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR4_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR4_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR4_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR4_tif(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tif;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR4_vfmn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vfmn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR4_vfmx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vfmx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR4_vrmn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vrmn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR4_vrmx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vrmx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcAVR4_imul(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->imul;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR4_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ka;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR4_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ke;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR4_kif(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kif;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR4_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR4_t1if(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t1if;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR4_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR4_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR4_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR4_tif(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tif;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR4_vfmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vfmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR4_vfmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vfmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR4_vrmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vrmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR4_vrmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vrmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ExcAVR4::debugName[] = "ExcAVR4";
const char* ExcAVR4::debugString() const
{
	return ExcAVR4::debugName;
}

void ExcAVR4::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcAVR4", &ExcAVR4_factory);
}

void ExcAVR4::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcAVR4.imul", &assign_ExcAVR4_imul);
	assign_map.emplace("ExcAVR4.ka", &assign_ExcAVR4_ka);
	assign_map.emplace("ExcAVR4.ke", &assign_ExcAVR4_ke);
	assign_map.emplace("ExcAVR4.kif", &assign_ExcAVR4_kif);
	assign_map.emplace("ExcAVR4.t1", &assign_ExcAVR4_t1);
	assign_map.emplace("ExcAVR4.t1if", &assign_ExcAVR4_t1if);
	assign_map.emplace("ExcAVR4.t2", &assign_ExcAVR4_t2);
	assign_map.emplace("ExcAVR4.t3", &assign_ExcAVR4_t3);
	assign_map.emplace("ExcAVR4.t4", &assign_ExcAVR4_t4);
	assign_map.emplace("ExcAVR4.tif", &assign_ExcAVR4_tif);
	assign_map.emplace("ExcAVR4.vfmn", &assign_ExcAVR4_vfmn);
	assign_map.emplace("ExcAVR4.vfmx", &assign_ExcAVR4_vfmx);
	assign_map.emplace("ExcAVR4.vrmn", &assign_ExcAVR4_vrmn);
	assign_map.emplace("ExcAVR4.vrmx", &assign_ExcAVR4_vrmx);
}

void ExcAVR4::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcAVR4::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcAVR4.imul", &get_ExcAVR4_imul);
	get_map.emplace("ExcAVR4.ka", &get_ExcAVR4_ka);
	get_map.emplace("ExcAVR4.ke", &get_ExcAVR4_ke);
	get_map.emplace("ExcAVR4.kif", &get_ExcAVR4_kif);
	get_map.emplace("ExcAVR4.t1", &get_ExcAVR4_t1);
	get_map.emplace("ExcAVR4.t1if", &get_ExcAVR4_t1if);
	get_map.emplace("ExcAVR4.t2", &get_ExcAVR4_t2);
	get_map.emplace("ExcAVR4.t3", &get_ExcAVR4_t3);
	get_map.emplace("ExcAVR4.t4", &get_ExcAVR4_t4);
	get_map.emplace("ExcAVR4.tif", &get_ExcAVR4_tif);
	get_map.emplace("ExcAVR4.vfmn", &get_ExcAVR4_vfmn);
	get_map.emplace("ExcAVR4.vfmx", &get_ExcAVR4_vfmx);
	get_map.emplace("ExcAVR4.vrmn", &get_ExcAVR4_vrmn);
	get_map.emplace("ExcAVR4.vrmx", &get_ExcAVR4_vrmx);
}

void ExcAVR4::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcAVR4::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcAVR4::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcAVR4" &&
		dynamic_cast<ExcAVR4*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcAVR4::declare()
{
	return BaseClassDefiner(ExcAVR4::addConstructToMap, ExcAVR4::addPrimitiveAssignFnsToMap, ExcAVR4::addClassAssignFnsToMap, ExcAVR4::debugName);
}

std::map<std::string, AttrDetails> ExcAVR4::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcAVR4_factory()
	{
		return new ExcAVR4;
	}
}
