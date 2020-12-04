///////////////////////////////////////////////////////////
//  HydroPowerPlant.h
//  Implementation of the Class HydroPowerPlant
///////////////////////////////////////////////////////////

#ifndef HYDROPOWERPLANT_H
#define HYDROPOWERPLANT_H

#include <list>

#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Generation/Production/HydroPlantStorageKind.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/VolumeFlowRate.h"
#include "IEC61970/Base/Domain/Length.h"
#include "IEC61970/Base/Domain/WaterLevel.h"
#include "IEC61970/Base/Generation/Production/HydroPump.h"
#include "IEC61970/Base/Generation/Production/Reservoir.h"
#include "IEC61970/Base/Generation/Production/HydroGeneratingUnit.h"
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
				 * A hydro power station which can generate or pump. When generating, the
				 * generator turbines receive water from an upper reservoir. When pumping, the
				 * pumps receive their water from a lower reservoir.
				 */
				class HydroPowerPlant : public IEC61970::Base::Core::PowerSystemResource
				{

				public:
					HydroPowerPlant();
					virtual ~HydroPowerPlant();
					/**
					 * Water travel delay from tailbay to next downstream hydro power station.
					 */
					IEC61970::Base::Domain::Seconds dischargeTravelDelay;
					/**
					 * The hydro plant's generating rating active power for rated head conditions.
					 */
					IEC61970::Base::Domain::ActivePower genRatedP;
					/**
					 * The type of hydro power plant water storage.
					 */
					IEC61970::Base::Generation::Production::HydroPlantStorageKind hydroPlantStorageType = IEC61970::Base::Generation::Production::HydroPlantStorageKind::_undef;
					/**
					 * Type and configuration of hydro plant penstock(s).
					 */
					IEC61970::Base::Domain::String penstockType;
					/**
					 * Total plant discharge capacity.
					 */
					IEC61970::Base::Domain::VolumeFlowRate plantDischargeCapacity;
					/**
					 * The plant's rated gross head.
					 */
					IEC61970::Base::Domain::Length plantRatedHead;
					/**
					 * The hydro plant's pumping rating active power for rated head conditions.
					 */
					IEC61970::Base::Domain::ActivePower pumpRatedP;
					/**
					 * A code describing the type (or absence) of surge tank that is associated with
					 * the hydro power plant.
					 */
					IEC61970::Base::Domain::String surgeTankCode;
					/**
					 * The level at which the surge tank spills.
					 */
					IEC61970::Base::Domain::WaterLevel surgeTankCrestLevel;
					/**
					 * The hydro pump may be a member of a pumped storage plant or a pump for
					 * distributing water.
					 */
					std::list<IEC61970::Base::Generation::Production::HydroPump*> HydroPumps;
					/**
					 * Generators discharge water to or pumps are supplied water from a downstream
					 * reservoir.
					 */
					IEC61970::Base::Generation::Production::Reservoir *Reservoir;
					/**
					 * Generators are supplied water from or pumps discharge water to an upstream
					 * reservoir.
					 */
					IEC61970::Base::Generation::Production::Reservoir *GenSourcePumpDischargeReservoir;
					/**
					 * The hydro generating unit belongs to a hydro power plant.
					 */
					std::list<IEC61970::Base::Generation::Production::HydroGeneratingUnit*> HydroGeneratingUnits;

				};

			}

		}

	}

}
#endif // HYDROPOWERPLANT_H
