#ifndef SynchronousMachineDynamics_H
#define SynchronousMachineDynamics_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "RotatingMachineDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

namespace CIMPP
{
	class CrossCompoundTurbineGovernorDynamics;
	class ExcitationSystemDynamics;
	class GenICompensationForGenJ;
	class MechanicalLoadDynamics;
	class SynchronousMachine;
	class TurbineGovernorDynamics;

	/** \brief Synchronous machine whose behaviour is described by reference to a standard model expressed in one of the following forms: - simplified (or classical), where a group of generators or motors is not modelled in detail; - detailed, in equivalent circuit form; - detailed, in time constant reactance form; or <font color="#0f0f0f">- by definition of a user-defined model.</font> <font color="#0f0f0f">It is a common practice to represent small generators by a negative load rather than by a dynamic generator model when performing dynamics simulations. In this case, a SynchronousMachine in the static model is not represented by anything in the dynamics model, instead it is treated as an ordinary load.</font> <font color="#0f0f0f">Parameter details:</font> <ol> 	<li><font color="#0f0f0f">Synchronous machine parameters such as <i>Xl, Xd, Xp</i> etc. are actually used as inductances in the models,</font> but are commonly referred to as reactances since, at nominal frequency, the PU values are the same. However, some references use the symbol <i>L</i> instead of <i>X</i>.</li> </ol> */
	class SynchronousMachineDynamics : public RotatingMachineDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		SynchronousMachineDynamics();
		~SynchronousMachineDynamics() override;

		/** \brief The cross-compound turbine governor with which this high-pressure synchronous machine is associated. Default: 0 */
		CIMPP::CrossCompoundTurbineGovernorDynamics* CrossCompoundTurbineGovernorDyanmics;

		/** \brief The cross-compound turbine governor with which this low-pressure synchronous machine is associated. Default: 0 */
		CIMPP::CrossCompoundTurbineGovernorDynamics* CrossCompoundTurbineGovernorDynamics;

		/** \brief Excitation system model associated with this synchronous machine model. Default: 0 */
		CIMPP::ExcitationSystemDynamics* ExcitationSystemDynamics;

		/** \brief Compensation of voltage compensator`s generator for current flow out of this  generator. Default: 0 */
		std::list<CIMPP::GenICompensationForGenJ*> GenICompensationForGenJ;

		/** \brief Mechanical load model associated with this synchronous machine model. Default: 0 */
		CIMPP::MechanicalLoadDynamics* MechanicalLoadDynamics;

		/** \brief Synchronous machine to which synchronous machine dynamics model applies. Default: 0 */
		CIMPP::SynchronousMachine* SynchronousMachine;

		/** \brief Turbine-governor model associated with this synchronous machine model. Multiplicity of greater than one is intended to support hydro units that have multiple turbines on one generator. Default: 0 */
		std::list<CIMPP::TurbineGovernorDynamics*> TurbineGovernorDynamics;

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

	BaseClass* SynchronousMachineDynamics_factory();
}
#endif
