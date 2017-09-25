///////////////////////////////////////////////////////////
//  UnitMultiplier.h
//  Implementation of the Class UnitMultiplier
///////////////////////////////////////////////////////////

#ifndef UNITMULTIPLIER_H
#define UNITMULTIPLIER_H

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * The unit multipliers defined for the CIM.
			 */
			enum class UnitMultiplier
			{
				/**
				 * Pico 10**-12.
				 */
				p,
				/**
				 * Nano 10**-9.
				 */
				n,
				/**
				 * Micro 10**-6.
				 */
				micro,
				/**
				 * Milli 10**-3.
				 */
				m,
				/**
				 * Centi 10**-2.
				 */
				c,
				/**
				 * Deci 10**-1.
				 */
				d,
				/**
				 * Kilo 10**3.
				 */
				k,
				/**
				 * Mega 10**6.
				 */
				M,
				/**
				 * Giga 10**9.
				 */
				G,
				/**
				 * Tera 10**12.
				 */
				T,
				/**
				 * No multiplier or equivalently multiply by 1.
				 */
				none
			};

		}

	}

}
#endif // UNITMULTIPLIER_H
