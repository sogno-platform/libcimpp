#ifndef InputSignalKind_H
#define InputSignalKind_H

namespace CIMPP {
	/*
	Input signal type.  In Dynamics modelling, commonly represented by j parameter.
	*/
	enum class InputSignalKind
	{
		/**
		 * Input signal is rotor or shaft speed (angular frequency).
		 */
		rotorSpeed,
		/**
		 * Input signal is rotor or shaft angular frequency deviation.
		 */
		rotorAngularFrequencyDeviation,
		/**
		 * Input signal is bus voltage fr
		 */
		busFrequency,
		/**
		 * Input signal is deviation of bus voltage frequ
		 */
		busFrequencyDeviation,
		/**
		 * Input signal is generator electrical power on rated S.
		 */
		generatorElectricalPower,
		/**
		 * Input signal is generating accelerating power.
		 */
		generatorAcceleratingPower,
		/**
		 * Input signal
		 */
		busVoltage,
		/**
		 * Input signal is derivative of bus voltag
		 */
		busVoltageDerivative,
		/**
		 * Input signal is amplitude of remote branch current.
		 */
		branchCurrent,
		/**
		 * Input signal is generator field current.
		 */
		fieldCurrent,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::InputSignalKind& rop);
}
#endif
