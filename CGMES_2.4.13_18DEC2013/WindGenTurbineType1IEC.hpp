#ifndef WindGenTurbineType1IEC_H
#define WindGenTurbineType1IEC_H
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
	Wind turbine IEC Type 1.  Reference: IEC Standard 61400-27-1, section 6.5.2.
	*/
	class WindGenTurbineType1IEC : public WindTurbineType1or2IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindGenTurbineType1IEC();
		~WindGenTurbineType1IEC() override;

		CIMPP::WindAeroConstIEC* WindAeroConstIEC;  /* Wind aerodynamic model associated with this wind turbine type 1 model. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindGenTurbineType1IEC_factory();
}
#endif
