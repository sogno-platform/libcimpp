#ifndef BatteryUnit_H
#define BatteryUnit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "PowerElectronicsUnit.hpp"
#include "BaseClassDefiner.hpp"
#include "BatteryStateKind.hpp"
#include "RealEnergy.hpp"

namespace CIMPP
{

	/*
	An electrochemical energy storage device.
	*/
	class BatteryUnit : public PowerElectronicsUnit
	{
	public:
		/* constructor initialising all attributes to null */
		BatteryUnit();
		~BatteryUnit() override;

		CIMPP::BatteryStateKind batteryState;  /* The current state of the battery (charging, full, etc.). Default: 0 */
		CIMPP::RealEnergy ratedE;  /* Full energy storage capacity of the battery. The attribute shall be a positive value. Default: nullptr */
		CIMPP::RealEnergy storedE;  /* Amount of energy currently stored. The attribute shall be a positive value or zero and lower than BatteryUnit.ratedE. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* BatteryUnit_factory();
}
#endif
