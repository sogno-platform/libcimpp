#ifndef ShortCircuitRotorKind_H
#define ShortCircuitRotorKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Type of rotor, used by short circuit applications. */
	class ShortCircuitRotorKind
	{
	public:
		enum ShortCircuitRotorKind_ENUM
		{
			/** Salient pole 1 in the IEC 60909 */
			salientPole1,
			/** Salient pole 2 in IEC 60909 */
			salientPole2,
			/** Turbo Series 1 in the IEC 60909 */
			turboSeries1,
			/** Turbo series 2 in IEC 60909 */
			turboSeries2,
		};

		ShortCircuitRotorKind() : value(), initialized(false) {}
		ShortCircuitRotorKind(ShortCircuitRotorKind_ENUM value) : value(value), initialized(true) {}

		ShortCircuitRotorKind& operator=(ShortCircuitRotorKind_ENUM rop);
		operator ShortCircuitRotorKind_ENUM() const;

		ShortCircuitRotorKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, ShortCircuitRotorKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const ShortCircuitRotorKind& obj);
	};
}
#endif
