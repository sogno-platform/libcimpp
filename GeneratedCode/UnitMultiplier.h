///////////////////////////////////////////////////////////
//  UnitMultiplier.h
//  Implementation of the Class UnitMultiplier
//  Created on:      27-Nov-2015 11:08:26
///////////////////////////////////////////////////////////

#if !defined(EA_C9488DA2_FA90_4e0e_A8F9_3BFB5687057B__INCLUDED_)
#define EA_C9488DA2_FA90_4e0e_A8F9_3BFB5687057B__INCLUDED_

/**
 * The unit multipliers defined for the CIM.  When applied to unit symbols that
 * already contain a multiplier, both multipliers are used. For example, to
 * exchange kilograms using unit symbol of kg, one uses the "none" multiplier, to
 * exchange metric ton (Mg), one uses the "k" multiplier.
 */
enum class UnitMultiplier
{
	/**
	 * yocto 10**-24.
	 */
	y = -24,
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
#endif // !defined(EA_C9488DA2_FA90_4e0e_A8F9_3BFB5687057B__INCLUDED_)
