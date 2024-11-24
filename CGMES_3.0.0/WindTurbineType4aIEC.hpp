#ifndef WindTurbineType4aIEC_H
#define WindTurbineType4aIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "WindTurbineType4IEC.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class WindContPType4aIEC;
	class WindGenType4IEC;

	/*
	Wind turbine IEC type 4A. Reference: IEC 61400-27-1:2015, 5.5.5.2.
	*/
	class WindTurbineType4aIEC : public WindTurbineType4IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindTurbineType4aIEC();
		~WindTurbineType4aIEC() override;

		CIMPP::WindContPType4aIEC* WindContPType4aIEC;  /* Wind control P type 4A model associated with this wind turbine type 4A model. Default: 0 */
		CIMPP::WindGenType4IEC* WindGenType4IEC;  /* Wind generator type 4 model associated with this wind turbine type 4A model. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindTurbineType4aIEC_factory();
}
#endif
