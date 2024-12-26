#ifndef AsynchronousMachineEquivalentCircuit_H
#define AsynchronousMachineEquivalentCircuit_H

#include "AsynchronousMachineDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"

namespace CIMPP {


	/*
	The electrical equations of all variations of the asynchronous model are based on the AsynchronousEquivalentCircuit diagram for the direct and quadrature axes, with two equivalent rotor windings in each axis.      =  +   =  +  *  / ( + )  =  +  * *  / ( *  +  *  +  * )  = ( + ) / ( * )  = ( *  +  *  +  * ) / ( *  * (+ ) Same equations using CIM attributes from AsynchronousMachineTimeConstantReactance class on left of = sign and AsynchronousMachineEquivalentCircuit class on right (except as noted): xs = xm + RotatingMachineDynamics.statorLeakageReactance xp = RotatingMachineDynamics.statorLeakageReactance + xm * xlr1 / (xm + xlr1) xpp = RotatingMachineDynamics.statorLeakageReactance + xm * xlr1* xlr2 / (xm * xlr1 + xm * xlr2 + xlr1 * xlr2) tpo = (xm + xlr1) / (2*pi*nominal frequency * rr1) tppo = (xm * xlr1 + xm * xlr2 + xlr1 * xlr2) / (2*pi*nominal frequency * rr2 * (xm + xlr1).
	*/
	class AsynchronousMachineEquivalentCircuit: public AsynchronousMachineDynamics
	{

	public:
					CIMPP::PU rr1; 	/* Damper 1 winding resistance. Default: nullptr */
					CIMPP::PU rr2; 	/* Damper 2 winding resistance. Default: nullptr */
					CIMPP::PU xlr1; 	/* Damper 1 winding leakage reactance. Default: nullptr */
					CIMPP::PU xlr2; 	/* Damper 2 winding leakage reactance. Default: nullptr */
					CIMPP::PU xm; 	/* Magnetizing reactance. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		AsynchronousMachineEquivalentCircuit();
		virtual ~AsynchronousMachineEquivalentCircuit();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* AsynchronousMachineEquivalentCircuit_factory();
}
#endif
