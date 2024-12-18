#ifndef SynchronousMachineEquivalentCircuit_H
#define SynchronousMachineEquivalentCircuit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "SynchronousMachineDetailed.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"

namespace CIMPP
{

	/*
	The electrical equations for all variations of the synchronous models are based on the SynchronousEquivalentCircuit diagram for the direct and quadrature axes.    =  +   =  +  *  / ( + )  =  +  * *  / ( *  +  *  +  * )  =  +   =  +  *  / (+ )  =  +  **  / ( *  +  *  +  * )  = ( + ) / ( * )  = ( *  +  *  +  * ) / ( *  * ( + )  = ( + ) / ( * )  = ( *  +  *  +  * )/ ( *  * ( + ) Same equations using CIM attributes from SynchronousMachineTimeConstantReactance class on left of = sign and SynchronousMachineEquivalentCircuit class on right (except as noted): xDirectSync = xad + RotatingMachineDynamics.statorLeakageReactance xDirectTrans = RotatingMachineDynamics.statorLeakageReactance + xad * xfd / (xad + xfd) xDirectSubtrans = RotatingMachineDynamics.statorLeakageReactance + xad * xfd * x1d / (xad * xfd + xad * x1d + xfd * x1d) xQuadSync = xaq + RotatingMachineDynamics.statorLeakageReactance xQuadTrans = RotatingMachineDynamics.statorLeakageReactance + xaq * x1q / (xaq+ x1q) xQuadSubtrans = RotatingMachineDynamics.statorLeakageReactance + xaq * x1q* x2q / (xaq * x1q + xaq * x2q + x1q * x2q)  tpdo = (xad + xfd) / (2*pi*nominal frequency * rfd) tppdo = (xad * xfd + xad * x1d + xfd * x1d) / (2*pi*nominal frequency * r1d * (xad + xfd) tpqo = (xaq + x1q) / (2*pi*nominal frequency * r1q) tppqo = (xaq * x1q + xaq * x2q + x1q * x2q)/ (2*pi*nominal frequency * r2q * (xaq + x1q).  Are only valid for a simplified model where "Canay" reactance is zero.
	*/
	class SynchronousMachineEquivalentCircuit : public SynchronousMachineDetailed
	{
	public:
		/* constructor initialising all attributes to null */
		SynchronousMachineEquivalentCircuit();
		~SynchronousMachineEquivalentCircuit() override;

		CIMPP::PU r1d;  /* D-axis damper 1 winding resistance. Default: nullptr */
		CIMPP::PU r1q;  /* Q-axis damper 1 winding resistance. Default: nullptr */
		CIMPP::PU r2q;  /* Q-axis damper 2 winding resistance. Default: nullptr */
		CIMPP::PU rfd;  /* Field winding resistance. Default: nullptr */
		CIMPP::PU x1d;  /* D-axis damper 1 winding leakage reactance. Default: nullptr */
		CIMPP::PU x1q;  /* Q-axis damper 1 winding leakage reactance. Default: nullptr */
		CIMPP::PU x2q;  /* Q-axis damper 2 winding leakage reactance. Default: nullptr */
		CIMPP::PU xad;  /* D-axis mutual reactance. Default: nullptr */
		CIMPP::PU xaq;  /* Q-axis mutual reactance. Default: nullptr */
		CIMPP::PU xf1d;  /* Differential mutual (`Canay`) reactance. Default: nullptr */
		CIMPP::PU xfd;  /* Field winding leakage reactance. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* SynchronousMachineEquivalentCircuit_factory();
}
#endif
