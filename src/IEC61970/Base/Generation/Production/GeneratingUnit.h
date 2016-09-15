///////////////////////////////////////////////////////////
//  GeneratingUnit.h
//  Implementation of the Class GeneratingUnit
//  Created on:      28-Jan-2016 12:44:55
///////////////////////////////////////////////////////////

#if !defined(EA_A4B9C29B_54A7_4730_8D45_365F5F237B52__INCLUDED_)
#define EA_A4B9C29B_54A7_4730_8D45_365F5F237B52__INCLUDED_

#include <list>

#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/ActivePowerChangeRate.h"
#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61970/Base/Generation/Production/GeneratorControlMode.h"
#include "IEC61970/Base/Generation/Production/GeneratorControlSource.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Generation/Production/Classification.h"
#include "IEC61970/Base/Domain/Money.h"
#include "IEC61970/Base/Generation/Production/GenUnitOpSchedule.h"
#include "IEC61970/Base/Generation/Production/GrossToNetActivePowerCurve.h"
#include "IEC61970/Base/Generation/Production/GenUnitOpCostCurve.h"
#include "IEC61970/Base/Wires/RotatingMachine.h"
#include "IEC61970/Base/Core/Equipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * A single or set of synchronous machines for converting mechanical power into
				 * alternating-current power. For example, individual machines within a set may be
				 * defined for scheduling purposes while a single control signal is derived for
				 * the set. In this case there would be a GeneratingUnit for each member of the
				 * set and an additional GeneratingUnit corresponding to the set.
				 */
				class GeneratingUnit : public IEC61970::Base::Core::Equipment
				{

				public:
					GeneratingUnit();
					virtual ~GeneratingUnit();
					/**
					 * The planned unused capacity (spinning reserve) which can be used to support
					 * emergency load.
					 */
					IEC61970::Base::Domain::ActivePower allocSpinResP;
					/**
					 * The planned unused capacity which can be used to support automatic control
					 * overruns.
					 */
					IEC61970::Base::Domain::ActivePower autoCntrlMarginP;
					/**
					 * For dispatchable units, this value represents the economic active power
					 * basepoint, for units that are not dispatchable, this value represents the fixed
					 * generation value. The value must be between the operating low and high limits.
					 */
					IEC61970::Base::Domain::ActivePower baseP;
					/**
					 * Unit control error deadband. When a unit's desired active power change is less
					 * than this deadband, then no control pulses will be sent to the unit.
					 */
					IEC61970::Base::Domain::ActivePower controlDeadband;
					/**
					 * Pulse high limit which is the largest control pulse that the unit can respond
					 * to.
					 */
					IEC61970::Base::Domain::Seconds controlPulseHigh;
					/**
					 * Pulse low limit which is the smallest control pulse that the unit can respond
					 * to.
					 */
					IEC61970::Base::Domain::Seconds controlPulseLow;
					/**
					 * Unit response rate which specifies the active power change for a control pulse
					 * of one second in the most responsive loading level of the unit.
					 */
					IEC61970::Base::Domain::ActivePowerChangeRate controlResponseRate;
					/**
					 * The efficiency of the unit in converting mechanical energy, from the prime
					 * mover, into electrical energy.
					 */
					IEC61970::Base::Domain::PerCent efficiency;
					/**
					 * The unit control mode.
					 */
					IEC61970::Base::Generation::Production::GeneratorControlMode genControlMode;
					/**
					 * The source of controls for a generating unit.
					 */
					IEC61970::Base::Generation::Production::GeneratorControlSource genControlSource;
					/**
					 * Governor motor position limit.
					 */
					IEC61970::Base::Domain::PU governorMPL;
					/**
					 * Governor Speed Changer Droop.   This is the change in generator power output
					 * divided by the change in frequency normalized by the nominal power of the
					 * generator and the nominal frequency and expressed in percent and negated. A
					 * positive value of speed change droop provides additional generator output upon
					 * a drop in frequency.
					 */
					IEC61970::Base::Domain::PerCent governorSCD;
					/**
					 * High limit for secondary (AGC) control.
					 */
					IEC61970::Base::Domain::ActivePower highControlLimit;
					/**
					 * Default initial active power  which is used to store a powerflow result for the
					 * initial active power for this unit in this network configuration.
					 */
					IEC61970::Base::Domain::ActivePower initialP;
					/**
					 * Generating unit long term economic participation factor.
					 */
					IEC61970::Base::Domain::Float longPF;
					/**
					 * Low limit for secondary (AGC) control.
					 */
					IEC61970::Base::Domain::ActivePower lowControlLimit;
					/**
					 * The normal maximum rate the generating unit active power output can be lowered
					 * by control actions.
					 */
					IEC61970::Base::Domain::ActivePowerChangeRate lowerRampRate;
					/**
					 * Maximum high economic active power limit, that should not exceed the maximum
					 * operating active power limit.
					 */
					IEC61970::Base::Domain::ActivePower maxEconomicP;
					/**
					 * Maximum allowable spinning reserve. Spinning reserve will never be considered
					 * greater than this value regardless of the current operating point.
					 */
					IEC61970::Base::Domain::ActivePower maximumAllowableSpinningReserve;
					/**
					 * This is the maximum operating active power limit the dispatcher can enter for
					 * this unit.
					 */
					IEC61970::Base::Domain::ActivePower maxOperatingP;
					/**
					 * Low economic active power limit that must be greater than or equal to the
					 * minimum operating active power limit.
					 */
					IEC61970::Base::Domain::ActivePower minEconomicP;
					/**
					 * Minimum time interval between unit shutdown and startup.
					 */
					IEC61970::Base::Domain::Seconds minimumOffTime;
					/**
					 * This is the minimum operating active power limit the dispatcher can enter for
					 * this unit.
					 */
					IEC61970::Base::Domain::ActivePower minOperatingP;
					/**
					 * Detail level of the generator model data.
					 */
					IEC61970::Base::Generation::Production::Classification modelDetail;
					/**
					 * The nominal power of the generating unit.  Used to give precise meaning to
					 * percentage based attributes such as the governor speed change droop
					 * (governorSCD attribute).
					 * The attribute shall be a positive value equal or less than RotatingMachine.
					 * ratedS.
					 */
					IEC61970::Base::Domain::ActivePower nominalP;
					/**
					 * Generating unit economic participation factor.
					 */
					IEC61970::Base::Domain::Float normalPF;
					/**
					 * Defined as: 1 / ( 1 - Incremental Transmission Loss); with the Incremental
					 * Transmission Loss expressed as a plus or minus value. The typical range of
					 * penalty factors is (0.9 to 1.1).
					 */
					IEC61970::Base::Domain::Float penaltyFactor;
					/**
					 * The normal maximum rate the generating unit active power output can be raised
					 * by control actions.
					 */
					IEC61970::Base::Domain::ActivePowerChangeRate raiseRampRate;
					/**
					 * The unit's gross rated maximum capacity (book value).
					 */
					IEC61970::Base::Domain::ActivePower ratedGrossMaxP;
					/**
					 * The gross rated minimum generation level which the unit can safely operate at
					 * while delivering power to the transmission grid.
					 */
					IEC61970::Base::Domain::ActivePower ratedGrossMinP;
					/**
					 * The net rated maximum capacity determined by subtracting the auxiliary power
					 * used to operate the internal plant machinery from the rated gross maximum
					 * capacity.
					 */
					IEC61970::Base::Domain::ActivePower ratedNetMaxP;
					/**
					 * Generating unit short term economic participation factor.
					 */
					IEC61970::Base::Domain::Float shortPF;
					/**
					 * The initial startup cost incurred for each start of the GeneratingUnit.
					 */
					IEC61970::Base::Domain::Money startupCost;
					/**
					 * Time it takes to get the unit on-line, from the time that the prime mover
					 * mechanical power is applied.
					 */
					IEC61970::Base::Domain::Seconds startupTime;
					/**
					 * Generating unit economic participation factor.
					 */
					IEC61970::Base::Domain::Float tieLinePF;
					/**
					 * The efficiency of the unit in converting the fuel into electrical energy.
					 */
					IEC61970::Base::Domain::PerCent totalEfficiency;
					/**
					 * The variable cost component of production per unit of ActivePower.
					 */
					IEC61970::Base::Domain::Money variableCost;
					/**
					 * A generating unit may have an operating schedule, indicating the planned
					 * operation of the unit.
					 */
					IEC61970::Base::Generation::Production::GenUnitOpSchedule *GenUnitOpSchedule;
					/**
					 * A generating unit may have a gross active power to net active power curve,
					 * describing the losses and auxiliary power requirements of the unit.
					 */
					std::list<IEC61970::Base::Generation::Production::GrossToNetActivePowerCurve*> GrossToNetActivePowerCurves;
					/**
					 * A generating unit may have one or more cost curves, depending upon fuel mixture
					 * and fuel cost.
					 */
					std::list<IEC61970::Base::Generation::Production::GenUnitOpCostCurve*> GenUnitOpCostCurves;
					/**
					 * A synchronous machine may operate as a generator and as such becomes a member
					 * of a generating unit.
					 */
					std::list<IEC61970::Base::Wires::RotatingMachine*> RotatingMachine;

				};

			}

		}

	}

}
#endif // !defined(EA_A4B9C29B_54A7_4730_8D45_365F5F237B52__INCLUDED_)
