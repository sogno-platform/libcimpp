#ifndef ShortCircuitRotorKind_H
#define ShortCircuitRotorKind_H

namespace CIMPP {
	/*
	Type of rotor, used by short circuit applications.
	*/
	enum class ShortCircuitRotorKind
	{
		/**
		 * Salient pole 1 in the IEC 60909
		 */
		salientPole1,
		/**
		 * Salient pole 2 in IEC 60909
		 */
		salientPole2,
		/**
		 * Turbo Series 1 in the IEC 60909
		 */
		turboSeries1,
		/**
		 * Turbo series 2 in IEC 60909
		 */
		turboSeries2,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::ShortCircuitRotorKind& rop);
}
#endif
