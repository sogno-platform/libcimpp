#ifndef HydroTurbineKind_H
#define HydroTurbineKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Type of turbine.
	*/
	class HydroTurbineKind
	{
	public:
		enum HydroTurbineKind_ENUM
		{
			/**
			 * Francis.
			 */
			francis,
			/**
			 * Pelton.
			 */
			pelton,
			/**
			 * Kaplan.
			 */
			kaplan,
		};

		HydroTurbineKind() : value(), initialized(false) {}
		HydroTurbineKind(HydroTurbineKind_ENUM value) : value(value), initialized(true) {}

		HydroTurbineKind& operator=(HydroTurbineKind_ENUM rop);
		operator HydroTurbineKind_ENUM() const;

		HydroTurbineKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, HydroTurbineKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const HydroTurbineKind& obj);
	};
}
#endif
