///////////////////////////////////////////////////////////
//  ACDCTerminal.h
//  Implementation of the Class ACDCTerminal
//  Created on:      27-Nov-2015 11:05:12
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_C8229864_CC31_421b_8CFF_680E419A45B6__INCLUDED_)
#define EA_C8229864_CC31_421b_8CFF_680E419A45B6__INCLUDED_

#include "Boolean.h"
#include "Integer.h"
#include "IdentifiedObject.h"

/**
 * An electrical connection point (AC or DC) to a piece of conducting equipment.
 * Terminals are connected at physical connection points called connectivity nodes.
 */
class ACDCTerminal : public IdentifiedObject
{

public:
	ACDCTerminal();
	/**
	 * The connected status is related to a bus-branch model and the topological node
	 * to terminal relation.  True implies the terminal is connected to the related
	 * topological node and false implies it is not.
	 * In a bus-branch model, the connected status is used to tell if equipment is
	 * disconnected without having to change the connectivity described by the
	 * topological node to terminal relation. A valid case is that conducting
	 * equipment can be connected in one end and open in the other. In particular for
	 * an AC line segment, where the reactive line charging can be significant, this
	 * is a relevant case.
	 */
	Boolean connected;
	/**
	 * The orientation of the terminal connections for a multiple terminal conducting
	 * equipment.  The sequence numbering starts with 1 and additional terminals
	 * should follow in increasing order.   The first terminal is the "starting point"
	 * for a two terminal branch.
	 */
	Integer sequenceNumber;

};
#endif // !defined(EA_C8229864_CC31_421b_8CFF_680E419A45B6__INCLUDED_)
