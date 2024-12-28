#ifndef WindProtectionIEC_H
#define WindProtectionIEC_H
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
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class WindTurbineType1or2IEC;
	class WindTurbineType3or4IEC;

	/*
	The grid protection model includes protection against over and under voltage, and against over and under frequency.  Reference: IEC Standard 614000-27-1 Section 6.6.6.
	*/
	class WindProtectionIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindProtectionIEC();
		~WindProtectionIEC() override;

		CIMPP::WindTurbineType1or2IEC* WindTurbineType1or2IEC;  /* Wind generator type 1 or 2 model with which this wind turbine protection model is associated. Default: 0 */
		CIMPP::WindTurbineType3or4IEC* WindTurbineType3or4IEC;  /* Wind generator type 3 or 4 model with which this wind turbine protection model is associated. Default: 0 */
		CIMPP::PU fover;  /* Set of wind turbine over frequency protection levels (). It is project dependent parameter. Default: nullptr */
		CIMPP::PU funder;  /* Set of wind turbine under frequency protection levels (). It is project dependent parameter. Default: nullptr */
		CIMPP::Seconds tfover;  /* Set of corresponding wind turbine over frequency protection disconnection times (). It is project dependent parameter. Default: nullptr */
		CIMPP::Seconds tfunder;  /* Set of corresponding wind turbine under frequency protection disconnection times (). It is project dependent parameter. Default: nullptr */
		CIMPP::Seconds tuover;  /* Set of corresponding wind turbine over voltage protection disconnection times (). It is project dependent parameter. Default: nullptr */
		CIMPP::Seconds tuunder;  /* Set of corresponding wind turbine under voltage protection disconnection times (). It is project dependent parameter. Default: nullptr */
		CIMPP::PU uover;  /* Set of wind turbine over voltage protection levels (). It is project dependent parameter. Default: nullptr */
		CIMPP::PU uunder;  /* Set of wind turbine under voltage protection levels (). It is project dependent parameter. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* WindProtectionIEC_factory();
}
#endif
