#ifndef PowerElectronicsUnit_H
#define PowerElectronicsUnit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "Equipment.hpp"
#include "BaseClassDefiner.hpp"
#include "ActivePower.hpp"

namespace CIMPP
{
	class PowerElectronicsConnection;

	/*
	A generating unit or battery or aggregation that connects to the AC network using power electronics rather than rotating machines.
	*/
	class PowerElectronicsUnit : public Equipment
	{
	public:
		/* constructor initialising all attributes to null */
		PowerElectronicsUnit();
		~PowerElectronicsUnit() override;

		CIMPP::PowerElectronicsConnection* PowerElectronicsConnection;  /* A power electronics unit has a connection to the AC network. Default: 0 */
		CIMPP::ActivePower maxP;  /* Maximum active power limit. This is the maximum (nameplate) limit for the unit. Default: nullptr */
		CIMPP::ActivePower minP;  /* Minimum active power limit. This is the minimum (nameplate) limit for the unit. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PowerElectronicsUnit_factory();
}
#endif
