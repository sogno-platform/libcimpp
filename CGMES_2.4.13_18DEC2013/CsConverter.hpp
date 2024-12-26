#ifndef CsConverter_H
#define CsConverter_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ACDCConverter.hpp"
#include "BaseClassDefiner.hpp"
#include "AngleDegrees.hpp"
#include "CsOperatingModeKind.hpp"
#include "CsPpccControlKind.hpp"
#include "CurrentFlow.hpp"

namespace CIMPP
{

	/*
	DC side of the current source converter (CSC).
	*/
	class CsConverter : public ACDCConverter
	{
	public:
		/* constructor initialising all attributes to null */
		CsConverter();
		~CsConverter() override;

		CIMPP::AngleDegrees alpha;  /* Firing angle, typical value between 10 and 18 degrees for a rectifier. CSC state variable, result from power flow. Default: nullptr */
		CIMPP::AngleDegrees gamma;  /* Extinction angle. CSC state variable, result from power flow. Default: nullptr */
		CIMPP::AngleDegrees maxAlpha;  /* Maximum firing angle. CSC configuration data used in power flow. Default: nullptr */
		CIMPP::AngleDegrees maxGamma;  /* Maximum extinction angle. CSC configuration data used in power flow. Default: nullptr */
		CIMPP::CurrentFlow maxIdc;  /* The maximum direct current (Id) on the DC side at which the converter should operate. Converter configuration data use in power flow. Default: nullptr */
		CIMPP::AngleDegrees minAlpha;  /* Minimum firing angle. CSC configuration data used in power flow. Default: nullptr */
		CIMPP::AngleDegrees minGamma;  /* Minimum extinction angle. CSC configuration data used in power flow. Default: nullptr */
		CIMPP::CurrentFlow minIdc;  /* The minimum direct current (Id) on the DC side at which the converter should operate. CSC configuration data used in power flow. Default: nullptr */
		CIMPP::CsOperatingModeKind operatingMode;  /* Indicates whether the DC pole is operating as an inverter or as a rectifier. CSC control variable used in power flow. Default: 0 */
		CIMPP::CsPpccControlKind pPccControl;  /*  Default: 0 */
		CIMPP::CurrentFlow ratedIdc;  /* Rated converter DC current, also called IdN. Converter configuration data used in power flow. Default: nullptr */
		CIMPP::AngleDegrees targetAlpha;  /* Target firing angle. CSC control variable used in power flow. Default: nullptr */
		CIMPP::AngleDegrees targetGamma;  /* Target extinction angle. CSC  control variable used in power flow. Default: nullptr */
		CIMPP::CurrentFlow targetIdc;  /* DC current target value. CSC control variable used in power flow. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* CsConverter_factory();
}
#endif
