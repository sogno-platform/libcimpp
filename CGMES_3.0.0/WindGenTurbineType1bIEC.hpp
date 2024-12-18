#ifndef WindGenTurbineType1bIEC_H
#define WindGenTurbineType1bIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "WindTurbineType1or2IEC.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class WindPitchContPowerIEC;

	/*
	Wind turbine IEC type 1B.  Reference: IEC 61400-27-1:2015, 5.5.2.3.
	*/
	class WindGenTurbineType1bIEC : public WindTurbineType1or2IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindGenTurbineType1bIEC();
		~WindGenTurbineType1bIEC() override;

		CIMPP::WindPitchContPowerIEC* WindPitchContPowerIEC;  /* Pitch control power model associated with this wind turbine type 1B model. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindGenTurbineType1bIEC_factory();
}
#endif
