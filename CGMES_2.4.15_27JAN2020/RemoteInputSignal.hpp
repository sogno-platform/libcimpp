#ifndef RemoteInputSignal_H
#define RemoteInputSignal_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "RemoteSignalKind.hpp"

namespace CIMPP
{
	class DiscontinuousExcitationControlDynamics;
	class PFVArControllerType1Dynamics;
	class PowerSystemStabilizerDynamics;
	class Terminal;
	class UnderexcitationLimiterDynamics;
	class VoltageCompensatorDynamics;
	class WindPlantDynamics;
	class WindTurbineType1or2Dynamics;
	class WindTurbineType3or4Dynamics;

	/** \brief Supports connection to a terminal associated with a remote bus from which an input signal of a specific type is coming. */
	class RemoteInputSignal : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		RemoteInputSignal();
		~RemoteInputSignal() override;

		/** \brief Discontinuous excitation control model using this remote input signal. Default: 0 */
		CIMPP::DiscontinuousExcitationControlDynamics* DiscontinuousExcitationControlDynamics;

		/** \brief Power Factor or VAr controller Type I model using this remote input signal. Default: 0 */
		CIMPP::PFVArControllerType1Dynamics* PFVArControllerType1Dynamics;

		/** \brief Power system stabilizer model using this remote input signal. Default: 0 */
		CIMPP::PowerSystemStabilizerDynamics* PowerSystemStabilizerDynamics;

		/** \brief Remote terminal with which this input signal is associated. Default: 0 */
		CIMPP::Terminal* Terminal;

		/** \brief Underexcitation limiter model using this remote input signal. Default: 0 */
		CIMPP::UnderexcitationLimiterDynamics* UnderexcitationLimiterDynamics;

		/** \brief Voltage compensator model using this remote input signal. Default: 0 */
		CIMPP::VoltageCompensatorDynamics* VoltageCompensatorDynamics;

		/** \brief The remote signal with which this power plant is associated. Default: 0 */
		CIMPP::WindPlantDynamics* WindPlantDynamics;

		/** \brief Wind generator Type 1 or Type 2 model using this remote input signal. Default: 0 */
		CIMPP::WindTurbineType1or2Dynamics* WindTurbineType1or2Dynamics;

		/** \brief Remote input signal used by these wind turbine Type 3 or 4 models. Default: 0 */
		CIMPP::WindTurbineType3or4Dynamics* WindTurbineType3or4Dynamics;

		/** \brief Type of input signal. Default: 0 */
		CIMPP::RemoteSignalKind remoteSignalType;

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

	BaseClass* RemoteInputSignal_factory();
}
#endif
