///////////////////////////////////////////////////////////
//  ShortCircuitRotorKind.h
//  Implementation of the Class ShortCircuitRotorKind
//  Created on:      28-Jan-2016 12:46:40
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#if !defined(EA_12363359_4783_4a33_A919_53D014B17AC1__INCLUDED_)
#define EA_12363359_4783_4a33_A919_53D014B17AC1__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Type of rotor, used by short circuit applications.
			 */
			enum class ShortCircuitRotorKind
			{
				/**
				 * Salient pole 1 in the IEC 60909
				 */
				salientPole1,
				/**
				 * Salient pole 2 in IEC 60909
				 */
				salientPole2,
				/**
				 * Turbo Series 1 in the IEC 60909
				 */
				turboSeries1,
				/**
				 * Turbo series 2 in IEC 60909
				 */
				turboSeries2
			};

		}

	}

}
#endif // !defined(EA_12363359_4783_4a33_A919_53D014B17AC1__INCLUDED_)
