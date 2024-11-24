#ifndef AsynchronousMachineEquivalentCircuit_H
#define AsynchronousMachineEquivalentCircuit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "AsynchronousMachineDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"

namespace CIMPP
{

	/*
	The electrical equations of all variations of the asynchronous model are based on the AsynchronousEquivalentCircuit diagram for the direct- and quadrature- axes, with two equivalent rotor windings in each axis.   Equations for conversion between equivalent circuit and time constant reactance forms: <i>Xs</i> = <i>Xm</i> + <i>Xl</i> <i>X'</i> = <i>Xl</i> + <i>Xm</i> x <i>Xlr1 </i>/ (<i>Xm </i>+ <i>Xlr1</i>) <i>X''</i> = <i>Xl</i> + <i>Xm</i> x <i>Xlr1</i> x <i>Xlr2</i> / (<i>Xm</i> x <i>Xlr1</i> + <i>Xm</i> x <i>Xlr2</i> + <i>Xlr1</i> x <i>Xlr2</i>) <i>T'o</i> = (<i>Xm</i> + <i>Xlr1</i>) / (<i>omega</i><i><sub>0</sub></i> x <i>Rr1</i>) <i>T''o</i> = (<i>Xm</i> x <i>Xlr1</i> + <i>Xm</i> x <i>Xlr2</i> + <i>Xlr1</i> x <i>Xlr2</i>) / (<i>omega</i><i><sub>0</sub></i> x <i>Rr2</i> x (<i>Xm</i> + <i>Xlr1</i>) Same equations using CIM attributes from AsynchronousMachineTimeConstantReactance class on left of "=" and AsynchronousMachineEquivalentCircuit class on right (except as noted): xs = xm + RotatingMachineDynamics.statorLeakageReactance xp = RotatingMachineDynamics.statorLeakageReactance + xm x xlr1 / (xm + xlr1) xpp = RotatingMachineDynamics.statorLeakageReactance + xm x xlr1 x xlr2 / (xm x xlr1 + xm x xlr2 + xlr1 x xlr2) tpo = (xm + xlr1) / (2 x pi x nominal frequency x rr1) tppo = (xm x xlr1 + xm x xlr2 + xlr1 x xlr2) / (2 x pi x nominal frequency x rr2 x (xm + xlr1).
	*/
	class AsynchronousMachineEquivalentCircuit : public AsynchronousMachineDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		AsynchronousMachineEquivalentCircuit();
		~AsynchronousMachineEquivalentCircuit() override;

		CIMPP::PU rr1;  /* Damper 1 winding resistance. Default: nullptr */
		CIMPP::PU rr2;  /* Damper 2 winding resistance. Default: nullptr */
		CIMPP::PU xlr1;  /* Damper 1 winding leakage reactance. Default: nullptr */
		CIMPP::PU xlr2;  /* Damper 2 winding leakage reactance. Default: nullptr */
		CIMPP::PU xm;  /* Magnetizing reactance. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* AsynchronousMachineEquivalentCircuit_factory();
}
#endif
