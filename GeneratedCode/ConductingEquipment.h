///////////////////////////////////////////////////////////
//  ConductingEquipment.h
//  Implementation of the Class ConductingEquipment
//  Created on:      27-Nov-2015 11:05:40
///////////////////////////////////////////////////////////

#if !defined(EA_E58BD619_0ABF_4fba_9BD7_07EAC7139B10__INCLUDED_)
#define EA_E58BD619_0ABF_4fba_9BD7_07EAC7139B10__INCLUDED_

#include "Equipment.h"
//#include "ProtectiveActionAdjustment.java" NOTE: not in Base Package

/**
 * The parts of the AC power system that are designed to carry current or that are
 * conductively connected through terminals.
 */
class ConductingEquipment : public Equipment
{

public:
	ConductingEquipment();
	/**
	 * The operating condition to the Conducting Equipment is changed when protective
	 * action adjustment is activated. For Shunt Compensator or other conducting
	 * equipment that operates on discrete values (integer), the values given in float
	 * will be rounded. 
	 */
    //std::vector<ProtectiveActionAdjustment> *ProtectiveActionAdjustment;

};
#endif // !defined(EA_E58BD619_0ABF_4fba_9BD7_07EAC7139B10__INCLUDED_)
