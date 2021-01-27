///////////////////////////////////////////////////////////
//  FACTSDeviceKind.h
//  Implementation of the Class FACTSDeviceKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef FACTSDEVICEKIND_H
#define FACTSDEVICEKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Kind of FACTS device.
			 */
			enum class FACTSDeviceKind
			{
				/**
				 * Static VAr compensator.
				 */
				 _undef = -1, 	svc,
				/**
				 * Static synchronous compensator.
				 */
				statcom,
				/**
				 * Thyristor-controlled phase-angle regulator.
				 */
				tcpar,
				/**
				 * Thyristor-controlled series capacitor.
				 */
				tcsc,
				/**
				 * Thyristor-controlled voltage limiter.
				 */
				tcvl,
				/**
				 * Thyristor-switched braking resistor.
				 */
				tsbr,
				/**
				 * Thyristor-switched series capacitor.
				 */
				tssc,
				/**
				 * Unified power flow controller.
				 */
				upfc
			};

		}

	}

}
#endif // FACTSDEVICEKIND_H
