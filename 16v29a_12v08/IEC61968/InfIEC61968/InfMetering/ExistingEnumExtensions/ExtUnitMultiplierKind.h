///////////////////////////////////////////////////////////
//  ExtUnitMultiplierKind.h
//  Implementation of the Class ExtUnitMultiplierKind
///////////////////////////////////////////////////////////

#ifndef EXTUNITMULTIPLIERKIND_H
#define EXTUNITMULTIPLIERKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfMetering
		{
			namespace ExistingEnumExtensions
			{
				/**
				 * The unit multipliers defined for the CIM.
				 */
				enum class ExtUnitMultiplierKind
				{
					/**
					 * Pico 10**-12
					 */
					p = -12,
					/**
					 * Nano 10**-9
					 */
					n = -9,
					/**
					 * Micro 10**-6
					 */
					micro = -6,
					/**
					 * Milli 10**-3
					 */
					m = -3,
					/**
					 * Centi 10**-2
					 */
					c = -2,
					/**
					 * Deci 10**-1
					 */
					d = -1,
					/**
					 * Kilo 10**3
					 */
					k = 3,
					/**
					 * Mega 10**6
					 */
					M = 6,
					/**
					 * Giga 10**9
					 */
					G = 9,
					/**
					 * Tera 10**12
					 */
					T = 12,
					/**
					 * Not Applicable or "x1"
					 */
					none = 0,
					/**
					 * deca 10**1
					 */
					da = 1,
					/**
					 * hecto 10**2
					 */
					h = 2
				};

			}

		}

	}

}
#endif // EXTUNITMULTIPLIERKIND_H
