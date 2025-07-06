#ifndef RotatingMachineDynamics_H
#define RotatingMachineDynamics_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "DynamicsFunctionBlock.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief Abstract parent class for all synchronous and asynchronous machine standard models. */
	class RotatingMachineDynamics : public DynamicsFunctionBlock
	{
	public:
		/* constructor initialising all attributes to null */
		RotatingMachineDynamics();
		~RotatingMachineDynamics() override;

		/** \brief Damping torque coefficient (D).  A proportionality constant that, when multiplied by the angular velocity of the rotor poles with respect to the magnetic field (frequency), results in the damping torque.  This value is often zero when the sources of damping torques (generator damper windings, load damping effects, etc.) are modelled in detail.  Typical Value = 0. Default: nullptr */
		CIMPP::Simple_Float damping;

		/** \brief Inertia constant of generator or motor and mechanical load (H) (&gt;0).  This is the specification for the stored energy in the rotating mass when operating at rated speed.  For a generator, this includes the generator plus all other elements (turbine, exciter) on the same shaft and has units of MW*sec.  For a motor, it includes the motor plus its mechanical load. Conventional units are per unit on the generator MVA base, usually expressed as MW*second/MVA or just second.   This value is used in the accelerating power reference frame for operator training simulator solutions.  Typical Value = 3. Default: nullptr */
		CIMPP::Seconds inertia;

		/** \brief Saturation factor at rated terminal voltage (S1) (&gt; or =0).  Not used by simplified model.  Defined by defined by S(E1) in the SynchronousMachineSaturationParameters diagram.  Typical Value = 0.02. Default: nullptr */
		CIMPP::Simple_Float saturationFactor;

		/** \brief Saturation factor at 120% of rated terminal voltage (S12) (&gt; or =S1). Not used by the simplified model, defined by S(E2) in the SynchronousMachineSaturationParameters diagram.  Typical Value = 0.12. Default: nullptr */
		CIMPP::Simple_Float saturationFactor120;

		/** \brief Stator leakage reactance (Xl) (&gt; or =0). Typical Value = 0.15. Default: nullptr */
		CIMPP::PU statorLeakageReactance;

		/** \brief Stator (armature) resistance (Rs) (&gt; or =0). Typical Value = 0.005. Default: nullptr */
		CIMPP::PU statorResistance;

		static const char debugName[];
		const char* debugString() const override;

		const std::list<std::string>& getAttributeNames() const override;

		const std::string& getClassNamespaceUrl() const override;
		const std::string& getAttributeNamespaceUrl(const std::string& attrName) const override;

		const std::list<CGMESProfile>& getPossibleProfiles() const override;
		const CGMESProfile& getRecommendedProfile() const override;
		const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const override;
		const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;

		bool isAssignableFrom(BaseClass* otherObject) const override;
		static const BaseClassDefiner declare();

	protected:
		std::map<std::string, AttrDetails> allAttrDetailsMap() const override;
	};

	BaseClass* RotatingMachineDynamics_factory();
}
#endif
