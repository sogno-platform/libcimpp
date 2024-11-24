#ifndef WindTurbineType4IEC_H
#define WindTurbineType4IEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "WindTurbineType3or4IEC.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class WindGenType3aIEC;

	/*
	Parent class supporting relationships to IEC wind turbines type 4 including their control models.
	*/
	class WindTurbineType4IEC : public WindTurbineType3or4IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindTurbineType4IEC();
		~WindTurbineType4IEC() override;

		CIMPP::WindGenType3aIEC* WindGenType3aIEC;  /* Wind generator type 3A model associated with this wind turbine type 4 model. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindTurbineType4IEC_factory();
}
#endif
