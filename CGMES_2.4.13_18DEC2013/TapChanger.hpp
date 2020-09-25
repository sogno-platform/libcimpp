#ifndef TapChanger_H
#define TapChanger_H

#include "PowerSystemResource.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Boolean.hpp"
#include "Simple_Float.hpp"
#include "Integer.hpp"
#include "Voltage.hpp"

namespace CIMPP {


class TapChangerControl;
class TapSchedule;
class SvTapStep;
	/*
	Mechanism for changing transformer winding tap positions.
	*/
	class TapChanger: public PowerSystemResource
	{

	public:
					CIMPP::Boolean controlEnabled; 	/* Specifies the regulation status of the equipment.  True is regulating, false is not regulating. Default: false */
					CIMPP::Simple_Float step; 	/* Tap changer position. Starting step for a steady state solution. Non integer values are allowed to support continuous tap variables. The reasons for continuous value are to support study cases where no discrete tap changers has yet been designed, a solutions where a narrow voltage band force the tap step to oscillate or accommodate for a continuous solution as input. The attribute shall be equal or greater than lowStep and equal or less than highStep. Default: nullptr */
					CIMPP::Integer highStep; 	/* Highest possible tap step position, advance from neutral. The attribute shall be greater than lowStep. Default: 0 */
					CIMPP::Integer lowStep; 	/* Lowest possible tap step position, retard from neutral Default: 0 */
					CIMPP::Boolean ltcFlag; 	/* Specifies whether or not a TapChanger has load tap changing capabilities. Default: false */
					CIMPP::Integer neutralStep; 	/* The neutral tap step position for this winding. The attribute shall be equal or greater than lowStep and equal or less than highStep. Default: 0 */
					CIMPP::Voltage neutralU; 	/* Voltage at which the winding operates at the neutral tap setting. Default: nullptr */
					CIMPP::Integer normalStep; 	/* The tap step position used in `normal` network operation for this winding. For a `Fixed` tap changer indicates the current physical tap setting. The attribute shall be equal or greater than lowStep and equal or less than highStep. Default: 0 */
					CIMPP::TapChangerControl* TapChangerControl; 	/* The tap changers that participates in this regulating tap control scheme. Default: 0 */
					std::list<CIMPP::TapSchedule*> TapSchedules; 	/* A TapSchedule is associated with a TapChanger. Default: 0 */
					CIMPP::SvTapStep* SvTapStep; 	/* The tap step state associated with the tap changer. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		TapChanger();
		virtual ~TapChanger();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* TapChanger_factory();
}
#endif
