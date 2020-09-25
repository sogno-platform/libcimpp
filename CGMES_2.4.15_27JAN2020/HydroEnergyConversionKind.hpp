#ifndef HydroEnergyConversionKind_H
#define HydroEnergyConversionKind_H

namespace CIMPP {
	/*
	Specifies the capability of the hydro generating unit to convert energy as a generator or pump.
	*/
	enum class HydroEnergyConversionKind
	{
		/**
		 * Able to generate power, but not able to pump water for energy storage.
		 */
		generator,
		/**
		 * Able to both generate power and pump water for energy storage.
		 */
		pumpAndGenerator,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::HydroEnergyConversionKind& rop);
}
#endif
