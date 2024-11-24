/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CsConverter.hpp"

#include <algorithm>
#include <sstream>

#include "AngleDegrees.hpp"
#include "AngleDegrees.hpp"
#include "AngleDegrees.hpp"
#include "AngleDegrees.hpp"
#include "CurrentFlow.hpp"
#include "AngleDegrees.hpp"
#include "AngleDegrees.hpp"
#include "CurrentFlow.hpp"
#include "CsOperatingModeKind.hpp"
#include "CsPpccControlKind.hpp"
#include "CurrentFlow.hpp"
#include "AngleDegrees.hpp"
#include "AngleDegrees.hpp"
#include "CurrentFlow.hpp"

using namespace CIMPP;

CsConverter::CsConverter() {};
CsConverter::~CsConverter() {};


bool assign_CsConverter_alpha(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->alpha;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_CsConverter_gamma(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->gamma;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_CsConverter_maxAlpha(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->maxAlpha;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_CsConverter_maxGamma(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->maxGamma;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_CsConverter_maxIdc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->maxIdc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_CsConverter_minAlpha(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->minAlpha;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_CsConverter_minGamma(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->minGamma;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_CsConverter_minIdc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->minIdc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_CsConverter_operatingMode(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->operatingMode;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_CsConverter_pPccControl(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->pPccControl;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_CsConverter_ratedIdc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->ratedIdc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_CsConverter_targetAlpha(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->targetAlpha;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_CsConverter_targetGamma(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->targetGamma;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_CsConverter_targetIdc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (CsConverter* element = dynamic_cast<CsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->targetIdc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}
















const char CsConverter::debugName[] = "CsConverter";
const char* CsConverter::debugString() const
{
	return CsConverter::debugName;
}

void CsConverter::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:CsConverter"), &CsConverter_factory));
}

void CsConverter::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:CsConverter.alpha"), &assign_CsConverter_alpha));
	assign_map.insert(std::make_pair(std::string("cim:CsConverter.gamma"), &assign_CsConverter_gamma));
	assign_map.insert(std::make_pair(std::string("cim:CsConverter.maxAlpha"), &assign_CsConverter_maxAlpha));
	assign_map.insert(std::make_pair(std::string("cim:CsConverter.maxGamma"), &assign_CsConverter_maxGamma));
	assign_map.insert(std::make_pair(std::string("cim:CsConverter.maxIdc"), &assign_CsConverter_maxIdc));
	assign_map.insert(std::make_pair(std::string("cim:CsConverter.minAlpha"), &assign_CsConverter_minAlpha));
	assign_map.insert(std::make_pair(std::string("cim:CsConverter.minGamma"), &assign_CsConverter_minGamma));
	assign_map.insert(std::make_pair(std::string("cim:CsConverter.minIdc"), &assign_CsConverter_minIdc));
	assign_map.insert(std::make_pair(std::string("cim:CsConverter.operatingMode"), &assign_CsConverter_operatingMode));
	assign_map.insert(std::make_pair(std::string("cim:CsConverter.pPccControl"), &assign_CsConverter_pPccControl));
	assign_map.insert(std::make_pair(std::string("cim:CsConverter.ratedIdc"), &assign_CsConverter_ratedIdc));
	assign_map.insert(std::make_pair(std::string("cim:CsConverter.targetAlpha"), &assign_CsConverter_targetAlpha));
	assign_map.insert(std::make_pair(std::string("cim:CsConverter.targetGamma"), &assign_CsConverter_targetGamma));
	assign_map.insert(std::make_pair(std::string("cim:CsConverter.targetIdc"), &assign_CsConverter_targetIdc));
}

void CsConverter::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
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
