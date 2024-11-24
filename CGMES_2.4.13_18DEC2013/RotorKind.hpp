#ifndef RotorKind_H
#define RotorKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Type of rotor on physical machine.
	*/
	class RotorKind
	{
	public:
		enum RotorKind_ENUM
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

		RotorKind() : value(), initialized(false) {}
		RotorKind(RotorKind_ENUM value) : value(value), initialized(true) {}

		RotorKind& operator=(RotorKind_ENUM rop);
		operator RotorKind_ENUM() const;

		RotorKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, RotorKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const RotorKind& obj);
	};
}
#endif
