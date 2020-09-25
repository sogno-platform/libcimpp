#ifndef RotorKind_H
#define RotorKind_H

namespace CIMPP {
	/*
	Type of rotor on physical machine.
	*/
	enum class RotorKind
	{
		/**
		 * Round rotor type of synchronous machine.
		 */
		roundRotor,
		/**
		 * Salient pole type of synchronous machine.
		 */
		salientPole,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::RotorKind& rop);
}
#endif
