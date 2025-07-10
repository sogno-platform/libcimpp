/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PssIEEE4B.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PssIEEE4B(),
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
		{ "PssIEEE4B.bwi", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.kh", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.kh1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.kh11", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.kh17", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.kh2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.ki", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.ki1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.ki11", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.ki17", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.ki2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.kl", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.kl1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.kl11", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.kl17", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.kl2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.omegani", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.th1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.th10", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.th11", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.th12", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.th2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.th3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.th4", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.th5", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.th6", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.th7", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.th8", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.th9", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.ti1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.ti10", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.ti11", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.ti12", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.ti2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.ti3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.ti4", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.ti5", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.ti6", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.ti7", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.ti8", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.ti9", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.tl1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.tl10", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.tl11", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.tl12", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.tl2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.tl3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.tl4", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.tl5", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.tl6", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.tl7", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.tl8", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.tl9", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.vhmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.vhmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.vimax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.vimin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.vlmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.vlmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.vstmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "PssIEEE4B.vstmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

PssIEEE4B::PssIEEE4B() {}
PssIEEE4B::~PssIEEE4B() {}

const std::list<std::string>& PssIEEE4B::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PssIEEE4B::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PssIEEE4B::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PssIEEE4B::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PssIEEE4B::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PssIEEE4B::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PssIEEE4B::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PssIEEE4B_bwi(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->bwi;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_kh(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kh;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_kh1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kh1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_kh11(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kh11;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_kh17(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kh17;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_kh2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kh2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_ki1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_ki11(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki11;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_ki17(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki17;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_ki2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_kl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_kl1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kl1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_kl11(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kl11;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_kl17(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kl17;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_kl2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kl2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_omegani(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->omegani;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_th1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->th1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_th10(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->th10;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_th11(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->th11;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_th12(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->th12;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_th2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->th2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_th3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->th3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_th4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->th4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_th5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->th5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_th6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->th6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_th7(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->th7;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_th8(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->th8;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_th9(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->th9;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_ti1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ti1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_ti10(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ti10;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_ti11(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ti11;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_ti12(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ti12;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_ti2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ti2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_ti3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ti3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_ti4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ti4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_ti5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ti5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_ti6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ti6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_ti7(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ti7;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_ti8(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ti8;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_ti9(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ti9;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_tl1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tl1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_tl10(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tl10;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_tl11(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tl11;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_tl12(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tl12;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_tl2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tl2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_tl3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tl3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_tl4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tl4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_tl5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tl5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_tl6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tl6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_tl7(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tl7;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_tl8(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tl8;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_tl9(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tl9;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_vhmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vhmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_vhmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vhmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_vimax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vimax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_vimin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vimin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_vlmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vlmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_vlmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vlmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_vstmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vstmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE4B_vstmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE4B* element = dynamic_cast<PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vstmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_PssIEEE4B_bwi(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->bwi;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_kh(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kh;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_kh1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kh1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_kh11(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kh11;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_kh17(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kh17;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_kh2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kh2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ki;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_ki1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ki1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_ki11(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ki11;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_ki17(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ki17;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_ki2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ki2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_kl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_kl1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kl1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_kl11(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kl11;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_kl17(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kl17;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_kl2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kl2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_omegani(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->omegani;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_th1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->th1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_th10(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->th10;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_th11(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->th11;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_th12(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->th12;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_th2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->th2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_th3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->th3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_th4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->th4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_th5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->th5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_th6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->th6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_th7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->th7;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_th8(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->th8;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_th9(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->th9;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_ti1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ti1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_ti10(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ti10;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_ti11(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ti11;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_ti12(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ti12;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_ti2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ti2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_ti3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ti3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_ti4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ti4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_ti5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ti5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_ti6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ti6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_ti7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ti7;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_ti8(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ti8;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_ti9(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ti9;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_tl1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tl1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_tl10(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tl10;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_tl11(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tl11;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_tl12(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tl12;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_tl2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tl2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_tl3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tl3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_tl4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tl4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_tl5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tl5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_tl6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tl6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_tl7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tl7;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_tl8(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tl8;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_tl9(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tl9;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_vhmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vhmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_vhmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vhmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_vimax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vimax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_vimin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vimin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_vlmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vlmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_vlmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vlmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_vstmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vstmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE4B_vstmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE4B* element = dynamic_cast<const PssIEEE4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vstmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PssIEEE4B::debugName[] = "PssIEEE4B";
const char* PssIEEE4B::debugString() const
{
	return PssIEEE4B::debugName;
}

void PssIEEE4B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PssIEEE4B", &PssIEEE4B_factory);
}

void PssIEEE4B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PssIEEE4B.bwi", &assign_PssIEEE4B_bwi);
	assign_map.emplace("PssIEEE4B.kh", &assign_PssIEEE4B_kh);
	assign_map.emplace("PssIEEE4B.kh1", &assign_PssIEEE4B_kh1);
	assign_map.emplace("PssIEEE4B.kh11", &assign_PssIEEE4B_kh11);
	assign_map.emplace("PssIEEE4B.kh17", &assign_PssIEEE4B_kh17);
	assign_map.emplace("PssIEEE4B.kh2", &assign_PssIEEE4B_kh2);
	assign_map.emplace("PssIEEE4B.ki", &assign_PssIEEE4B_ki);
	assign_map.emplace("PssIEEE4B.ki1", &assign_PssIEEE4B_ki1);
	assign_map.emplace("PssIEEE4B.ki11", &assign_PssIEEE4B_ki11);
	assign_map.emplace("PssIEEE4B.ki17", &assign_PssIEEE4B_ki17);
	assign_map.emplace("PssIEEE4B.ki2", &assign_PssIEEE4B_ki2);
	assign_map.emplace("PssIEEE4B.kl", &assign_PssIEEE4B_kl);
	assign_map.emplace("PssIEEE4B.kl1", &assign_PssIEEE4B_kl1);
	assign_map.emplace("PssIEEE4B.kl11", &assign_PssIEEE4B_kl11);
	assign_map.emplace("PssIEEE4B.kl17", &assign_PssIEEE4B_kl17);
	assign_map.emplace("PssIEEE4B.kl2", &assign_PssIEEE4B_kl2);
	assign_map.emplace("PssIEEE4B.omegani", &assign_PssIEEE4B_omegani);
	assign_map.emplace("PssIEEE4B.th1", &assign_PssIEEE4B_th1);
	assign_map.emplace("PssIEEE4B.th10", &assign_PssIEEE4B_th10);
	assign_map.emplace("PssIEEE4B.th11", &assign_PssIEEE4B_th11);
	assign_map.emplace("PssIEEE4B.th12", &assign_PssIEEE4B_th12);
	assign_map.emplace("PssIEEE4B.th2", &assign_PssIEEE4B_th2);
	assign_map.emplace("PssIEEE4B.th3", &assign_PssIEEE4B_th3);
	assign_map.emplace("PssIEEE4B.th4", &assign_PssIEEE4B_th4);
	assign_map.emplace("PssIEEE4B.th5", &assign_PssIEEE4B_th5);
	assign_map.emplace("PssIEEE4B.th6", &assign_PssIEEE4B_th6);
	assign_map.emplace("PssIEEE4B.th7", &assign_PssIEEE4B_th7);
	assign_map.emplace("PssIEEE4B.th8", &assign_PssIEEE4B_th8);
	assign_map.emplace("PssIEEE4B.th9", &assign_PssIEEE4B_th9);
	assign_map.emplace("PssIEEE4B.ti1", &assign_PssIEEE4B_ti1);
	assign_map.emplace("PssIEEE4B.ti10", &assign_PssIEEE4B_ti10);
	assign_map.emplace("PssIEEE4B.ti11", &assign_PssIEEE4B_ti11);
	assign_map.emplace("PssIEEE4B.ti12", &assign_PssIEEE4B_ti12);
	assign_map.emplace("PssIEEE4B.ti2", &assign_PssIEEE4B_ti2);
	assign_map.emplace("PssIEEE4B.ti3", &assign_PssIEEE4B_ti3);
	assign_map.emplace("PssIEEE4B.ti4", &assign_PssIEEE4B_ti4);
	assign_map.emplace("PssIEEE4B.ti5", &assign_PssIEEE4B_ti5);
	assign_map.emplace("PssIEEE4B.ti6", &assign_PssIEEE4B_ti6);
	assign_map.emplace("PssIEEE4B.ti7", &assign_PssIEEE4B_ti7);
	assign_map.emplace("PssIEEE4B.ti8", &assign_PssIEEE4B_ti8);
	assign_map.emplace("PssIEEE4B.ti9", &assign_PssIEEE4B_ti9);
	assign_map.emplace("PssIEEE4B.tl1", &assign_PssIEEE4B_tl1);
	assign_map.emplace("PssIEEE4B.tl10", &assign_PssIEEE4B_tl10);
	assign_map.emplace("PssIEEE4B.tl11", &assign_PssIEEE4B_tl11);
	assign_map.emplace("PssIEEE4B.tl12", &assign_PssIEEE4B_tl12);
	assign_map.emplace("PssIEEE4B.tl2", &assign_PssIEEE4B_tl2);
	assign_map.emplace("PssIEEE4B.tl3", &assign_PssIEEE4B_tl3);
	assign_map.emplace("PssIEEE4B.tl4", &assign_PssIEEE4B_tl4);
	assign_map.emplace("PssIEEE4B.tl5", &assign_PssIEEE4B_tl5);
	assign_map.emplace("PssIEEE4B.tl6", &assign_PssIEEE4B_tl6);
	assign_map.emplace("PssIEEE4B.tl7", &assign_PssIEEE4B_tl7);
	assign_map.emplace("PssIEEE4B.tl8", &assign_PssIEEE4B_tl8);
	assign_map.emplace("PssIEEE4B.tl9", &assign_PssIEEE4B_tl9);
	assign_map.emplace("PssIEEE4B.vhmax", &assign_PssIEEE4B_vhmax);
	assign_map.emplace("PssIEEE4B.vhmin", &assign_PssIEEE4B_vhmin);
	assign_map.emplace("PssIEEE4B.vimax", &assign_PssIEEE4B_vimax);
	assign_map.emplace("PssIEEE4B.vimin", &assign_PssIEEE4B_vimin);
	assign_map.emplace("PssIEEE4B.vlmax", &assign_PssIEEE4B_vlmax);
	assign_map.emplace("PssIEEE4B.vlmin", &assign_PssIEEE4B_vlmin);
	assign_map.emplace("PssIEEE4B.vstmax", &assign_PssIEEE4B_vstmax);
	assign_map.emplace("PssIEEE4B.vstmin", &assign_PssIEEE4B_vstmin);
}

void PssIEEE4B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PssIEEE4B::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PssIEEE4B.bwi", &get_PssIEEE4B_bwi);
	get_map.emplace("PssIEEE4B.kh", &get_PssIEEE4B_kh);
	get_map.emplace("PssIEEE4B.kh1", &get_PssIEEE4B_kh1);
	get_map.emplace("PssIEEE4B.kh11", &get_PssIEEE4B_kh11);
	get_map.emplace("PssIEEE4B.kh17", &get_PssIEEE4B_kh17);
	get_map.emplace("PssIEEE4B.kh2", &get_PssIEEE4B_kh2);
	get_map.emplace("PssIEEE4B.ki", &get_PssIEEE4B_ki);
	get_map.emplace("PssIEEE4B.ki1", &get_PssIEEE4B_ki1);
	get_map.emplace("PssIEEE4B.ki11", &get_PssIEEE4B_ki11);
	get_map.emplace("PssIEEE4B.ki17", &get_PssIEEE4B_ki17);
	get_map.emplace("PssIEEE4B.ki2", &get_PssIEEE4B_ki2);
	get_map.emplace("PssIEEE4B.kl", &get_PssIEEE4B_kl);
	get_map.emplace("PssIEEE4B.kl1", &get_PssIEEE4B_kl1);
	get_map.emplace("PssIEEE4B.kl11", &get_PssIEEE4B_kl11);
	get_map.emplace("PssIEEE4B.kl17", &get_PssIEEE4B_kl17);
	get_map.emplace("PssIEEE4B.kl2", &get_PssIEEE4B_kl2);
	get_map.emplace("PssIEEE4B.omegani", &get_PssIEEE4B_omegani);
	get_map.emplace("PssIEEE4B.th1", &get_PssIEEE4B_th1);
	get_map.emplace("PssIEEE4B.th10", &get_PssIEEE4B_th10);
	get_map.emplace("PssIEEE4B.th11", &get_PssIEEE4B_th11);
	get_map.emplace("PssIEEE4B.th12", &get_PssIEEE4B_th12);
	get_map.emplace("PssIEEE4B.th2", &get_PssIEEE4B_th2);
	get_map.emplace("PssIEEE4B.th3", &get_PssIEEE4B_th3);
	get_map.emplace("PssIEEE4B.th4", &get_PssIEEE4B_th4);
	get_map.emplace("PssIEEE4B.th5", &get_PssIEEE4B_th5);
	get_map.emplace("PssIEEE4B.th6", &get_PssIEEE4B_th6);
	get_map.emplace("PssIEEE4B.th7", &get_PssIEEE4B_th7);
	get_map.emplace("PssIEEE4B.th8", &get_PssIEEE4B_th8);
	get_map.emplace("PssIEEE4B.th9", &get_PssIEEE4B_th9);
	get_map.emplace("PssIEEE4B.ti1", &get_PssIEEE4B_ti1);
	get_map.emplace("PssIEEE4B.ti10", &get_PssIEEE4B_ti10);
	get_map.emplace("PssIEEE4B.ti11", &get_PssIEEE4B_ti11);
	get_map.emplace("PssIEEE4B.ti12", &get_PssIEEE4B_ti12);
	get_map.emplace("PssIEEE4B.ti2", &get_PssIEEE4B_ti2);
	get_map.emplace("PssIEEE4B.ti3", &get_PssIEEE4B_ti3);
	get_map.emplace("PssIEEE4B.ti4", &get_PssIEEE4B_ti4);
	get_map.emplace("PssIEEE4B.ti5", &get_PssIEEE4B_ti5);
	get_map.emplace("PssIEEE4B.ti6", &get_PssIEEE4B_ti6);
	get_map.emplace("PssIEEE4B.ti7", &get_PssIEEE4B_ti7);
	get_map.emplace("PssIEEE4B.ti8", &get_PssIEEE4B_ti8);
	get_map.emplace("PssIEEE4B.ti9", &get_PssIEEE4B_ti9);
	get_map.emplace("PssIEEE4B.tl1", &get_PssIEEE4B_tl1);
	get_map.emplace("PssIEEE4B.tl10", &get_PssIEEE4B_tl10);
	get_map.emplace("PssIEEE4B.tl11", &get_PssIEEE4B_tl11);
	get_map.emplace("PssIEEE4B.tl12", &get_PssIEEE4B_tl12);
	get_map.emplace("PssIEEE4B.tl2", &get_PssIEEE4B_tl2);
	get_map.emplace("PssIEEE4B.tl3", &get_PssIEEE4B_tl3);
	get_map.emplace("PssIEEE4B.tl4", &get_PssIEEE4B_tl4);
	get_map.emplace("PssIEEE4B.tl5", &get_PssIEEE4B_tl5);
	get_map.emplace("PssIEEE4B.tl6", &get_PssIEEE4B_tl6);
	get_map.emplace("PssIEEE4B.tl7", &get_PssIEEE4B_tl7);
	get_map.emplace("PssIEEE4B.tl8", &get_PssIEEE4B_tl8);
	get_map.emplace("PssIEEE4B.tl9", &get_PssIEEE4B_tl9);
	get_map.emplace("PssIEEE4B.vhmax", &get_PssIEEE4B_vhmax);
	get_map.emplace("PssIEEE4B.vhmin", &get_PssIEEE4B_vhmin);
	get_map.emplace("PssIEEE4B.vimax", &get_PssIEEE4B_vimax);
	get_map.emplace("PssIEEE4B.vimin", &get_PssIEEE4B_vimin);
	get_map.emplace("PssIEEE4B.vlmax", &get_PssIEEE4B_vlmax);
	get_map.emplace("PssIEEE4B.vlmin", &get_PssIEEE4B_vlmin);
	get_map.emplace("PssIEEE4B.vstmax", &get_PssIEEE4B_vstmax);
	get_map.emplace("PssIEEE4B.vstmin", &get_PssIEEE4B_vstmin);
}

void PssIEEE4B::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void PssIEEE4B::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
}

bool PssIEEE4B::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PssIEEE4B" &&
		dynamic_cast<PssIEEE4B*>(otherObject) != nullptr;
}

const BaseClassDefiner PssIEEE4B::declare()
{
	return BaseClassDefiner(PssIEEE4B::addConstructToMap, PssIEEE4B::addPrimitiveAssignFnsToMap, PssIEEE4B::addClassAssignFnsToMap, PssIEEE4B::debugName);
}

std::map<std::string, AttrDetails> PssIEEE4B::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemStabilizerDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PssIEEE4B_factory()
	{
		return new PssIEEE4B;
	}
}
