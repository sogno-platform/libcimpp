///////////////////////////////////////////////////////////
//  Control.h
//  Implementation of the Class Control
//  Created on:      27-Nov-2015 11:05:47
///////////////////////////////////////////////////////////

#if !defined(EA_41D0A354_C0A5_47fb_8920_343AF70C1EF6__INCLUDED_)
#define EA_41D0A354_C0A5_47fb_8920_343AF70C1EF6__INCLUDED_

#include "String.h"
#include "Boolean.h"
#include "DateTime.h"
#include "UnitMultiplier.h"
#include "UnitSymbol.h"
#include "IdentifiedObject.h"

/**
 * Control is used for supervisory/device control. It represents control outputs
 * that are used to change the state in a process, e.g. close or open breaker, a
 * set point value or a raise lower command.
 */
class Control : public IdentifiedObject
{

public:
	Control();
	/**
	 * Specifies the type of Control, e.g. BreakerOn/Off, GeneratorVoltageSetPoint,
	 * TieLineFlow etc. The ControlType.name shall be unique among all specified types
	 * and describe the type.
	 */
	String controlType;
	/**
	 * Indicates that a client is currently sending control commands that has not
	 * completed.
	 */
	Boolean operationInProgress;
	/**
	 * The last time a control output was sent.
	 */
	DateTime timeStamp;
	/**
	 * The unit multiplier of the controlled quantity.
	 */
	UnitMultiplier unitMultiplier;
	/**
	 * The unit of measure of the controlled quantity.
	 */
	UnitSymbol unitSymbol;

};
#endif // !defined(EA_41D0A354_C0A5_47fb_8920_343AF70C1EF6__INCLUDED_)
