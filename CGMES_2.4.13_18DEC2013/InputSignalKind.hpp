#ifndef InputSignalKind_H
#define InputSignalKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Input signal type.  In Dynamics modelling, commonly represented by j parameter. */
	class InputSignalKind
	{
	public:
		enum InputSignalKind_ENUM
		{
			/** Input signal is rotor or shaft speed (angular frequency). */
			rotorSpeed,
			/** Input signal is rotor or shaft angular frequency deviation. */
			rotorAngularFrequencyDeviation,
			/** Input signal is bus voltage fr */
			busFrequency,
			/** Input signal is deviation of bus voltage frequ */
			busFrequencyDeviation,
			/** Input signal is generator electrical power on rated S. */
			generatorElectricalPower,
			/** Input signal is generating accelerating power. */
			generatorAcceleratingPower,
			/** Input signal */
			busVoltage,
			/** Input signal is derivative of bus voltag */
			busVoltageDerivative,
			/** Input signal is amplitude of remote branch current. */
			branchCurrent,
			/** Input signal is generator field current. */
			fieldCurrent,
		};

		InputSignalKind() : value(), initialized(false) {}
		InputSignalKind(InputSignalKind_ENUM value) : value(value), initialized(true) {}

		InputSignalKind& operator=(InputSignalKind_ENUM rop);
		operator InputSignalKind_ENUM() const;

		InputSignalKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, InputSignalKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const InputSignalKind& obj);
	};
}
#endif
