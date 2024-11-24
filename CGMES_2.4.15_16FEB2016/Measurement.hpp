#ifndef Measurement_H
#define Measurement_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "PhaseCode.hpp"
#include "String.hpp"
#include "UnitMultiplier.hpp"
#include "UnitSymbol.hpp"

namespace CIMPP
{
	class ACDCTerminal;
	class PowerSystemResource;

	/*
	A Measurement represents any measured, calculated or non-measured non-calculated quantity. Any piece of equipment may contain Measurements, e.g. a substation may have temperature measurements and door open indications, a transformer may have oil temperature and tank pressure measurements, a bay may contain a number of power flow measurements and a Breaker may contain a switch status measurement.  The PSR - Measurement association is intended to capture this use of Measurement and is included in the naming hierarchy based on EquipmentContainer. The naming hierarchy typically has Measurements as leafs, e.g. Substation-VoltageLevel-Bay-Switch-Measurement. Some Measurements represent quantities related to a particular sensor location in the network, e.g. a voltage transformer (PT) at a busbar or a current transformer (CT) at the bar between a breaker and an isolator. The sensing position is not captured in the PSR - Measurement association. Instead it is captured by the Measurement - Terminal association that is used to define the sensing location in the network topology. The location is defined by the connection of the Terminal to ConductingEquipment.  If both a Terminal and PSR are associated, and the PSR is of type ConductingEquipment, the associated Terminal should belong to that ConductingEquipment instance. When the sensor location is needed both Measurement-PSR and Measurement-Terminal are used. The Measurement-Terminal association is never used alone.
	*/
	class Measurement : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		Measurement();
		~Measurement() override;

		CIMPP::PowerSystemResource* PowerSystemResource;  /* The measurements associated with this power system resource. Default: 0 */
		CIMPP::ACDCTerminal* Terminal;  /* One or more measurements may be associated with a terminal in the network. Default: 0 */
		CIMPP::String measurementType;  /* Specifies the type of measurement.  For example, this specifies if the measurement represents an indoor temperature, outdoor temperature, bus voltage, line flow, etc. Default: '' */
		CIMPP::PhaseCode phases;  /* Indicates to which phases the measurement applies and avoids the need to use `measurementType` to also encode phase information (which would explode the types). The phase information in Measurement, along with `measurementType` and `phases` uniquely defines a Measurement for a device, based on normal network phase. Their meaning will not change when the computed energizing phasing is changed due to jumpers or other reasons. If the attribute is missing three phases (ABC) shall be assumed. Default: 0 */
		CIMPP::UnitMultiplier unitMultiplier;  /* The unit multiplier of the measured quantity. Default: 0 */
		CIMPP::UnitSymbol unitSymbol;  /* The unit of measure of the measured quantity. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* Measurement_factory();
}
#endif
