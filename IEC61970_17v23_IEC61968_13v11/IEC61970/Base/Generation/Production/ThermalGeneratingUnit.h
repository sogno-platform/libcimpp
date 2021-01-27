///////////////////////////////////////////////////////////
//  ThermalGeneratingUnit.h
//  Implementation of the Class ThermalGeneratingUnit
///////////////////////////////////////////////////////////

#ifndef THERMALGENERATINGUNIT_H
#define THERMALGENERATINGUNIT_H

#include <list>

#include "IEC61970/Base/Generation/Production/CostPerHeatUnit.h"
#include "IEC61970/Base/Generation/Production/HeatRateCurve.h"
#include "IEC61970/Base/Generation/Production/FuelAllocationSchedule.h"
#include "IEC61970/Base/Generation/Production/StartupModel.h"
#include "IEC61970/Base/Generation/Production/EmissionCurve.h"
#include "IEC61970/Base/Generation/Production/ShutdownCurve.h"
#include "IEC61970/Base/Generation/Production/IncrementalHeatRateCurve.h"
#include "IEC61970/Base/Generation/Production/GeneratingUnit.h"
#include "IEC61970/Base/Generation/Production/EmissionAccount.h"
#include "IEC61970/Base/Generation/Production/HeatInputCurve.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * A generating unit whose prime mover could be a steam turbine, combustion
				 * turbine, or diesel engine.
				 */
				class ThermalGeneratingUnit : public IEC61970::Base::Generation::Production::GeneratingUnit
				{

				public:
					ThermalGeneratingUnit();
					virtual ~ThermalGeneratingUnit();
					/**
					 * Operating and maintenance cost for the thermal unit.
					 */
					IEC61970::Base::Generation::Production::CostPerHeatUnit oMCost;
					/**
					 * A thermal generating unit may have a heat rate curve.
					 */
					IEC61970::Base::Generation::Production::HeatRateCurve *HeatRateCurve;
					/**
					 * A thermal generating unit may have one or more fuel allocation schedules.
					 */
					std::list<IEC61970::Base::Generation::Production::FuelAllocationSchedule*> FuelAllocationSchedules;
					/**
					 * A thermal generating unit may have a startup model.
					 */
					IEC61970::Base::Generation::Production::StartupModel *StartupModel;
					/**
					 * A thermal generating unit may have  one or more emission curves.
					 */
					std::list<IEC61970::Base::Generation::Production::EmissionCurve*> EmissionCurves;
					/**
					 * A thermal generating unit may have a shutdown curve.
					 */
					IEC61970::Base::Generation::Production::ShutdownCurve *ShutdownCurve;
					/**
					 * A thermal generating unit may have an incremental heat rate curve.
					 */
					IEC61970::Base::Generation::Production::IncrementalHeatRateCurve *IncrementalHeatRateCurve;
					/**
					 * A thermal generating unit may have one or more emission allowance accounts.
					 */
					std::list<IEC61970::Base::Generation::Production::EmissionAccount*> EmmissionAccounts;
					/**
					 * A thermal generating unit may have a heat input curve.
					 */
					IEC61970::Base::Generation::Production::HeatInputCurve *HeatInputCurve;

				};

			}

		}

	}

}
#endif // THERMALGENERATINGUNIT_H
