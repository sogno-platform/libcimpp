#ifndef RemoteSignalKind_H
#define RemoteSignalKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Type of input signal coming from remote bus.
	*/
	class RemoteSignalKind
	{
	public:
		enum RemoteSignalKind_ENUM
		{
			/**
			 * Input is voltage frequency from remote terminal bus.
			 */
			remoteBusVoltageFrequency,
			/**
			 * Input is voltage frequency deviation from remote terminal bus.
			 */
			remoteBusVoltageFrequencyDeviation,
			/**
			 * Input is frequency from remote terminal bus.
			 */
			remoteBusFrequency,
			/**
			 * Input is frequency deviation from remote terminal bus.
			 */
			remoteBusFrequencyDeviation,
			/**
			 * Input is voltage amplitude from remote terminal bus.
			 */
			remoteBusVoltageAmplitude,
			/**
			 * Input is voltage from remote terminal bus.
			 */
			remoteBusVoltage,
			/**
			 * Input is branch current amplitude from remote terminal bus.
			 */
			remoteBranchCurrentAmplitude,
			/**
			 * Input is branch current amplitude derivative from remote terminal bus.
			 */
			remoteBusVoltageAmplitudeDerivative,
			/**
			 * Input is PU voltage derivative from remote terminal bus.
			 */
			remotePuBusVoltageDerivative,
		};

		RemoteSignalKind() : value(), initialized(false) {}
		RemoteSignalKind(RemoteSignalKind_ENUM value) : value(value), initialized(true) {}

		RemoteSignalKind& operator=(RemoteSignalKind_ENUM rop);
		operator RemoteSignalKind_ENUM() const;

		RemoteSignalKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, RemoteSignalKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const RemoteSignalKind& obj);
	};
}
#endif
