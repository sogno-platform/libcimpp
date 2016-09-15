///////////////////////////////////////////////////////////
//  VsPpccControlKind.h
//  Implementation of the Class VsPpccControlKind
//  Created on:      28-Jan-2016 12:47:42
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_AB25ED5E_E111_44e8_88BC_B2FAC7D67791__INCLUDED_)
#define EA_AB25ED5E_E111_44e8_88BC_B2FAC7D67791__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * Types applicable to the control of real power and/or DC voltage by voltage
			 * source converter.
			 */
			enum class VsPpccControlKind
			{
				/**
				 * Control variable (target) is real power at PCC bus.
				 */
				pPcc,
				/**
				 * Control variable (target) is DC voltage and real power at PCC bus is derived.
				 */
				udc,
				/**
				 * Control variables (targets) are both active power at point of common coupling
				 * and local DC voltage, with the droop.
				 */
				pPccAndUdcDroop,
				/**
				 * Control variables (targets) are both active power at point of common coupling
				 * and compensated DC voltage, with the droop; compensation factor is the
				 * resistance, as an approximation of the DC voltage of a common (real or virtual)
				 * node in the DC network.
				 */
				pPccAndUdcDroopWithCompensation,
				/**
				 * Control variables (targets) are both active power at point of common coupling
				 * and the pilot DC voltage, with the droop.
				 */
				pPccAndUdcDroopPilot
			};

		}

	}

}
#endif // !defined(EA_AB25ED5E_E111_44e8_88BC_B2FAC7D67791__INCLUDED_)
