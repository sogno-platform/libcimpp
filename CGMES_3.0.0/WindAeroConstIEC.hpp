#ifndef WindAeroConstIEC_H
#define WindAeroConstIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class WindGenTurbineType1aIEC;

	/*
	Constant aerodynamic torque model which assumes that the aerodynamic torque is constant. Reference: IEC 61400-27-1:2015, 5.6.1.1.
	*/
	class WindAeroConstIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindAeroConstIEC();
		~WindAeroConstIEC() override;

		CIMPP::WindGenTurbineType1aIEC* WindGenTurbineType1aIEC;  /* Wind turbine type 1A model with which this wind aerodynamic model is associated. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindAeroConstIEC_factory();
}
#endif
