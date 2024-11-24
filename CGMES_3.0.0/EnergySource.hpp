#ifndef EnergySource_H
#define EnergySource_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "EnergyConnection.hpp"
#include "BaseClassDefiner.hpp"
#include "ActivePower.hpp"
#include "AngleRadians.hpp"
#include "Reactance.hpp"
#include "ReactivePower.hpp"
#include "Resistance.hpp"
#include "Voltage.hpp"

namespace CIMPP
{
	class EnergySchedulingType;

	/*
	A generic equivalent for an energy supplier on a transmission or distribution voltage level.
	*/
	class EnergySource : public EnergyConnection
	{
	public:
		/* constructor initialising all attributes to null */
		EnergySource();
		~EnergySource() override;

		CIMPP::EnergySchedulingType* EnergySchedulingType;  /* Energy Scheduling Type of an Energy Source. Default: 0 */
		CIMPP::ActivePower activePower;  /* High voltage source active injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for steady state solutions. Default: nullptr */
		CIMPP::Voltage nominalVoltage;  /* Phase-to-phase nominal voltage. Default: nullptr */
		CIMPP::ActivePower pMax;  /* This is the maximum active power that can be produced by the source. Load sign convention is used, i.e. positive sign means flow out from a TopologicalNode (bus) into the conducting equipment. Default: nullptr */
		CIMPP::ActivePower pMin;  /* This is the minimum active power that can be produced by the source. Load sign convention is used, i.e. positive sign means flow out from a TopologicalNode (bus) into the conducting equipment. Default: nullptr */
		CIMPP::Resistance r;  /* Positive sequence Thevenin resistance. Default: nullptr */
		CIMPP::Resistance r0;  /* Zero sequence Thevenin resistance. Default: nullptr */
		CIMPP::ReactivePower reactivePower;  /* High voltage source reactive injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for steady state solutions. Default: nullptr */
		CIMPP::Resistance rn;  /* Negative sequence Thevenin resistance. Default: nullptr */
		CIMPP::AngleRadians voltageAngle;  /* Phase angle of a-phase open circuit used when voltage characteristics need to be imposed at the node associated with the terminal of the energy source, such as when voltages and angles from the transmission level are used as input to the distribution network. The attribute shall be a positive value or zero. Default: nullptr */
		CIMPP::Voltage voltageMagnitude;  /* Phase-to-phase open circuit voltage magnitude used when voltage characteristics need to be imposed at the node associated with the terminal of the energy source, such as when voltages and angles from the transmission level are used as input to the distribution network. The attribute shall be a positive value or zero. Default: nullptr */
		CIMPP::Reactance x;  /* Positive sequence Thevenin reactance. Default: nullptr */
		CIMPP::Reactance x0;  /* Zero sequence Thevenin reactance. Default: nullptr */
		CIMPP::Reactance xn;  /* Negative sequence Thevenin reactance. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* EnergySource_factory();
}
#endif
