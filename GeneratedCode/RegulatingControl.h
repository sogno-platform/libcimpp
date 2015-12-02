///////////////////////////////////////////////////////////
//  RegulatingControl.h
//  Implementation of the Class RegulatingControl
//  Created on:      27-Nov-2015 11:07:51
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_9A605764_1562_496a_8FB9_398839128554__INCLUDED_)
#define EA_9A605764_1562_496a_8FB9_398839128554__INCLUDED_

#include "Boolean.h"
#include "RegulatingControlModeKind.h"
#include "PhaseCode.h"
#include "Float.h"
#include "UnitMultiplier.h"
#include "PowerSystemResource.h"

/**
 * Specifies a set of equipment that works together to control a power system
 * quantity such as voltage or flow.
 * Remote bus voltage control is possible by specifying the controlled terminal
 * located at some place remote from the controlling equipment.
 * In case multiple equipment, possibly of different types, control same terminal
 * there must be only one RegulatingControl at that terminal. The most specific
 * subtype of RegulatingControl shall be used in case such equipment participate
 * in the control, e.g. TapChangerControl for tap changers.
 * For flow control  load sign convention is used, i.e. positive sign means flow
 * out from a TopologicalNode (bus) into the conducting equipment.
 */
class RegulatingControl : public PowerSystemResource
{

public:
	RegulatingControl();
	/**
	 * The regulation is performed in a discrete mode. This applies to equipment with
	 * discrete controls, e.g. tap changers and shunt compensators.
	 */
	Boolean discrete;
	/**
	 * The flag tells if regulation is enabled.
	 */
	Boolean enabled;
	/**
	 * The regulating control mode presently available.  This specification allows for
	 * determining the kind of regulation without need for obtaining the units from a
	 * schedule.
	 */
	RegulatingControlModeKind mode;
	/**
	 * Phase voltage controlling this regulator, measured at regulator location.
	 */
	PhaseCode monitoredPhase;
	/**
	 * This is a deadband used with discrete control to avoid excessive update of
	 * controls like tap changers and shunt compensator banks while regulating.
	 * The units of those appropriate for the mode.
	 */
	Float targetDeadband;
	/**
	 * The target value specified for case input.   This value can be used for the
	 * target value without the use of schedules. The value has the units appropriate
	 * to the mode attribute.
	 */
	Float targetValue;
	/**
	 * Specify the multiplier for used for the targetValue.
	 */
	UnitMultiplier targetValueUnitMultiplier;

};
#endif // !defined(EA_9A605764_1562_496a_8FB9_398839128554__INCLUDED_)
