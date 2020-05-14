#include <sstream>
#include <iostream>
#include "HydroPlantStorageKind.hpp"

using namespace CIMPP;

namespace CIMPP {
	std::istream& operator>>(std::istream& lop, CIMPP::HydroPlantStorageKind& rop)
	{
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
}

