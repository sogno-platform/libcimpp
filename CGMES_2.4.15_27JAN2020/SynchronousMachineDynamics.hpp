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
	class ExcitationSystemDynamics;
	class GenICompensationForGenJ;
	class MechanicalLoadDynamics;
	class SynchronousMachine;
	class TurbineGovernorDynamics;

	/** \brief Synchronous machine whose behaviour is described by reference to a standard model expressed in one of the following forms: */
	class SynchronousMachineDynamics : public RotatingMachineDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		SynchronousMachineDynamics();
		~SynchronousMachineDynamics() override;

		/** \brief Excitation system model associated with this synchronous machine model. Default: 0 */
		CIMPP::ExcitationSystemDynamics* ExcitationSystemDynamics;

		/** \brief Compensation of voltage compensator`s generator for current flow out of this  generator. Default: 0 */
		std::list<CIMPP::GenICompensationForGenJ*> GenICompensationForGenJ;

		/** \brief Mechanical load model associated with this synchronous machine model. Default: 0 */
		CIMPP::MechanicalLoadDynamics* MechanicalLoadDynamics;

		/** \brief Synchronous machine to which synchronous machine dynamics model applies. Default: 0 */
		CIMPP::SynchronousMachine* SynchronousMachine;

		/** \brief Synchronous machine model with which this turbine-governor model is associated. Default: 0 */
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
