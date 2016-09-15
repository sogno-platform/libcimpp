///////////////////////////////////////////////////////////
//  HydroGeneratingUnit.h
//  Implementation of the Class HydroGeneratingUnit
//  Created on:      28-Jan-2016 12:45:20
///////////////////////////////////////////////////////////

#if !defined(EA_18BAE2B9_17E1_4c46_8D07_4D8C1A6DAA0A__INCLUDED_)
#define EA_18BAE2B9_17E1_4c46_8D07_4D8C1A6DAA0A__INCLUDED_

#include <list>

#include "IEC61970/Base/Generation/Production/HydroEnergyConversionKind.h"
#include "IEC61970/Base/Domain/CostPerVolume.h"
#include "IEC61970/Base/Generation/Production/TailbayLossCurve.h"
#include "IEC61970/Base/Generation/Production/GeneratingUnit.h"
#include "IEC61970/Base/Generation/Production/HydroGeneratingEfficiencyCurve.h"
#include "IEC61970/Base/Generation/Production/PenstockLossCurve.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * A generating unit whose prime mover is a hydraulic turbine (e.g., Francis,
				 * Pelton, Kaplan).
				 */
				class HydroGeneratingUnit : public IEC61970::Base::Generation::Production::GeneratingUnit
				{

				public:
					HydroGeneratingUnit();
					virtual ~HydroGeneratingUnit();
					/**
					 * Energy conversion capability for generating.
					 */
					IEC61970::Base::Generation::Production::HydroEnergyConversionKind energyConversionCapability;
					/**
					 * The equivalent cost of water that drives the hydro turbine.
					 */
					IEC61970::Base::Domain::CostPerVolume hydroUnitWaterCost;
					/**
					 * A hydro generating unit has a tailbay loss curve.
					 */
					std::list<IEC61970::Base::Generation::Production::TailbayLossCurve*> TailbayLossCurve;
					/**
					 * A hydro generating unit has an efficiency curve.
					 */
					std::list<IEC61970::Base::Generation::Production::HydroGeneratingEfficiencyCurve*> HydroGeneratingEfficiencyCurves;
					/**
					 * A hydro generating unit has a penstock loss curve.
					 */
					IEC61970::Base::Generation::Production::PenstockLossCurve *PenstockLossCurve;

				};

			}

		}

	}

}
#endif // !defined(EA_18BAE2B9_17E1_4c46_8D07_4D8C1A6DAA0A__INCLUDED_)
