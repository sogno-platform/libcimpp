#ifndef RotatingMachineDynamics_H
#define RotatingMachineDynamics_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "DynamicsFunctionBlock.hpp"
#include "BaseClassDefiner.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Abstract parent class for all synchronous and asynchronous machine standard models.
	*/
	class RotatingMachineDynamics : public DynamicsFunctionBlock
	{
	public:
		/* constructor initialising all attributes to null */
		RotatingMachineDynamics();
		~RotatingMachineDynamics() override;

		CIMPP::Float damping;  /* Damping torque coefficient (&lt;i&gt;D&lt;/i&gt;) (&amp;gt;= 0).  A proportionality constant that, when multiplied by the angular velocity of the rotor poles with respect to the magnetic field (frequency), results in the damping torque.  This value is often zero when the sources of damping torques (generator damper windings, load damping effects, etc.) are modelled in detail.  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds inertia;  /* Inertia constant of generator or motor and mechanical load (&lt;i&gt;H&lt;/i&gt;) (&amp;gt; 0).  This is the specification for the stored energy in the rotating mass when operating at rated speed.  For a generator, this includes the generator plus all other elements (turbine, exciter) on the same shaft and has units of MW x s.  For a motor, it includes the motor plus its mechanical load. Conventional units are PU on the generator MVA base, usually expressed as MW x s / MVA or just s. This value is used in the accelerating power reference frame for operator training simulator solutions.  Typical value = 3. Default: nullptr */
		CIMPP::Float saturationFactor;  /* Saturation factor at rated terminal voltage (&lt;i&gt;S1&lt;/i&gt;) (&amp;gt;= 0).  Not used by simplified model.  Defined by defined by &lt;i&gt;S&lt;/i&gt;(&lt;i&gt;E1&lt;/i&gt;) in the SynchronousMachineSaturationParameters diagram.  Typical value = 0,02. Default: 0.0 */
		CIMPP::Float saturationFactor120;  /* Saturation factor at 120% of rated terminal voltage (&lt;i&gt;S12&lt;/i&gt;) (&amp;gt;= RotatingMachineDynamics.saturationFactor). Not used by the simplified model, defined by &lt;i&gt;S&lt;/i&gt;(&lt;i&gt;E2&lt;/i&gt;) in the SynchronousMachineSaturationParameters diagram.  Typical value = 0,12. Default: 0.0 */
		CIMPP::PU statorLeakageReactance;  /* Stator leakage reactance (&lt;i&gt;Xl&lt;/i&gt;) (&amp;gt;= 0). Typical value = 0,15. Default: nullptr */
		CIMPP::PU statorResistance;  /* Stator (armature) resistance (&lt;i&gt;Rs&lt;/i&gt;) (&amp;gt;= 0). Typical value = 0,005. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* RotatingMachineDynamics_factory();
}
#endif
