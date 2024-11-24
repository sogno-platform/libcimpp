#ifndef SynchronousMachineModelKind_H
#define SynchronousMachineModelKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Type of synchronous machine model used in dynamic simulation applications.
	*/
	class SynchronousMachineModelKind
	{
	public:
		enum SynchronousMachineModelKind_ENUM
		{
			/**
			 * Subtransient synchronous machine model.
			 */
			subtransient,
			/**
			 * WECC type F variant of subtransient synchronous machine model.
			 */
			subtransientTypeF,
			/**
			 * WECC type J variant of subtransient synchronous machine model.
			 */
			subtransientTypeJ,
			/**
			 * Simplified version of subtransient synchronous machine model where magnetic coupling between the direct- and quadrature- axes is ignored.
			 */
			subtransientSimplified,
			/**
			 * Simplified version of a subtransient synchronous machine model with no damper circuit on the direct-axis.
			 */
			subtransientSimplifiedDirectAxis,
		};

		SynchronousMachineModelKind() : value(), initialized(false) {}
		SynchronousMachineModelKind(SynchronousMachineModelKind_ENUM value) : value(value), initialized(true) {}

		SynchronousMachineModelKind& operator=(SynchronousMachineModelKind_ENUM rop);
		operator SynchronousMachineModelKind_ENUM() const;

		SynchronousMachineModelKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, SynchronousMachineModelKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const SynchronousMachineModelKind& obj);
	};
}
#endif
