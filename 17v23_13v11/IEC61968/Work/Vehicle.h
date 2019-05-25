///////////////////////////////////////////////////////////
//  Vehicle.h
//  Implementation of the Class Vehicle
///////////////////////////////////////////////////////////

#ifndef VEHICLE_H
#define VEHICLE_H

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/Length.h"
#include "IEC61968/Work/VehicleUsageKind.h"
#include "IEC61968/Work/WorkAsset.h"

namespace IEC61968
{
	namespace Work
	{
		/**
		 * Vehicle asset.
		 */
		class Vehicle : public IEC61968::Work::WorkAsset
		{

		public:
			Vehicle();
			virtual ~Vehicle();
			/**
			 * Date and time the last odometer reading was recorded.
			 */
			IEC61970::Base::Domain::DateTime odometerReadDateTime;
			/**
			 * Odometer reading of this vehicle as of the 'odometerReadingDateTime'. Refer to
			 * associated ActivityRecords for earlier readings.
			 */
			IEC61970::Base::Domain::Length odometerReading;
			/**
			 * Kind of usage of the vehicle.
			 */
			IEC61968::Work::VehicleUsageKind usageKind = IEC61968::Work::VehicleUsageKind::_undef;

		};

	}

}
#endif // VEHICLE_H
