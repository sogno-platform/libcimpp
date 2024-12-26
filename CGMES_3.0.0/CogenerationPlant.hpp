#ifndef CogenerationPlant_H
#define CogenerationPlant_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "PowerSystemResource.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class ThermalGeneratingUnit;

	/*
	A set of thermal generating units for the production of electrical energy and process steam (usually from the output of the steam turbines). The steam sendout is typically used for industrial purposes or for municipal heating and cooling.
	*/
	class CogenerationPlant : public PowerSystemResource
	{
	public:
		/* constructor initialising all attributes to null */
		CogenerationPlant();
		~CogenerationPlant() override;

		std::list<CIMPP::ThermalGeneratingUnit*> ThermalGeneratingUnits;  /* A thermal generating unit may be a member of a cogeneration plant. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* CogenerationPlant_factory();
}
#endif
