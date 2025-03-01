#ifndef UnitMultiplier_H
#define UnitMultiplier_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief The unit multipliers defined for the CIM. */
	class UnitMultiplier
	{
	public:
		enum UnitMultiplier_ENUM
		{
			/** Pico 10**-12. */
			p,
			/** Nano 10**-9. */
			n,
			/** Micro 10**-6. */
			micro,
			/** Milli 10**-3. */
			m,
			/** Centi 10**-2. */
			c,
			/** Deci 10**-1. */
			d,
			/** Kilo 10**3. */
			k,
			/** Mega 10**6. */
			M,
			/** Giga 10**9. */
			G,
			/** Tera 10**12. */
			T,
			/** No multiplier or equivalently multiply by 1. */
			none,
		};

		UnitMultiplier() : value(), initialized(false) {}
		UnitMultiplier(UnitMultiplier_ENUM value) : value(value), initialized(true) {}

		UnitMultiplier& operator=(UnitMultiplier_ENUM rop);
		operator UnitMultiplier_ENUM() const;

		UnitMultiplier_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, UnitMultiplier& rop);
		friend std::ostream& operator<<(std::ostream& os, const UnitMultiplier& obj);
	};
}
#endif
