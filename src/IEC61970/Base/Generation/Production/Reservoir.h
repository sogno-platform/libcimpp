///////////////////////////////////////////////////////////
//  Reservoir.h
//  Implementation of the Class Reservoir
//  Created on:      28-Jan-2016 12:46:34
///////////////////////////////////////////////////////////

#if !defined(EA_E6814A9E_8ED7_4b73_8AFB_DC1FE196F9CC__INCLUDED_)
#define EA_E6814A9E_8ED7_4b73_8AFB_DC1FE196F9CC__INCLUDED_

#include <list>

#include "IEC61970/Base/Domain/Volume.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/WaterLevel.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/Length.h"
#include "IEC61970/Base/Generation/Production/LevelVsVolumeCurve.h"
#include "IEC61970/Base/Generation/Production/InflowForecast.h"
#include "IEC61970/Base/Generation/Production/TargetLevelSchedule.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * A water storage facility within a hydro system, including: ponds, lakes,
				 * lagoons, and rivers. The storage is usually behind some type of dam.
				 */
				class Reservoir : public IEC61970::Base::Core::PowerSystemResource
				{

				public:
					Reservoir();
					virtual ~Reservoir();
					/**
					 * Storage volume between the full supply level and the normal minimum operating
					 * level.
					 */
					IEC61970::Base::Domain::Volume activeStorageCapacity;
					/**
					 * The reservoir's energy storage rating in energy for given head conditions.
					 */
					IEC61970::Base::Domain::Float energyStorageRating;
					/**
					 * Full supply level, above which water will spill. This can be the spillway crest
					 * level or the top of closed gates.
					 */
					IEC61970::Base::Domain::WaterLevel fullSupplyLevel;
					/**
					 * Total capacity of reservoir.
					 */
					IEC61970::Base::Domain::Volume grossCapacity;
					/**
					 * Normal minimum operating level below which the penstocks will draw air.
					 */
					IEC61970::Base::Domain::WaterLevel normalMinOperateLevel;
					/**
					 * River outlet works for riparian right releases or other purposes.
					 */
					IEC61970::Base::Domain::String riverOutletWorks;
					/**
					 * The spillway water travel delay to the next downstream reservoir.
					 */
					IEC61970::Base::Domain::Seconds spillTravelDelay;
					/**
					 * The flow capacity of the spillway in cubic meters per second.
					 */
					IEC61970::Base::Domain::Float spillwayCapacity;
					/**
					 * The length of the spillway crest.
					 */
					IEC61970::Base::Domain::Length spillwayCrestLength;
					/**
					 * Spillway crest level above which water will spill.
					 */
					IEC61970::Base::Domain::WaterLevel spillwayCrestLevel;
					/**
					 * Type of spillway gate, including parameters.
					 */
					IEC61970::Base::Domain::String spillWayGateType;
					/**
					 * A reservoir may spill into a downstream reservoir.
					 */
					std::list<IEC61970::Base::Generation::Production::Reservoir*> SpillsIntoReservoirs;
					/**
					 * A reservoir may have a level versus volume relationship.
					 */
					std::list<IEC61970::Base::Generation::Production::LevelVsVolumeCurve*> LevelVsVolumeCurves;
					/**
					 * A reservoir may have a "natural" inflow forecast.
					 */
					std::list<IEC61970::Base::Generation::Production::InflowForecast*> InflowForecasts;
					/**
					 * A reservoir may have a water level target schedule.
					 */
					IEC61970::Base::Generation::Production::TargetLevelSchedule *TargetLevelSchedule;

				};

			}

		}

	}

}
#endif // !defined(EA_E6814A9E_8ED7_4b73_8AFB_DC1FE196F9CC__INCLUDED_)
