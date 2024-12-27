/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcAVR4.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Boolean.hpp"
#include "Float.hpp"
#include "Float.hpp"
#include "Float.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcAVR4::ExcAVR4() {};
ExcAVR4::~ExcAVR4() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcAVR4.imul", { CGMESProfile::DY, } },
	{ "cim:ExcAVR4.ka", { CGMESProfile::DY, } },
	{ "cim:ExcAVR4.ke", { CGMESProfile::DY, } },
	{ "cim:ExcAVR4.kif", { CGMESProfile::DY, } },
	{ "cim:ExcAVR4.t1", { CGMESProfile::DY, } },
	{ "cim:ExcAVR4.t1if", { CGMESProfile::DY, } },
	{ "cim:ExcAVR4.t2", { CGMESProfile::DY, } },
	{ "cim:ExcAVR4.t3", { CGMESProfile::DY, } },
	{ "cim:ExcAVR4.t4", { CGMESProfile::DY, } },
	{ "cim:ExcAVR4.tif", { CGMESProfile::DY, } },
	{ "cim:ExcAVR4.vfmn", { CGMESProfile::DY, } },
	{ "cim:ExcAVR4.vfmx", { CGMESProfile::DY, } },
	{ "cim:ExcAVR4.vrmn", { CGMESProfile::DY, } },
	{ "cim:ExcAVR4.vrmx", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcAVR4::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcAVR4::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExcAVR4_imul(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1))
	{
		buffer >> element->imul;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR4_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1))
	{
		buffer >> element->ka;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR4_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1))
	{
		buffer >> element->ke;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR4_kif(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1))
	{
		buffer >> element->kif;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR4_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1))
	{
		buffer >> element->t1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR4_t1if(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1))
	{
		buffer >> element->t1if;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR4_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1))
	{
		buffer >> element->t2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR4_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1))
	{
		buffer >> element->t3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR4_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1))
	{
		buffer >> element->t4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR4_tif(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1))
	{
		buffer >> element->tif;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR4_vfmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1))
	{
		buffer >> element->vfmn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR4_vfmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1))
	{
		buffer >> element->vfmx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR4_vrmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1))
	{
		buffer >> element->vrmn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR4_vrmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR4* element = dynamic_cast<ExcAVR4*>(BaseClass_ptr1))
	{
		buffer >> element->vrmx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ExcAVR4_imul(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1))
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
	if (const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1))
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
	if (const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1))
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
	if (const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1))
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
	if (const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1))
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
	if (const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1))
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
	if (const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1))
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
	if (const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1))
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
	if (const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1))
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
	if (const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1))
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
	if (const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1))
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
	if (const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1))
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
	if (const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1))
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
	if (const ExcAVR4* element = dynamic_cast<const ExcAVR4*>(BaseClass_ptr1))
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
	factory_map.insert(std::make_pair(std::string("cim:ExcAVR4"), &ExcAVR4_factory));
}

void ExcAVR4::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.imul"), &assign_ExcAVR4_imul));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.ka"), &assign_ExcAVR4_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.ke"), &assign_ExcAVR4_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.kif"), &assign_ExcAVR4_kif));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.t1"), &assign_ExcAVR4_t1));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.t1if"), &assign_ExcAVR4_t1if));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.t2"), &assign_ExcAVR4_t2));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.t3"), &assign_ExcAVR4_t3));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.t4"), &assign_ExcAVR4_t4));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.tif"), &assign_ExcAVR4_tif));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.vfmn"), &assign_ExcAVR4_vfmn));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.vfmx"), &assign_ExcAVR4_vfmx));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.vrmn"), &assign_ExcAVR4_vrmn));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR4.vrmx"), &assign_ExcAVR4_vrmx));
}

void ExcAVR4::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcAVR4::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcAVR4.imul", &get_ExcAVR4_imul);
	get_map.emplace("cim:ExcAVR4.ka", &get_ExcAVR4_ka);
	get_map.emplace("cim:ExcAVR4.ke", &get_ExcAVR4_ke);
	get_map.emplace("cim:ExcAVR4.kif", &get_ExcAVR4_kif);
	get_map.emplace("cim:ExcAVR4.t1", &get_ExcAVR4_t1);
	get_map.emplace("cim:ExcAVR4.t1if", &get_ExcAVR4_t1if);
	get_map.emplace("cim:ExcAVR4.t2", &get_ExcAVR4_t2);
	get_map.emplace("cim:ExcAVR4.t3", &get_ExcAVR4_t3);
	get_map.emplace("cim:ExcAVR4.t4", &get_ExcAVR4_t4);
	get_map.emplace("cim:ExcAVR4.tif", &get_ExcAVR4_tif);
	get_map.emplace("cim:ExcAVR4.vfmn", &get_ExcAVR4_vfmn);
	get_map.emplace("cim:ExcAVR4.vfmx", &get_ExcAVR4_vfmx);
	get_map.emplace("cim:ExcAVR4.vrmn", &get_ExcAVR4_vrmn);
	get_map.emplace("cim:ExcAVR4.vrmx", &get_ExcAVR4_vrmx);
}

void ExcAVR4::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcAVR4::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcAVR4::declare()
{
	return BaseClassDefiner(ExcAVR4::addConstructToMap, ExcAVR4::addPrimitiveAssignFnsToMap, ExcAVR4::addClassAssignFnsToMap, ExcAVR4::debugName);
}

namespace CIMPP
{
	BaseClass* ExcAVR4_factory()
	{
		return new ExcAVR4;
	}
}
