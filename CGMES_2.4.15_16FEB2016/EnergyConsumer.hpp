#ifndef EnergyConsumer_H
#define EnergyConsumer_H
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
#include "PerCent.hpp"
#include "ReactivePower.hpp"

namespace CIMPP
{
	class LoadDynamics;
	class LoadResponseCharacteristic;

	/*
	Generic user of energy - a  point of consumption on the power system model.
	*/
	class EnergyConsumer : public ConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		EnergyConsumer();
		~EnergyConsumer() override;

		CIMPP::LoadDynamics* LoadDynamics;  /* Load dynamics model used to describe dynamic behavior of this energy consumer. Default: 0 */
		CIMPP::LoadResponseCharacteristic* LoadResponse;  /* The load response characteristic of this load.  If missing, this load is assumed to be constant power. Default: 0 */
		CIMPP::ActivePower p;  /* Active power of the load. Load sign convention is used, i.e. positive sign means flow out from a node. For voltage dependent loads the value is at rated voltage. Starting value for a steady state solution. Default: nullptr */
		CIMPP::ActivePower pfixed;  /* Active power of the load that is a fixed quantity. Load sign convention is used, i.e. positive sign means flow out from a node. Default: nullptr */
		CIMPP::PerCent pfixedPct;  /* Fixed active power as per cent of load group fixed active power. Load sign convention is used, i.e. positive sign means flow out from a node. Default: nullptr */
		CIMPP::ReactivePower q;  /* Reactive power of the load. Load sign convention is used, i.e. positive sign means flow out from a node. For voltage dependent loads the value is at rated voltage. Starting value for a steady state solution. Default: nullptr */
		CIMPP::ReactivePower qfixed;  /* Reactive power of the load that is a fixed quantity. Load sign convention is used, i.e. positive sign means flow out from a node. Default: nullptr */
		CIMPP::PerCent qfixedPct;  /* Fixed reactive power as per cent of load group fixed reactive power. Load sign convention is used, i.e. positive sign means flow out from a node. Default: nullptr */

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

	BaseClass* EnergyConsumer_factory();
}
#endif
