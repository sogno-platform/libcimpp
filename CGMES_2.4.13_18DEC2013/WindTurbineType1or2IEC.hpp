#ifndef WindTurbineType1or2IEC_H
#define WindTurbineType1or2IEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "WindTurbineType1or2Dynamics.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class WindMechIEC;
	class WindProtectionIEC;

	/*
	Generator model for wind turbine of IEC Type 1 or Type 2 is a standard asynchronous generator model.  Reference: IEC Standard 614000-27-1 Section 6.6.3.1.
	*/
	class WindTurbineType1or2IEC : public WindTurbineType1or2Dynamics
	{
	public:
		/* constructor initialising all attributes to null */
		WindTurbineType1or2IEC();
		~WindTurbineType1or2IEC() override;

		CIMPP::WindMechIEC* WindMechIEC;  /* Wind mechanical model associated with this wind generator type 1 or 2 model. Default: 0 */
		CIMPP::WindProtectionIEC* WindProtectionIEC;  /* Wind turbune protection model associated with this wind generator type 1 or 2 model. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindTurbineType1or2IEC_factory();
}
#endif
