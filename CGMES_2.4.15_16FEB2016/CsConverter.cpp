/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CsConverter.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

CsConverter::CsConverter() {}
CsConverter::~CsConverter() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SV,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:CsConverter.alpha", { CGMESProfile::SV, } },
	{ "cim:CsConverter.gamma", { CGMESProfile::SV, } },
	{ "cim:CsConverter.maxAlpha", { CGMESProfile::EQ, } },
	{ "cim:CsConverter.maxGamma", { CGMESProfile::EQ, } },
	{ "cim:CsConverter.maxIdc", { CGMESProfile::EQ, } },
	{ "cim:CsConverter.minAlpha", { CGMESProfile::EQ, } },
	{ "cim:CsConverter.minGamma", { CGMESProfile::EQ, } },
	{ "cim:CsConverter.minIdc", { CGMESProfile::EQ, } },
	{ "cim:CsConverter.operatingMode", { CGMESProfile::SSH, } },
	{ "cim:CsConverter.pPccControl", { CGMESProfile::SSH, } },
	{ "cim:CsConverter.ratedIdc", { CGMESProfile::EQ, } },
	{ "cim:CsConverter.targetAlpha", { CGMESProfile::SSH, } },
	{ "cim:CsConverter.targetGamma", { CGMESProfile::SSH, } },
	{ "cim:CsConverter.targetIdc", { CGMESProfile::SSH, } },
};

std::list<CGMESProfile>
CsConverter::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
CsConverter::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ACDCConverter::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.emplace("cim:CsConverter", &CsConverter_factory);
}

void CsConverter::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:CsConverter.alpha", &assign_CsConverter_alpha);
	assign_map.emplace("cim:CsConverter.gamma", &assign_CsConverter_gamma);
	assign_map.emplace("cim:CsConverter.maxAlpha", &assign_CsConverter_maxAlpha);
	assign_map.emplace("cim:CsConverter.maxGamma", &assign_CsConverter_maxGamma);
	assign_map.emplace("cim:CsConverter.maxIdc", &assign_CsConverter_maxIdc);
	assign_map.emplace("cim:CsConverter.minAlpha", &assign_CsConverter_minAlpha);
	assign_map.emplace("cim:CsConverter.minGamma", &assign_CsConverter_minGamma);
	assign_map.emplace("cim:CsConverter.minIdc", &assign_CsConverter_minIdc);
	assign_map.emplace("cim:CsConverter.operatingMode", &assign_CsConverter_operatingMode);
	assign_map.emplace("cim:CsConverter.pPccControl", &assign_CsConverter_pPccControl);
	assign_map.emplace("cim:CsConverter.ratedIdc", &assign_CsConverter_ratedIdc);
	assign_map.emplace("cim:CsConverter.targetAlpha", &assign_CsConverter_targetAlpha);
	assign_map.emplace("cim:CsConverter.targetGamma", &assign_CsConverter_targetGamma);
	assign_map.emplace("cim:CsConverter.targetIdc", &assign_CsConverter_targetIdc);
}

void CsConverter::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void CsConverter::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ACDCConverter::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:CsConverter.alpha", &get_CsConverter_alpha);
	get_map.emplace("cim:CsConverter.gamma", &get_CsConverter_gamma);
	get_map.emplace("cim:CsConverter.maxAlpha", &get_CsConverter_maxAlpha);
	get_map.emplace("cim:CsConverter.maxGamma", &get_CsConverter_maxGamma);
	get_map.emplace("cim:CsConverter.maxIdc", &get_CsConverter_maxIdc);
	get_map.emplace("cim:CsConverter.minAlpha", &get_CsConverter_minAlpha);
	get_map.emplace("cim:CsConverter.minGamma", &get_CsConverter_minGamma);
	get_map.emplace("cim:CsConverter.minIdc", &get_CsConverter_minIdc);
	get_map.emplace("cim:CsConverter.ratedIdc", &get_CsConverter_ratedIdc);
	get_map.emplace("cim:CsConverter.targetAlpha", &get_CsConverter_targetAlpha);
	get_map.emplace("cim:CsConverter.targetGamma", &get_CsConverter_targetGamma);
	get_map.emplace("cim:CsConverter.targetIdc", &get_CsConverter_targetIdc);
}

void CsConverter::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ACDCConverter::addClassGetFnsToMap(get_map);
}

void CsConverter::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ACDCConverter::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:CsConverter.operatingMode", &get_CsConverter_operatingMode);
	get_map.emplace("cim:CsConverter.pPccControl", &get_CsConverter_pPccControl);
}

const BaseClassDefiner CsConverter::declare()
{
	return BaseClassDefiner(CsConverter::addConstructToMap, CsConverter::addPrimitiveAssignFnsToMap, CsConverter::addClassAssignFnsToMap, CsConverter::debugName);
}

namespace CIMPP
{
	BaseClass* CsConverter_factory()
	{
		return new CsConverter;
	}
}
