///////////////////////////////////////////////////////////
//  RemoteSignalKind.h
//  Implementation of the Class RemoteSignalKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef REMOTESIGNALKIND_H
#define REMOTESIGNALKIND_H

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardInterconnections
		{
			/**
			 * Type of input signal coming from remote bus.
			 */
			enum class RemoteSignalKind
			{
				/**
				 * Input is voltage frequency from remote terminal bus.
				 */
				 _undef = -1, 	remoteBusVoltageFrequency,
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
				remotePuBusVoltageDerivative
			};

		}

	}

}
#endif // REMOTESIGNALKIND_H
