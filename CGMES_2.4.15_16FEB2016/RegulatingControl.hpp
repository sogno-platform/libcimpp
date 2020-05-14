#ifndef RegulatingControl_H
#define RegulatingControl_H

#include "PowerSystemResource.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "RegulatingControlModeKind.hpp"
#include "Boolean.hpp"
#include "Simple_Float.hpp"
#include "UnitMultiplier.hpp"

namespace CIMPP {


class RegulationSchedule;
class Terminal;
class RegulatingCondEq;
	/*
	Specifies a set of equipment that works together to control a power system quantity such as voltage or flow.  Remote bus voltage control is possible by specifying the controlled terminal located at some place remote from the controlling equipment. In case multiple equipment, possibly of different types, control same terminal there must be only one RegulatingControl at that terminal. The most specific subtype of RegulatingControl shall be used in case such equipment participate in the control, e.g. TapChangerControl for tap changers. For flow control  load sign convention is used, i.e. positive sign means flow out from a TopologicalNode (bus) into the conducting equipment.
	*/
	class RegulatingControl: public PowerSystemResource
	{

	public:
					CIMPP::RegulatingControlModeKind mode; 	/* The regulating control mode presently available.  This specification allows for determining the kind of regulation without need for obtaining the units from a schedule. Default: 0 */
					std::list<CIMPP::RegulationSchedule*> RegulationSchedule; 	/* Schedule for this Regulating regulating control. Default: 0 */
					CIMPP::Terminal* Terminal; 	/* The controls regulating this terminal. Default: 0 */
					std::list<CIMPP::RegulatingCondEq*> RegulatingCondEq; 	/* The equipment that participates in this regulating control scheme. Default: 0 */
					CIMPP::Boolean discrete; 	/* The regulation is performed in a discrete mode. This applies to equipment with discrete controls, e.g. tap changers and shunt compensators. Default: false */
					CIMPP::Boolean enabled; 	/* The flag tells if regulation is enabled. Default: false */
					CIMPP::Simple_Float targetDeadband; 	/* This is a deadband used with discrete control to avoid excessive update of controls like tap changers and shunt compensator banks while regulating. The units of those appropriate for the mode. Default: nullptr */
					CIMPP::Simple_Float targetValue; 	/* The target value specified for case input.   This value can be used for the target value without the use of schedules. The value has the units appropriate to the mode attribute. Default: nullptr */
					CIMPP::UnitMultiplier targetValueUnitMultiplier; 	/* Specify the multiplier for used for the targetValue. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		RegulatingControl();
		virtual ~RegulatingControl();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* RegulatingControl_factory();
}
#endif
