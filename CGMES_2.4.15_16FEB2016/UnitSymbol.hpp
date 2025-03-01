#ifndef UnitSymbol_H
#define UnitSymbol_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief The units defined for usage in the CIM. */
	class UnitSymbol
	{
	public:
		enum UnitSymbol_ENUM
		{
			/** Apparent power in volt ampere. */
			VA,
			/** Active power in watt. */
			W,
			/** Reactive power in volt ampere reactive. */
			VAr,
			/** Apparent energy in volt ampere hours. */
			VAh,
			/** Real energy in what hours. */
			Wh,
			/** Reactive energy in volt ampere reactive hours. */
			VArh,
			/** Voltage in volt. */
			V,
			/** Resistance in ohm. */
			ohm,
			/** Current in ampere. */
			A,
			/** Capacitance in farad. */
			F,
			/** Inductance in henry. */
			H,
			/** Relative temperature in degrees Celsius. In the SI unit system the symbol is [SYMBOL REMOVED]C. Electric charge is measured in coulomb that has the unit symbol C. To distinguish degree Celsius form coulomb the symbol used in the UML is degC. Reason for not using [SYMBOL REMOVED]C is the special character [SYMBOL REMOVED] is difficult to manage in software. */
			degC,
			/** Time in seconds. */
			s,
			/** Time in minutes. */
			min,
			/** Time in hours. */
			h,
			/** Plane angle in degrees. */
			deg,
			/** Plane angle in radians. */
			rad,
			/** Energy in joule. */
			J,
			/** Force in newton. */
			N,
			/** Conductance in siemens. */
			S,
			/** Dimension less quantity, e.g. count, per unit, etc. */
			none,
			/** Frequency in hertz. */
			Hz,
			/** Mass in gram. */
			g,
			/** Pressure in pascal (n/m2). */
			Pa,
			/** Length in meter. */
			m,
			/** Area in square meters. */
			m2,
			/** Volume in cubic meters. */
			m3,
		};

		UnitSymbol() : value(), initialized(false) {}
		UnitSymbol(UnitSymbol_ENUM value) : value(value), initialized(true) {}

		UnitSymbol& operator=(UnitSymbol_ENUM rop);
		operator UnitSymbol_ENUM() const;

		UnitSymbol_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, UnitSymbol& rop);
		friend std::ostream& operator<<(std::ostream& os, const UnitSymbol& obj);
	};
}
#endif
