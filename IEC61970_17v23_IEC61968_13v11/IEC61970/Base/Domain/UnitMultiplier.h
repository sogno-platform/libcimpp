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
			 * The unit multipliers defined for the CIM.  When applied to unit symbols, the
			 * unit symbol is treated as a derived unit. Regardless of the contents of the
			 * unit symbol text, the unit symbol shall be treated as if it were a single-
			 * character unit symbol. Unit symbols should not contain multipliers, and it
			 * should be left to the multiplier to define the multiple for an entire data type.
			 * 
			 * 
			 * For example, if a unit symbol is "A2Perh" and the multiplier is "k", then the
			 * value is k(A^2/h), and the multiplier applies to the entire final value, not to
			 * any individual part of the value. This can be conceptualized by substituting a
			 * derived unit symbol for the unit type. If one imagines that the symbol "Þ"
			 * represents the derived unit "A2Perh", then applying the multiplier "k" can be
			 * conceptualized simply as "kÞ".
			 * 
			 * For example, the SI unit for mass is "kg" and not "g".  If the unit symbol is
			 * defined as "kg", then the multiplier is applied to "kg" as a whole and does not
			 * replace the "k" in front of the "g". In this case, the multiplier of "m" would
			 * be used with the unit symbol of "kg" to represent one gram.  As a text string,
			 * this violates the instructions in IEC 80000-1. However, because the unit symbol
			 * in CIM is treated as a derived unit instead of as an SI unit, it makes more
			 * sense to conceptualize the "kg" as if it were replaced by one of the proposed
			 * replacements for the SI mass symbol. If one imagines that the "kg" were
			 * replaced by a symbol "Þ", then it is easier to conceptualize the multiplier "m"
			 * as creating the proper unit "mÞ", and not the forbidden unit "mkg".
			 */
			enum class UnitMultiplier
			{
				/**
				 * yocto 10**-24.
				 */
				 _undef = -1, 	y = -24,
				/**
				 * zepto 10**-21.
				 */
				z = -21,
				/**
				 * atto 10**-18.
				 */
				a = -18,
				/**
				 * femto 10**-15.
				 */
				f = -15,
				/**
				 * Pico 10**-12.
				 */
				p = -12,
				/**
				 * Nano 10**-9.
				 */
				n = -9,
				/**
				 * Micro 10**-6.
				 */
				micro = -6,
				/**
				 * Milli 10**-3.
				 */
				m = -3,
				/**
				 * Centi 10**-2.
				 */
				c = -2,
				/**
				 * Deci 10**-1.
				 */
				d = -1,
				/**
				 * No multiplier or equivalently multiply by 1.
				 */
				none = 0,
				/**
				 * deca 10**1.
				 */
				da = 1,
				/**
				 * hecto 10**2.
				 */
				h = 2,
				/**
				 * Kilo 10**3.
				 */
				k = 3,
				/**
				 * Mega 10**6.
				 */
				M = 6,
				/**
				 * Giga 10**9.
				 */
				G = 9,
				/**
				 * Tera 10**12.
				 */
				T = 12,
				/**
				 * Peta 10**15
				 */
				P = 15,
				/**
				 * Exa 10**18.
				 */
				E = 18,
				/**
				 * Zetta 10**21
				 */
				Z = 21,
				/**
				 * Yotta 10**24
				 */
				Y = 24
			};

		}

	}

}
#endif // UNITMULTIPLIER_H
