#ifndef RotatingMachineDynamics_H
#define RotatingMachineDynamics_H

#include "DynamicsFunctionBlock.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "PU.hpp"

namespace CIMPP {


	/*
	Abstract parent class for all synchronous and asynchronous machine standard models.
	*/
	class RotatingMachineDynamics: public DynamicsFunctionBlock
	{

	public:
					CIMPP::Simple_Float damping; 	/* Damping torque coefficient (D).  A proportionality constant that, when multiplied by the angular velocity of the rotor poles with respect to the magnetic field (frequency), results in the damping torque.  This value is often zero when the sources of damping torques (generator damper windings, load damping effects, etc.) are modelled in detail.  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds inertia; 	/* Inertia constant of generator or motor and mechanical load (H) (&gt;0).  This is the specification for the stored energy in the rotating mass when operating at rated speed.  For a generator, this includes the generator plus all other elements (turbine, exciter) on the same shaft and has units of MW*sec.  For a motor, it includes the motor plus its mechanical load. Conventional units are per unit on the generator MVA base, usually expressed as MW*second/MVA or just second.   This value is used in the accelerating power reference frame for operator training simulator solutions.  Typical Value = 3. Default: nullptr */
					CIMPP::Simple_Float saturationFactor; 	/* Saturation factor at rated terminal voltage (S1) (&gt; or =0).  Not used by simplified model.  Defined by defined by S(E1) in the SynchronousMachineSaturationParameters diagram.  Typical Value = 0.02. Default: nullptr */
					CIMPP::Simple_Float saturationFactor120; 	/* Saturation factor at 120% of rated terminal voltage (S12) (&gt; or =S1). Not used by the simplified model, defined by S(E2) in the SynchronousMachineSaturationParameters diagram.  Typical Value = 0.12. Default: nullptr */
					CIMPP::PU statorLeakageReactance; 	/* Stator leakage reactance (Xl) (&gt; or =0). Typical Value = 0.15. Default: nullptr */
					CIMPP::PU statorResistance; 	/* Stator (armature) resistance (Rs) (&gt; or =0). Typical Value = 0.005. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		RotatingMachineDynamics();
		virtual ~RotatingMachineDynamics();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* RotatingMachineDynamics_factory();
}
#endif
