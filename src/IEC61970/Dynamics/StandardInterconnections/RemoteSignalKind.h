///////////////////////////////////////////////////////////
//  RemoteSignalKind.h
//  Implementation of the Class RemoteSignalKind
//  Created on:      28-Jan-2016 12:46:32
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_43DCFD43_92C6_4fad_843E_4E004EFBF618__INCLUDED_)
#define EA_43DCFD43_92C6_4fad_843E_4E004EFBF618__INCLUDED_

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
				remotePuBusVoltageDerivative
			};

		}

	}

}
#endif // !defined(EA_43DCFD43_92C6_4fad_843E_4E004EFBF618__INCLUDED_)
