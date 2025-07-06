/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovGAST.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovGAST(),
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
		{ "GovGAST.at", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST.dturb", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST.kt", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST.mwbase", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST.r", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST.t1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST.t2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST.t3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST.vmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST.vmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovGAST::GovGAST() {}
GovGAST::~GovGAST() {}

const std::list<std::string>& GovGAST::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovGAST::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovGAST::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovGAST::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovGAST::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovGAST::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovGAST::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GovGAST_at(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->at;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST_dturb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dturb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST_kt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mwbase;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1);
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

bool assign_GovGAST_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1);
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

bool assign_GovGAST_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1);
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

bool assign_GovGAST_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1);
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

bool assign_GovGAST_vmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST_vmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GovGAST_at(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST* element = dynamic_cast<const GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->at;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST_dturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST* element = dynamic_cast<const GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dturb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST_kt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST* element = dynamic_cast<const GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST* element = dynamic_cast<const GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mwbase;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST* element = dynamic_cast<const GovGAST*>(BaseClass_ptr1);
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

bool get_GovGAST_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST* element = dynamic_cast<const GovGAST*>(BaseClass_ptr1);
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

bool get_GovGAST_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST* element = dynamic_cast<const GovGAST*>(BaseClass_ptr1);
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

bool get_GovGAST_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST* element = dynamic_cast<const GovGAST*>(BaseClass_ptr1);
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

bool get_GovGAST_vmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST* element = dynamic_cast<const GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST_vmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST* element = dynamic_cast<const GovGAST*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GovGAST::debugName[] = "GovGAST";
const char* GovGAST::debugString() const
{
	return GovGAST::debugName;
}

void GovGAST::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GovGAST", &GovGAST_factory);
}

void GovGAST::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovGAST.at", &assign_GovGAST_at);
	assign_map.emplace("GovGAST.dturb", &assign_GovGAST_dturb);
	assign_map.emplace("GovGAST.kt", &assign_GovGAST_kt);
	assign_map.emplace("GovGAST.mwbase", &assign_GovGAST_mwbase);
	assign_map.emplace("GovGAST.r", &assign_GovGAST_r);
	assign_map.emplace("GovGAST.t1", &assign_GovGAST_t1);
	assign_map.emplace("GovGAST.t2", &assign_GovGAST_t2);
	assign_map.emplace("GovGAST.t3", &assign_GovGAST_t3);
	assign_map.emplace("GovGAST.vmax", &assign_GovGAST_vmax);
	assign_map.emplace("GovGAST.vmin", &assign_GovGAST_vmin);
}

void GovGAST::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovGAST::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovGAST.at", &get_GovGAST_at);
	get_map.emplace("GovGAST.dturb", &get_GovGAST_dturb);
	get_map.emplace("GovGAST.kt", &get_GovGAST_kt);
	get_map.emplace("GovGAST.mwbase", &get_GovGAST_mwbase);
	get_map.emplace("GovGAST.r", &get_GovGAST_r);
	get_map.emplace("GovGAST.t1", &get_GovGAST_t1);
	get_map.emplace("GovGAST.t2", &get_GovGAST_t2);
	get_map.emplace("GovGAST.t3", &get_GovGAST_t3);
	get_map.emplace("GovGAST.vmax", &get_GovGAST_vmax);
	get_map.emplace("GovGAST.vmin", &get_GovGAST_vmin);
}

void GovGAST::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovGAST::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

bool GovGAST::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovGAST" &&
		dynamic_cast<GovGAST*>(otherObject) != nullptr;
}

const BaseClassDefiner GovGAST::declare()
{
	return BaseClassDefiner(GovGAST::addConstructToMap, GovGAST::addPrimitiveAssignFnsToMap, GovGAST::addClassAssignFnsToMap, GovGAST::debugName);
}

std::map<std::string, AttrDetails> GovGAST::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovGAST_factory()
	{
		return new GovGAST;
	}
}
