///////////////////////////////////////////////////////////
//  Equipment.h
//  Implementation of the Class Equipment
//  Created on:      27-Nov-2015 11:06:23
///////////////////////////////////////////////////////////

#if !defined(EA_114B9C55_5EF5_4f05_B847_38A3D85E020C__INCLUDED_)
#define EA_114B9C55_5EF5_4f05_B847_38A3D85E020C__INCLUDED_

#include "Boolean.h"
// #include "LimitDependency.java" NOTE: not in Base Package
// #include "WeatherStation.java" NOTE: not in Base Package
#include "PowerSystemResource.h"

/**
 * The parts of a power system that are physical devices, electronic or mechanical.
 */
class Equipment : public PowerSystemResource
{

public:
	Equipment();
	/**
	 * The single instance of equipment represents multiple pieces of equipment that
	 * have been modeled together as an aggregate.  Examples would be power
	 * transformers or synchronous machines operating in parallel modeled as a single
	 * aggregate power transformer or aggregate synchronous machine.  This is not to
	 * be used to indicate equipment that is part of a group of interdependent
	 * equipment produced by a network production program.  
	 */
	Boolean aggregate;
	/**
	 * If true, the equipment is in service.
	 */
	Boolean inService;
	/**
	 * If true, the equipment is normally in service.
	 */
	Boolean normallyInService;
	/**
	 * Limit dependencymodels organized under this equipment as a means for organizing
	 * the model in a tree view.
	 */
    // std::vector<LimitDependency> *LimitDependencyModel;
    // std::vector<WeatherStation> *WeatherStation;

};
#endif // !defined(EA_114B9C55_5EF5_4f05_B847_38A3D85E020C__INCLUDED_)
