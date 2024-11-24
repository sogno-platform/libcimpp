#ifndef CAESPlant_H
#define CAESPlant_H
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
	Compressed air energy storage plant.
	*/
	class CAESPlant : public PowerSystemResource
	{
	public:
		/* constructor initialising all attributes to null */
		CAESPlant();
		~CAESPlant() override;

		CIMPP::ThermalGeneratingUnit* ThermalGeneratingUnit;  /* A thermal generating unit may be a member of a compressed air energy storage plant. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* CAESPlant_factory();
}
#endif
