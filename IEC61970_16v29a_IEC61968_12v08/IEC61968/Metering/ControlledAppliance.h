///////////////////////////////////////////////////////////
//  ControlledAppliance.h
//  Implementation of the Class ControlledAppliance
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef CONTROLLEDAPPLIANCE_H
#define CONTROLLEDAPPLIANCE_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Boolean.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Appliance controlled with a PAN device control.
		 */
		class ControlledAppliance : public BaseClass
		{

		public:
			ControlledAppliance();
			virtual ~ControlledAppliance();
			/**
			 * True if the appliance is an electric vehicle.
			 */
			IEC61970::Base::Domain::Boolean isElectricVehicle;
			/**
			 * True if the appliance is exterior lighting.
			 */
			IEC61970::Base::Domain::Boolean isExteriorLighting;
			/**
			 * True if the appliance is a generation system.
			 */
			IEC61970::Base::Domain::Boolean isGenerationSystem;
			/**
			 * True if the appliance is HVAC compressor or furnace.
			 */
			IEC61970::Base::Domain::Boolean isHvacCompressorOrFurnace;
			/**
			 * True if the appliance is interior lighting.
			 */
			IEC61970::Base::Domain::Boolean isInteriorLighting;
			/**
			 * True if the appliance is an irrigation pump.
			 */
			IEC61970::Base::Domain::Boolean isIrrigationPump;
			/**
			 * True if the appliance is managed commercial or industrial load.
			 */
			IEC61970::Base::Domain::Boolean isManagedCommercialIndustrialLoad;
			/**
			 * True if the appliance is a pool, pump, spa or jacuzzi.
			 */
			IEC61970::Base::Domain::Boolean isPoolPumpSpaJacuzzi;
			/**
			 * True if the appliance is a simple miscellaneous load.
			 */
			IEC61970::Base::Domain::Boolean isSimpleMiscLoad;
			/**
			 * True if the appliance is a smart appliance.
			 */
			IEC61970::Base::Domain::Boolean isSmartAppliance;
			/**
			 * True if the appliance is a stip or baseboard heater.
			 */
			IEC61970::Base::Domain::Boolean isStripAndBaseboardHeater;
			/**
			 * True if the appliance is a water heater.
			 */
			IEC61970::Base::Domain::Boolean isWaterHeater;

		};

	}

}
#endif // CONTROLLEDAPPLIANCE_H
