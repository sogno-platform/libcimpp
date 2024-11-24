/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "HydroPlantStorageKind.hpp"

#include <ios>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

HydroPlantStorageKind& HydroPlantStorageKind::operator=(HydroPlantStorageKind_ENUM rop)
{
	value = rop;
	initialized = true;
	return *this;
}

HydroPlantStorageKind::operator HydroPlantStorageKind_ENUM() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char HydroPlantStorageKind::debugName[] = "HydroPlantStorageKind";
const char* HydroPlantStorageKind::debugString() const
{
	return HydroPlantStorageKind::debugName;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, HydroPlantStorageKind& rop)
	{
		rop.initialized = false;

		std::string EnumSymbol;
		lop >> EnumSymbol;

		size_t pos = EnumSymbol.find_first_of('.');
		if(EnumSymbol.substr(0, pos) != "HydroPlantStorageKind")
		{
			lop.setstate(std::ios::failbit);
			return lop;
		}

		EnumSymbol = EnumSymbol.substr(pos + 1);

		if(EnumSymbol == "runOfRiver")
		{
			rop = HydroPlantStorageKind::runOfRiver;
			return lop;
		}
		if(EnumSymbol == "pumpedStorage")
		{
			rop = HydroPlantStorageKind::pumpedStorage;
			return lop;
		}
		if(EnumSymbol == "storage")
		{
			rop = HydroPlantStorageKind::storage;
			return lop;
		}

		lop.setstate(std::ios::failbit);
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const HydroPlantStorageKind& obj)
	{
		if (obj.initialized)
		{
			std::string EnumSymbol;

			if (obj.value == HydroPlantStorageKind::runOfRiver)
			{
				EnumSymbol = "runOfRiver";
			}
			if (obj.value == HydroPlantStorageKind::pumpedStorage)
			{
				EnumSymbol = "pumpedStorage";
			}
			if (obj.value == HydroPlantStorageKind::storage)
			{
				EnumSymbol = "storage";
			}

			if (!EnumSymbol.empty())
			{
				os << "HydroPlantStorageKind." << EnumSymbol;
			}
		}
		return os;
	}
}
