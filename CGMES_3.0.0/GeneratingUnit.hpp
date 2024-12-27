#ifndef GeneratingUnit_H
#define GeneratingUnit_H
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
#include "ActivePower.hpp"
#include "Float.hpp"
#include "GeneratorControlSource.hpp"
#include "Money.hpp"
#include "PerCent.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class ControlAreaGeneratingUnit;
	class GrossToNetActivePowerCurve;
	class RotatingMachine;

	/*
	A single or set of synchronous machines for converting mechanical power into alternating-current power. For example, individual machines within a set may be defined for scheduling purposes while a single control signal is derived for the set. In this case there would be a GeneratingUnit for each member of the set and an additional GeneratingUnit corresponding to the set.
	*/
	class GeneratingUnit : public Equipment
	{
	public:
		/* constructor initialising all attributes to null */
		GeneratingUnit();
		~GeneratingUnit() override;

		std::list<CIMPP::ControlAreaGeneratingUnit*> ControlAreaGeneratingUnit;  /* ControlArea specifications for this generating unit. Default: 0 */
		std::list<CIMPP::GrossToNetActivePowerCurve*> GrossToNetActivePowerCurves;  /* A generating unit may have a gross active power to net active power curve, describing the losses and auxiliary power requirements of the unit. Default: 0 */
		std::list<CIMPP::RotatingMachine*> RotatingMachine;  /* A synchronous machine may operate as a generator and as such becomes a member of a generating unit. Default: 0 */
		CIMPP::GeneratorControlSource genControlSource;  /* The source of controls for a generating unit.  Defines the control status of the generating unit. Default: 0 */
		CIMPP::PerCent governorSCD;  /* Governor Speed Changer Droop.   This is the change in generator power output divided by the change in frequency normalized by the nominal power of the generator and the nominal frequency and expressed in percent and negated. A positive value of speed change droop provides additional generator output upon a drop in frequency. Default: nullptr */
		CIMPP::Float longPF;  /* Generating unit long term economic participation factor. Default: 0.0 */
		CIMPP::ActivePower maxOperatingP;  /* This is the maximum operating active power limit the dispatcher can enter for this unit. Default: nullptr */
		CIMPP::ActivePower maximumAllowableSpinningReserve;  /* Maximum allowable spinning reserve. Spinning reserve will never be considered greater than this value regardless of the current operating point. Default: nullptr */
		CIMPP::ActivePower minOperatingP;  /* This is the minimum operating active power limit the dispatcher can enter for this unit. Default: nullptr */
		CIMPP::ActivePower nominalP;  /* The nominal power of the generating unit.  Used to give precise meaning to percentage based attributes such as the governor speed change droop (governorSCD attribute). The attribute shall be a positive value equal to or less than RotatingMachine.ratedS. Default: nullptr */
		CIMPP::Float normalPF;  /* Generating unit economic participation factor.  The sum of the participation factors across generating units does not have to sum to one.  It is used for representing distributed slack participation factor. The attribute shall be a positive value or zero. Default: 0.0 */
		CIMPP::ActivePower ratedGrossMaxP;  /* The unit`s gross rated maximum capacity (book value). The attribute shall be a positive value. Default: nullptr */
		CIMPP::ActivePower ratedGrossMinP;  /* The gross rated minimum generation level which the unit can safely operate at while delivering power to the transmission grid. The attribute shall be a positive value. Default: nullptr */
		CIMPP::ActivePower ratedNetMaxP;  /* The net rated maximum capacity determined by subtracting the auxiliary power used to operate the internal plant machinery from the rated gross maximum capacity. The attribute shall be a positive value. Default: nullptr */
		CIMPP::Float shortPF;  /* Generating unit short term economic participation factor. Default: 0.0 */
		CIMPP::Money startupCost;  /* The initial startup cost incurred for each start of the GeneratingUnit. Default: nullptr */
		CIMPP::Seconds startupTime;  /* Time it takes to get the unit on-line, from the time that the prime mover mechanical power is applied. Default: nullptr */
		CIMPP::PerCent totalEfficiency;  /* The efficiency of the unit in converting the fuel into electrical energy. Default: nullptr */
		CIMPP::Money variableCost;  /* The variable cost component of production per unit of ActivePower. Default: nullptr */

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

	BaseClass* GeneratingUnit_factory();
}
#endif
