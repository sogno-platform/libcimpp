///////////////////////////////////////////////////////////
//  PSRType.h
//  Implementation of the Class PSRType
//  Created on:      27-Nov-2015 11:07:42
///////////////////////////////////////////////////////////

#if !defined(EA_71F4B65C_7177_42f3_983F_6DA449566608__INCLUDED_)
#define EA_71F4B65C_7177_42f3_983F_6DA449566608__INCLUDED_

#include "IdentifiedObject.h"

/**
 * Classifying instances of the same class, e.g. overhead and underground
 * ACLineSegments. This classification mechanism is intended to provide
 * flexibility outside the scope of this standard, i.e. provide customisation that
 * is non standard.
 */
class PSRType : public IdentifiedObject
{

public:
	PSRType();

};
#endif // !defined(EA_71F4B65C_7177_42f3_983F_6DA449566608__INCLUDED_)
