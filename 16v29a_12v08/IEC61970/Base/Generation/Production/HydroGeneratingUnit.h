///////////////////////////////////////////////////////////
//  HydroGeneratingUnit.h
//  Implementation of the Class HydroGeneratingUnit
///////////////////////////////////////////////////////////

#ifndef HYDROGENERATINGUNIT_H
#define HYDROGENERATINGUNIT_H

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
					IEC61970::Base::Generation::Production::HydroEnergyConversionKind energyConversionCapability = IEC61970::Base::Generation::Production::HydroEnergyConversionKind::_undef;
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
#endif // HYDROGENERATINGUNIT_H
