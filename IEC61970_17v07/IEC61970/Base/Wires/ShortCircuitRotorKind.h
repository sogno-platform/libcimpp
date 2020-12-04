///////////////////////////////////////////////////////////
//  ShortCircuitRotorKind.h
//  Implementation of the Class ShortCircuitRotorKind
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef SHORTCIRCUITROTORKIND_H
#define SHORTCIRCUITROTORKIND_H

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
				 _undef = -1, 	salientPole1,
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
#endif // SHORTCIRCUITROTORKIND_H
