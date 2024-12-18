#ifndef Switch_H
#define Switch_H

#include "ConductingEquipment.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Boolean.hpp"
#include "CurrentFlow.hpp"

namespace CIMPP {


class SwitchSchedule;
	/*
	A generic device designed to close, or open, or both, one or more electric circuits.  All switches are two terminal devices including grounding switches.
	*/
	class Switch: public ConductingEquipment
	{

	public:
					std::list<CIMPP::SwitchSchedule*> SwitchSchedules; 	/* A SwitchSchedule is associated with a Switch. Default: 0 */
					CIMPP::Boolean normalOpen; 	/* The attribute is used in cases when no Measurement for the status value is present. If the Switch has a status measurement the Discrete.normalValue is expected to match with the Switch.normalOpen. Default: false */
					CIMPP::Boolean open; 	/* The attribute tells if the switch is considered open when used as input to topology processing. Default: false */
					CIMPP::CurrentFlow ratedCurrent; 	/* The maximum continuous current carrying capacity in amps governed by the device material and construction. Default: nullptr */
					CIMPP::Boolean retained; 	/* Branch is retained in a bus branch model.  The flow through retained switches will normally be calculated in power flow. Default: false */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		Switch();
		virtual ~Switch();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* Switch_factory();
}
#endif
