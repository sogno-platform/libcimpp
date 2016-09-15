///////////////////////////////////////////////////////////
//  StartupModel.h
//  Implementation of the Class StartupModel
//  Created on:      28-Jan-2016 12:46:45
///////////////////////////////////////////////////////////

#if !defined(EA_2B092EBF_139F_4aaf_8029_399D276E6B81__INCLUDED_)
#define EA_2B092EBF_139F_4aaf_8029_399D276E6B81__INCLUDED_

#include "IEC61970/Base/Domain/CostRate.h"
#include "IEC61970/Base/Generation/Production/HeatRate.h"
#include "IEC61970/Base/Domain/CostPerEnergyUnit.h"
#include "IEC61970/Base/Domain/Hours.h"
#include "IEC61970/Base/Domain/Money.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Generation/Production/StartRampCurve.h"
#include "IEC61970/Base/Generation/Production/StartIgnFuelCurve.h"
#include "IEC61970/Base/Generation/Production/StartMainFuelCurve.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * Unit start up characteristics depending on how long the unit has been off line.
				 */
				class StartupModel : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					StartupModel();
					virtual ~StartupModel();
					/**
					 * Fixed maintenance cost.
					 */
					IEC61970::Base::Domain::CostRate fixedMaintCost;
					/**
					 * The amount of heat input per time uint required for hot standby operation.
					 */
					IEC61970::Base::Generation::Production::HeatRate hotStandbyHeat;
					/**
					 * Incremental maintenance cost.
					 */
					IEC61970::Base::Domain::CostPerEnergyUnit incrementalMaintCost;
					/**
					 * The minimum number of hours the unit must be down before restart.
					 */
					IEC61970::Base::Domain::Hours minimumDownTime;
					/**
					 * The minimum number of hours the unit must be operating before being allowed to
					 * shut down.
					 */
					IEC61970::Base::Domain::Hours minimumRunTime;
					/**
					 * The opportunity cost associated with the return in monetary unit. This
					 * represents the restart's "share" of the unit depreciation and risk of an event
					 * which would damage the unit.
					 */
					IEC61970::Base::Domain::Money riskFactorCost;
					/**
					 * Total miscellaneous start up costs.
					 */
					IEC61970::Base::Domain::Money startupCost;
					/**
					 * The date and time of the most recent generating unit startup.
					 */
					IEC61970::Base::Domain::DateTime startupDate;
					/**
					 * Startup priority within control area where lower numbers indicate higher
					 * priorities.  More than one unit in an area may be assigned the same priority.
					 */
					IEC61970::Base::Domain::Integer startupPriority;
					/**
					 * The unit's auxiliary active power consumption to maintain standby mode.
					 */
					IEC61970::Base::Domain::ActivePower stbyAuxP;
					/**
					 * The unit's startup model may have a startup ramp curve.
					 */
					IEC61970::Base::Generation::Production::StartRampCurve *StartRampCurve;
					/**
					 * The unit's startup model may have a startup ignition fuel curve.
					 */
					IEC61970::Base::Generation::Production::StartIgnFuelCurve *StartIgnFuelCurve;
					/**
					 * The unit's startup model may have a startup main fuel curve.
					 */
					IEC61970::Base::Generation::Production::StartMainFuelCurve *StartMainFuelCurve;

				};

			}

		}

	}

}
#endif // !defined(EA_2B092EBF_139F_4aaf_8029_399D276E6B81__INCLUDED_)
