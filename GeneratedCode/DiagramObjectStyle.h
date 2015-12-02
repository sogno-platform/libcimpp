///////////////////////////////////////////////////////////
//  DiagramObjectStyle.h
//  Implementation of the Class DiagramObjectStyle
//  Created on:      27-Nov-2015 11:06:13
//  Original author: mcmorran
///////////////////////////////////////////////////////////

#if !defined(EA_389F38C1_8D49_494a_9F0A_F993465160E8__INCLUDED_)
#define EA_389F38C1_8D49_494a_9F0A_F993465160E8__INCLUDED_

#include "IdentifiedObject.h"

/**
 * A reference to a style used by the originating system for a diagram object.  A
 * diagram object style describes information such as line thickness, shape such
 * as circle or rectangle etc, and color.
 */
class DiagramObjectStyle : public IdentifiedObject
{

public:
	DiagramObjectStyle();

};
#endif // !defined(EA_389F38C1_8D49_494a_9F0A_F993465160E8__INCLUDED_)
