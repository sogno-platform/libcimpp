#ifndef PetersenCoil_H
#define PetersenCoil_H

#include "EarthFaultCompensator.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PetersenCoilModeKind.hpp"
#include "Voltage.hpp"
#include "CurrentFlow.hpp"
#include "Reactance.hpp"

namespace CIMPP {


	/*
	A tunable impedance device normally used to offset line charging during single line faults in an ungrounded section of network.
	*/
	class PetersenCoil: public EarthFaultCompensator
	{

	public:
					CIMPP::PetersenCoilModeKind mode; 	/* The mode of operation of the Petersen coil. Default: 0 */
					CIMPP::Voltage nominalU; 	/* The nominal voltage for which the coil is designed. Default: nullptr */
					CIMPP::CurrentFlow offsetCurrent; 	/* The offset current that the Petersen coil controller is operating from the resonant point.  This is normally a fixed amount for which the controller is configured and could be positive or negative.  Typically 0 to 60 Amperes depending on voltage and resonance conditions. Default: nullptr */
					CIMPP::CurrentFlow positionCurrent; 	/* The control current used to control the Petersen coil also known as the position current.  Typically in the range of 20-200mA. Default: nullptr */
					CIMPP::Reactance xGroundMax; 	/* The maximum reactance. Default: nullptr */
					CIMPP::Reactance xGroundMin; 	/* The minimum reactance. Default: nullptr */
					CIMPP::Reactance xGroundNominal; 	/* The nominal reactance.  This is the operating point (normally over compensation) that is defined based on the resonance point in the healthy network condition.  The impedance is calculated based on nominal voltage divided by position current. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		PetersenCoil();
		virtual ~PetersenCoil();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PetersenCoil_factory();
}
#endif
