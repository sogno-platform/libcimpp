///////////////////////////////////////////////////////////
//  PowerSystemResource.h
//  Implementation of the Class PowerSystemResource
//  Created on:      27-Nov-2015 11:07:38
///////////////////////////////////////////////////////////

#if !defined(EA_09A224FC_243A_4ffb_A06B_EC133CD3F1AD__INCLUDED_)
#define EA_09A224FC_243A_4ffb_A06B_EC133CD3F1AD__INCLUDED_

#include "Control.h"
#include "Measurement.h"
#include "PSRType.h"
#include "IdentifiedObject.h"

/**
 * A power system resource can be an item of equipment such as a switch, an
 * equipment container containing many individual items of equipment such as a
 * substation, or an organisational entity such as sub-control area. Power system
 * resources can have measurements associated.
 */
class PowerSystemResource : public IdentifiedObject
{

public:
	PowerSystemResource();
	/**
	 * The controller outputs used to actually govern a regulating device, e.g. the
	 * magnetization of a synchronous machine or capacitor bank breaker actuator.
	 */
	std::vector<std::shared_ptr<Control>> Controls;
	/**
	 * The measurements associated with this power system resource.
	 */
	std::vector<std::shared_ptr<Measurement>> Measurements;
	/**
	 * Custom classification for this power system resource.
	 */
	std::shared_ptr<PSRType> PSRType;

};
#endif // !defined(EA_09A224FC_243A_4ffb_A06B_EC133CD3F1AD__INCLUDED_)
