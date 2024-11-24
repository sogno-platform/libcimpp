#ifndef HydroEnergyConversionKind_H
#define HydroEnergyConversionKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Specifies the capability of the hydro generating unit to convert energy as a generator or pump.
	*/
	class HydroEnergyConversionKind
	{
	public:
		enum HydroEnergyConversionKind_ENUM
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

		HydroEnergyConversionKind() : value(), initialized(false) {}
		HydroEnergyConversionKind(HydroEnergyConversionKind_ENUM value) : value(value), initialized(true) {}

		HydroEnergyConversionKind& operator=(HydroEnergyConversionKind_ENUM rop);
		operator HydroEnergyConversionKind_ENUM() const;

		HydroEnergyConversionKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, HydroEnergyConversionKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const HydroEnergyConversionKind& obj);
	};
}
#endif
