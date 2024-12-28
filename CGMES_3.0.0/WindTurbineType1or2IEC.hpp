#ifndef WindTurbineType1or2IEC_H
#define WindTurbineType1or2IEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "WindTurbineType1or2Dynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

namespace CIMPP
{
	class WindMechIEC;
	class WindProtectionIEC;

	/*
	Parent class supporting relationships to IEC wind turbines type 1 and type 2 including their control models. Generator model for wind turbine of IEC type 1 or type 2 is a standard asynchronous generator model. Reference: IEC 61400-27-1:2015, 5.5.2 and 5.5.3.
	*/
	class WindTurbineType1or2IEC : public WindTurbineType1or2Dynamics
	{
	public:
		/* constructor initialising all attributes to null */
		WindTurbineType1or2IEC();
		~WindTurbineType1or2IEC() override;

		CIMPP::WindMechIEC* WindMechIEC;  /* Wind mechanical model associated with this wind generator type 1 or type 2 model. Default: 0 */
		CIMPP::WindProtectionIEC* WindProtectionIEC;  /* Wind turbune protection model associated with this wind generator type 1 or type 2 model. Default: 0 */

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

	BaseClass* WindTurbineType1or2IEC_factory();
}
#endif
