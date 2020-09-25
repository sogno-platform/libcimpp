#ifndef ControlArea_H
#define ControlArea_H

#include "PowerSystemResource.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "ControlAreaTypeKind.hpp"
#include "ActivePower.hpp"

namespace CIMPP {


class EnergyArea;
class TieFlow;
class ControlAreaGeneratingUnit;
	/*
	A control areais a grouping of generating units and/or loads and a cutset of tie lines (as terminals) which may be used for a variety of purposes including automatic generation control, powerflow solution area interchange control specification, and input to load forecasting.   Note that any number of overlapping control area specifications can be superimposed on the physical model.
	*/
	class ControlArea: public PowerSystemResource
	{

	public:
					CIMPP::EnergyArea* EnergyArea; 	/* The energy area that is forecast from this control area specification. Default: 0 */
					CIMPP::ControlAreaTypeKind type; 	/* The primary type of control area definition used to determine if this is used for automatic generation control, for planning interchange control, or other purposes.   A control area specified with primary type of automatic generation control could still be forecast and used as an interchange area in power flow analysis. Default: 0 */
					std::list<CIMPP::TieFlow*> TieFlow; 	/* The tie flows associated with the control area. Default: 0 */
					std::list<CIMPP::ControlAreaGeneratingUnit*> ControlAreaGeneratingUnit; 	/* The generating unit specificaitons for the control area. Default: 0 */
					CIMPP::ActivePower netInterchange; 	/* The specified positive net interchange into the control area, i.e. positive sign means flow in to the area. Default: nullptr */
					CIMPP::ActivePower pTolerance; 	/* Active power net interchange tolerance Default: nullptr */
				
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
