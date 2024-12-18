#ifndef RegulatingControlModeKind_H
#define RegulatingControlModeKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	The kind of regulation model.   For example regulating voltage, reactive power, active power, etc.
	*/
	class RegulatingControlModeKind
	{
	public:
		enum RegulatingControlModeKind_ENUM
		{
			/**
			 * Voltage is specified.
			 */
			voltage,
			/**
			 * Active power is specified.
			 */
			activePower,
			/**
			 * Reactive power is specified.
			 */
			reactivePower,
			/**
			 * Current flow is specified.
			 */
			currentFlow,
			/**
			 * Admittance is specified.
			 */
			admittance,
			/**
			 * Control switches on/off by time of day. The times may change on the weekend, or in different seasons.
			 */
			timeScheduled,
			/**
			 * Control switches on/off based on the local temperature (i.e., a thermostat).
			 */
			temperature,
			/**
			 * Power factor is specified.
			 */
			powerFactor,
		};

		RegulatingControlModeKind() : value(), initialized(false) {}
		RegulatingControlModeKind(RegulatingControlModeKind_ENUM value) : value(value), initialized(true) {}

		RegulatingControlModeKind& operator=(RegulatingControlModeKind_ENUM rop);
		operator RegulatingControlModeKind_ENUM() const;

		RegulatingControlModeKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, RegulatingControlModeKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const RegulatingControlModeKind& obj);
	};
}
#endif
