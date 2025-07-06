/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CsConverter.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		CsConverter(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::EQ,
			CGMESProfile::SV,
			CGMESProfile::SSH,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "CsConverter.alpha", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SV, } } },
		{ "CsConverter.gamma", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SV, } } },
		{ "CsConverter.maxAlpha", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "CsConverter.maxGamma", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "CsConverter.maxIdc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "CsConverter.minAlpha", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "CsConverter.minGamma", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "CsConverter.minIdc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "CsConverter.operatingMode", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "CsConverter.pPccControl", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "CsConverter.ratedIdc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "CsConverter.targetAlpha", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "CsConverter.targetGamma", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "CsConverter.targetIdc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
	};
    return ClassAttrDetailsMap;
}

CsConverter::CsConverter() {}
CsConverter::~CsConverter() {}

const std::list<std::string>& CsConverter::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& CsConverter::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& CsConverter::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& CsConverter::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& CsConverter::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& CsConverter::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& CsConverter::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_CsConverter_alpha(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->alpha;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_CsConverter_gamma(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gamma;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_CsConverter_maxAlpha(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maxAlpha;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_CsConverter_maxGamma(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maxGamma;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_CsConverter_maxIdc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maxIdc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_CsConverter_minAlpha(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->minAlpha;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_CsConverter_minGamma(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->minGamma;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_CsConverter_minIdc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->minIdc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_CsConverter_operatingMode(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->operatingMode;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_CsConverter_pPccControl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pPccControl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_CsConverter_ratedIdc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ratedIdc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_CsConverter_targetAlpha(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->targetAlpha;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_CsConverter_targetGamma(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->targetGamma;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_CsConverter_targetIdc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->targetIdc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_CsConverter_alpha(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const CsConverter* element = dynamic_cast<const CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->alpha;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_CsConverter_gamma(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const CsConverter* element = dynamic_cast<const CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gamma;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_CsConverter_maxAlpha(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const CsConverter* element = dynamic_cast<const CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maxAlpha;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_CsConverter_maxGamma(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const CsConverter* element = dynamic_cast<const CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maxGamma;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_CsConverter_maxIdc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const CsConverter* element = dynamic_cast<const CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maxIdc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_CsConverter_minAlpha(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const CsConverter* element = dynamic_cast<const CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->minAlpha;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_CsConverter_minGamma(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const CsConverter* element = dynamic_cast<const CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->minGamma;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_CsConverter_minIdc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const CsConverter* element = dynamic_cast<const CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->minIdc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_CsConverter_operatingMode(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const CsConverter* element = dynamic_cast<const CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->operatingMode;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_CsConverter_pPccControl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const CsConverter* element = dynamic_cast<const CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pPccControl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_CsConverter_ratedIdc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const CsConverter* element = dynamic_cast<const CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ratedIdc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_CsConverter_targetAlpha(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const CsConverter* element = dynamic_cast<const CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->targetAlpha;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_CsConverter_targetGamma(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const CsConverter* element = dynamic_cast<const CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->targetGamma;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_CsConverter_targetIdc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const CsConverter* element = dynamic_cast<const CsConverter*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->targetIdc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char CsConverter::debugName[] = "CsConverter";
const char* CsConverter::debugString() const
{
	return CsConverter::debugName;
}

void CsConverter::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("CsConverter", &CsConverter_factory);
}

void CsConverter::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("CsConverter.alpha", &assign_CsConverter_alpha);
	assign_map.emplace("CsConverter.gamma", &assign_CsConverter_gamma);
	assign_map.emplace("CsConverter.maxAlpha", &assign_CsConverter_maxAlpha);
	assign_map.emplace("CsConverter.maxGamma", &assign_CsConverter_maxGamma);
	assign_map.emplace("CsConverter.maxIdc", &assign_CsConverter_maxIdc);
	assign_map.emplace("CsConverter.minAlpha", &assign_CsConverter_minAlpha);
	assign_map.emplace("CsConverter.minGamma", &assign_CsConverter_minGamma);
	assign_map.emplace("CsConverter.minIdc", &assign_CsConverter_minIdc);
	assign_map.emplace("CsConverter.operatingMode", &assign_CsConverter_operatingMode);
	assign_map.emplace("CsConverter.pPccControl", &assign_CsConverter_pPccControl);
	assign_map.emplace("CsConverter.ratedIdc", &assign_CsConverter_ratedIdc);
	assign_map.emplace("CsConverter.targetAlpha", &assign_CsConverter_targetAlpha);
	assign_map.emplace("CsConverter.targetGamma", &assign_CsConverter_targetGamma);
	assign_map.emplace("CsConverter.targetIdc", &assign_CsConverter_targetIdc);
}

void CsConverter::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void CsConverter::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ACDCConverter::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("CsConverter.alpha", &get_CsConverter_alpha);
	get_map.emplace("CsConverter.gamma", &get_CsConverter_gamma);
	get_map.emplace("CsConverter.maxAlpha", &get_CsConverter_maxAlpha);
	get_map.emplace("CsConverter.maxGamma", &get_CsConverter_maxGamma);
	get_map.emplace("CsConverter.maxIdc", &get_CsConverter_maxIdc);
	get_map.emplace("CsConverter.minAlpha", &get_CsConverter_minAlpha);
	get_map.emplace("CsConverter.minGamma", &get_CsConverter_minGamma);
	get_map.emplace("CsConverter.minIdc", &get_CsConverter_minIdc);
	get_map.emplace("CsConverter.ratedIdc", &get_CsConverter_ratedIdc);
	get_map.emplace("CsConverter.targetAlpha", &get_CsConverter_targetAlpha);
	get_map.emplace("CsConverter.targetGamma", &get_CsConverter_targetGamma);
	get_map.emplace("CsConverter.targetIdc", &get_CsConverter_targetIdc);
}

void CsConverter::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ACDCConverter::addClassGetFnsToMap(get_map);
}

void CsConverter::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ACDCConverter::addEnumGetFnsToMap(get_map);
	get_map.emplace("CsConverter.operatingMode", &get_CsConverter_operatingMode);
	get_map.emplace("CsConverter.pPccControl", &get_CsConverter_pPccControl);
}

bool CsConverter::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "CsConverter" &&
		dynamic_cast<CsConverter*>(otherObject) != nullptr;
}

const BaseClassDefiner CsConverter::declare()
{
	return BaseClassDefiner(CsConverter::addConstructToMap, CsConverter::addPrimitiveAssignFnsToMap, CsConverter::addClassAssignFnsToMap, CsConverter::debugName);
}

std::map<std::string, AttrDetails> CsConverter::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ACDCConverter::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* CsConverter_factory()
	{
		return new CsConverter;
	}
}
