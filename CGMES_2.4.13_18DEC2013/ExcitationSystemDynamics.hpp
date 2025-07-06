#ifndef ExcitationSystemDynamics_H
#define ExcitationSystemDynamics_H
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

namespace CIMPP
{
	class DiscontinuousExcitationControlDynamics;
	class OverexcitationLimiterDynamics;
	class PFVArControllerType1Dynamics;
	class PFVArControllerType2Dynamics;
	class PowerSystemStabilizerDynamics;
	class SynchronousMachineDynamics;
	class UnderexcitationLimiterDynamics;
	class VoltageCompensatorDynamics;

	/** \brief Excitation system function block whose behavior is described by reference to a standard model */
	class ExcitationSystemDynamics : public DynamicsFunctionBlock
	{
	public:
		/* constructor initialising all attributes to null */
		ExcitationSystemDynamics();
		~ExcitationSystemDynamics() override;

		/** \brief Discontinuous excitation control model associated with this excitation system model. Default: 0 */
		CIMPP::DiscontinuousExcitationControlDynamics* DiscontinuousExcitationControlDynamics;

		/** \brief Overexcitation limiter model associated with this excitation system model. Default: 0 */
		CIMPP::OverexcitationLimiterDynamics* OverexcitationLimiterDynamics;

		/** \brief Power Factor or VAr controller Type I model associated with this excitation system model. Default: 0 */
		CIMPP::PFVArControllerType1Dynamics* PFVArControllerType1Dynamics;

		/** \brief Power Factor or VAr controller Type II model associated with this excitation system model. Default: 0 */
		CIMPP::PFVArControllerType2Dynamics* PFVArControllerType2Dynamics;

		/** \brief Power system stabilizer model associated with this excitation system model. Default: 0 */
		CIMPP::PowerSystemStabilizerDynamics* PowerSystemStabilizerDynamics;

		/** \brief Synchronous machine model with which this excitation system model is associated. Default: 0 */
		CIMPP::SynchronousMachineDynamics* SynchronousMachineDynamics;

		/** \brief Undrexcitation limiter model associated with this excitation system model. Default: 0 */
		CIMPP::UnderexcitationLimiterDynamics* UnderexcitationLimiterDynamics;

		/** \brief Voltage compensator model associated with this excitation system model. Default: 0 */
		CIMPP::VoltageCompensatorDynamics* VoltageCompensatorDynamics;

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

	BaseClass* ExcitationSystemDynamics_factory();
}
#endif
