#ifndef WindGenTurbineType1aIEC_H
#define WindGenTurbineType1aIEC_H
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
	class WindAeroConstIEC;

	/*
	Wind turbine IEC type 1A. Reference: IEC 61400-27-1:2015, 5.5.2.2.
	*/
	class WindGenTurbineType1aIEC : public WindTurbineType1or2IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindGenTurbineType1aIEC();
		~WindGenTurbineType1aIEC() override;

		CIMPP::WindAeroConstIEC* WindAeroConstIEC;  /* Wind aerodynamic model associated with this wind turbine type 1A model. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindGenTurbineType1aIEC_factory();
}
#endif
