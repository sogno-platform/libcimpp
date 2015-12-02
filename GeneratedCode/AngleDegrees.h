///////////////////////////////////////////////////////////
//  AngleDegrees.h
//  Implementation of the Class AngleDegrees
//  Created on:      27-Nov-2015 11:05:22
///////////////////////////////////////////////////////////

#if !defined(EA_D2BF656A_537E_448c_BDD2_76F91709DAF9__INCLUDED_)
#define EA_D2BF656A_537E_448c_BDD2_76F91709DAF9__INCLUDED_

#include "UnitMultiplier.h"
#include "UnitSymbol.h"
#include "Float.h"

/**
 * Measurement of angle in degrees.
 */
class AngleDegrees
{

public:
	AngleDegrees();
	static const UnitMultiplier multiplier;
	static const UnitSymbol unit;
	Float value;

};
#endif // !defined(EA_D2BF656A_537E_448c_BDD2_76F91709DAF9__INCLUDED_)
