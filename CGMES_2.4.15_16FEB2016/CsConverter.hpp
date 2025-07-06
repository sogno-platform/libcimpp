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

	/** \brief DC side of the current source converter (CSC). */
	class CsConverter : public ACDCConverter
	{
	public:
		/* constructor initialising all attributes to null */
		CsConverter();
		~CsConverter() override;

		/** \brief Firing angle, typical value between 10 and 18 degrees for a rectifier. CSC state variable, result from power flow. Default: nullptr */
		CIMPP::AngleDegrees alpha;

		/** \brief Extinction angle. CSC state variable, result from power flow. Default: nullptr */
		CIMPP::AngleDegrees gamma;

		/** \brief Maximum firing angle. CSC configuration data used in power flow. Default: nullptr */
		CIMPP::AngleDegrees maxAlpha;

		/** \brief Maximum extinction angle. CSC configuration data used in power flow. Default: nullptr */
		CIMPP::AngleDegrees maxGamma;

		/** \brief The maximum direct current (Id) on the DC side at which the converter should operate. Converter configuration data use in power flow. Default: nullptr */
		CIMPP::CurrentFlow maxIdc;

		/** \brief Minimum firing angle. CSC configuration data used in power flow. Default: nullptr */
		CIMPP::AngleDegrees minAlpha;

		/** \brief Minimum extinction angle. CSC configuration data used in power flow. Default: nullptr */
		CIMPP::AngleDegrees minGamma;

		/** \brief The minimum direct current (Id) on the DC side at which the converter should operate. CSC configuration data used in power flow. Default: nullptr */
		CIMPP::CurrentFlow minIdc;

		/** \brief Indicates whether the DC pole is operating as an inverter or as a rectifier. CSC control variable used in power flow. Default: 0 */
		CIMPP::CsOperatingModeKind operatingMode;

		/** \brief  Default: 0 */
		CIMPP::CsPpccControlKind pPccControl;

		/** \brief Rated converter DC current, also called IdN. Converter configuration data used in power flow. Default: nullptr */
		CIMPP::CurrentFlow ratedIdc;

		/** \brief Target firing angle. CSC control variable used in power flow. Default: nullptr */
		CIMPP::AngleDegrees targetAlpha;

		/** \brief Target extinction angle. CSC  control variable used in power flow. Default: nullptr */
		CIMPP::AngleDegrees targetGamma;

		/** \brief DC current target value. CSC control variable used in power flow. Default: nullptr */
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
