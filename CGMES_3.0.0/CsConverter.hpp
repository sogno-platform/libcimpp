#ifndef CsConverter_H
#define CsConverter_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ACDCConverter.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "AngleDegrees.hpp"
#include "CsOperatingModeKind.hpp"
#include "CsPpccControlKind.hpp"
#include "CurrentFlow.hpp"

namespace CIMPP
{
	class CSCDynamics;

	/** \brief DC side of the current source converter (CSC). The firing angle controls the dc voltage at the converter, both for rectifier and inverter. The difference between the dc voltages of the rectifier and inverter determines the dc current. The extinction angle is used to limit the dc voltage at the inverter, if needed, and is not used in active power control. The firing angle, transformer tap position and number of connected filters are the primary means to control a current source dc line. Higher level controls are built on top, e.g. dc voltage, dc current and active power. From a steady state perspective it is sufficient to specify the wanted active power transfer (ACDCConverter.targetPpcc) and the control functions will set the dc voltage, dc current, firing angle, transformer tap position and number of connected filters to meet this. Therefore attributes targetAlpha and targetGamma are not applicable in this case. The reactive power consumed by the converter is a function of the firing angle, transformer tap position and number of connected filter, which can be approximated with half of the active power. The losses is a function of the dc voltage and dc current. The attributes minAlpha and maxAlpha define the range of firing angles for rectifier operation between which no discrete tap changer action takes place. The range is typically 10-18 degrees. The attributes minGamma and maxGamma define the range of extinction angles for inverter operation between which no discrete tap changer action takes place. The range is typically 17-20 degrees. */
	class CsConverter : public ACDCConverter
	{
	public:
		/* constructor initialising all attributes to null */
		CsConverter();
		~CsConverter() override;

		/** \brief Current source converter dynamics model used to describe dynamic behaviour of this converter. Default: 0 */
		CIMPP::CSCDynamics* CSCDynamics;

		/** \brief Firing angle that determines the dc voltage at the converter dc terminal. Typical value between 10 degrees and 18 degrees for a rectifier. It is converter`s state variable, result from power flow. The attribute shall be a positive value. Default: nullptr */
		CIMPP::AngleDegrees alpha;

		/** \brief Extinction angle. It is used to limit the dc voltage at the inverter if needed. Typical value between 17 degrees and 20 degrees for an inverter. It is converter`s state variable, result from power flow. The attribute shall be a positive value. Default: nullptr */
		CIMPP::AngleDegrees gamma;

		/** \brief Maximum firing angle. It is converter`s configuration data used in power flow. The attribute shall be a positive value. Default: nullptr */
		CIMPP::AngleDegrees maxAlpha;

		/** \brief Maximum extinction angle. It is converter`s configuration data used in power flow. The attribute shall be a positive value. Default: nullptr */
		CIMPP::AngleDegrees maxGamma;

		/** \brief The maximum direct current (Id) on the DC side at which the converter should operate. It is converter`s configuration data use in power flow. The attribute shall be a positive value. Default: nullptr */
		CIMPP::CurrentFlow maxIdc;

		/** \brief Minimum firing angle. It is converter`s configuration data used in power flow. The attribute shall be a positive value. Default: nullptr */
		CIMPP::AngleDegrees minAlpha;

		/** \brief Minimum extinction angle. It is converter`s configuration data used in power flow. The attribute shall be a positive value. Default: nullptr */
		CIMPP::AngleDegrees minGamma;

		/** \brief The minimum direct current (Id) on the DC side at which the converter should operate. It is converter`s configuration data used in power flow. The attribute shall be a positive value. Default: nullptr */
		CIMPP::CurrentFlow minIdc;

		/** \brief Indicates whether the DC pole is operating as an inverter or as a rectifier. It is converter`s control variable used in power flow. Default: 0 */
		CIMPP::CsOperatingModeKind operatingMode;

		/** \brief Kind of active power control. Default: 0 */
		CIMPP::CsPpccControlKind pPccControl;

		/** \brief Rated converter DC current, also called IdN. The attribute shall be a positive value. It is converter`s configuration data used in power flow. Default: nullptr */
		CIMPP::CurrentFlow ratedIdc;

		/** \brief Target firing angle. It is converter`s control variable used in power flow. It is only applicable for rectifier if continuous tap changer control is used. Allowed values are within the range minAlpha&amp;lt;=targetAlpha&amp;lt;=maxAlpha. The attribute shall be a positive value. Default: nullptr */
		CIMPP::AngleDegrees targetAlpha;

		/** \brief Target extinction angle. It is converter`s control variable used in power flow. It is only applicable for inverter if continuous tap changer control is used. Allowed values are within the range minGamma&amp;lt;=targetGamma&amp;lt;=maxGamma. The attribute shall be a positive value. Default: nullptr */
		CIMPP::AngleDegrees targetGamma;

		/** \brief DC current target value. It is converter`s control variable used in power flow. The attribute shall be a positive value. Default: nullptr */
		CIMPP::CurrentFlow targetIdc;

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

	BaseClass* CsConverter_factory();
}
#endif
