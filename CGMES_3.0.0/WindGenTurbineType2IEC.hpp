#ifndef WindGenTurbineType2IEC_H
#define WindGenTurbineType2IEC_H
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
	class WindContRotorRIEC;
	class WindPitchContPowerIEC;

	/*
	Wind turbine IEC type 2.  Reference: IEC 61400-27-1:2015, 5.5.3.
	*/
	class WindGenTurbineType2IEC : public WindTurbineType1or2IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindGenTurbineType2IEC();
		~WindGenTurbineType2IEC() override;

		CIMPP::WindContRotorRIEC* WindContRotorRIEC;  /* Wind control rotor resistance model associated with wind turbine type 2 model. Default: 0 */
		CIMPP::WindPitchContPowerIEC* WindPitchContPowerIEC;  /* Pitch control power model associated with this wind turbine type 2 model. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindGenTurbineType2IEC_factory();
}
#endif
