///////////////////////////////////////////////////////////
//  Terminal.h
//  Implementation of the Class Terminal
//  Created on:      27-Nov-2015 11:08:18
///////////////////////////////////////////////////////////

#if !defined(EA_70D9BD26_D997_4f77_BAD1_22D9B111CC4E__INCLUDED_)
#define EA_70D9BD26_D997_4f77_BAD1_22D9B111CC4E__INCLUDED_

#include "PhaseCode.h"
#include "ConnectivityNode.h"
#include "ConductingEquipment.h"
#include "RegulatingControl.h"
#include "ACDCTerminal.h"

/**
 * An AC electrical connection point to a piece of conducting equipment. Terminals
 * are connected at physical connection points called connectivity nodes.
 */
class Terminal : public ACDCTerminal
{

public:
	Terminal();
	/**
	 * Represents the normal network phasing condition.
	 * If the attribute is missing three phases (ABC or ABCN) shall be assumed.
	 */
	PhaseCode phases;
	/**
	 * The connectivity node to which this terminal connects with zero impedance.
	 */
	std::shared_ptr<ConnectivityNode> ConnectivityNode;
	/**
	 * The conducting equipment of the terminal.  Conducting equipment have  terminals
	 * that may be connected to other conducting equipment terminals via connectivity
	 * nodes or topological nodes.
	 */
	std::shared_ptr<ConductingEquipment> ConductingEquipment;
	/**
	 * The controls regulating this terminal.
	 */
	std::vector<std::shared_ptr<RegulatingControl>> RegulatingControl;

};
#endif // !defined(EA_70D9BD26_D997_4f77_BAD1_22D9B111CC4E__INCLUDED_)
