#ifndef HydroPump_H
#define HydroPump_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "Equipment.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

namespace CIMPP
{
	class HydroPowerPlant;
	class RotatingMachine;

	/*
	A synchronous motor-driven pump, typically associated with a pumped storage plant.
	*/
	class HydroPump : public Equipment
	{
	public:
		/* constructor initialising all attributes to null */
		HydroPump();
		~HydroPump() override;

		CIMPP::HydroPowerPlant* HydroPowerPlant;  /* The hydro pump may be a member of a pumped storage plant or a pump for distributing water. Default: 0 */
		CIMPP::RotatingMachine* RotatingMachine;  /* The synchronous machine drives the turbine which moves the water from a low elevation to a higher elevation. The direction of machine rotation for pumping may or may not be the same as for generating. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* HydroPump_factory();
}
#endif
