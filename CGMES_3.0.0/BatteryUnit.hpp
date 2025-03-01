#ifndef BatteryUnit_H
#define BatteryUnit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PowerElectronicsUnit.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "BatteryStateKind.hpp"
#include "RealEnergy.hpp"

namespace CIMPP
{

	/** \brief An electrochemical energy storage device. */
	class BatteryUnit : public PowerElectronicsUnit
	{
	public:
		/* constructor initialising all attributes to null */
		BatteryUnit();
		~BatteryUnit() override;

		/** \brief The current state of the battery (charging, full, etc.). Default: 0 */
		CIMPP::BatteryStateKind batteryState;

		/** \brief Full energy storage capacity of the battery. The attribute shall be a positive value. Default: nullptr */
		CIMPP::RealEnergy ratedE;

		/** \brief Amount of energy currently stored. The attribute shall be a positive value or zero and lower than BatteryUnit.ratedE. Default: nullptr */
		CIMPP::RealEnergy storedE;

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

	BaseClass* BatteryUnit_factory();
}
#endif
