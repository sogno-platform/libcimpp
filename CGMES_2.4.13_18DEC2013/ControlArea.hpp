#ifndef ControlArea_H
#define ControlArea_H

#include "PowerSystemResource.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "ActivePower.hpp"
#include "ControlAreaTypeKind.hpp"

namespace CIMPP {


class EnergyArea;
class TieFlow;
class ControlAreaGeneratingUnit;
	/*
	A is a grouping of  and/or loads and a cutset of tie lines (as ) which may be used for a variety of purposes including automatic generation control, powerflow solution area interchange control specification, and input to load forecasting.   Note that any number of overlapping control area specifications can be superimposed on the physical model.
	*/
	class ControlArea: public PowerSystemResource
	{

	public:
					CIMPP::ActivePower netInterchange; 	/* The specified positive net interchange into the control area, i.e. positive sign means flow in to the area. Default: nullptr */
					CIMPP::ActivePower pTolerance; 	/* Active power net interchange tolerance Default: nullptr */
					CIMPP::EnergyArea* EnergyArea; 	/* The energy area that is forecast from this control area specification. Default: 0 */
					CIMPP::ControlAreaTypeKind type; 	/* The type of control area definition used to determine if this is used for automatic generation control, for planning interchange control, or other purposes. Default: 0 */
					std::list<CIMPP::TieFlow*> TieFlow; 	/* The tie flows associated with the control area. Default: 0 */
					std::list<CIMPP::ControlAreaGeneratingUnit*> ControlAreaGeneratingUnit; 	/* The generating unit specificaitons for the control area. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		ControlArea();
		virtual ~ControlArea();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ControlArea_factory();
}
#endif
