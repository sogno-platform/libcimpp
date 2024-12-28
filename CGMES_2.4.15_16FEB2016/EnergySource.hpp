#ifndef EnergySource_H
#define EnergySource_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ConductingEquipment.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "ActivePower.hpp"
#include "AngleRadians.hpp"
#include "Reactance.hpp"
#include "ReactivePower.hpp"
#include "Resistance.hpp"
#include "Voltage.hpp"

namespace CIMPP
{
	class EnergySchedulingType;
	class WindTurbineType3or4Dynamics;

	/*
	A generic equivalent for an energy supplier on a transmission or distribution voltage level.
	*/
	class EnergySource : public ConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		EnergySource();
		~EnergySource() override;

		CIMPP::EnergySchedulingType* EnergySchedulingType;  /* Energy Scheduling Type of an Energy Source Default: 0 */
		CIMPP::WindTurbineType3or4Dynamics* WindTurbineType3or4Dynamics;  /* Wind generator Type 3 or 4 dynamics model associated with this energy source. Default: 0 */
		CIMPP::ActivePower activePower;  /* High voltage source active injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for steady state solutions. Default: nullptr */
		CIMPP::Voltage nominalVoltage;  /* Phase-to-phase nominal voltage. Default: nullptr */
		CIMPP::Resistance r;  /* Positive sequence Thevenin resistance. Default: nullptr */
		CIMPP::Resistance r0;  /* Zero sequence Thevenin resistance. Default: nullptr */
		CIMPP::ReactivePower reactivePower;  /* High voltage source reactive injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for steady state solutions. Default: nullptr */
		CIMPP::Resistance rn;  /* Negative sequence Thevenin resistance. Default: nullptr */
		CIMPP::AngleRadians voltageAngle;  /* Phase angle of a-phase open circuit. Default: nullptr */
		CIMPP::Voltage voltageMagnitude;  /* Phase-to-phase open circuit voltage magnitude. Default: nullptr */
		CIMPP::Reactance x;  /* Positive sequence Thevenin reactance. Default: nullptr */
		CIMPP::Reactance x0;  /* Zero sequence Thevenin reactance. Default: nullptr */
		CIMPP::Reactance xn;  /* Negative sequence Thevenin reactance. Default: nullptr */

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

	BaseClass* EnergySource_factory();
}
#endif
