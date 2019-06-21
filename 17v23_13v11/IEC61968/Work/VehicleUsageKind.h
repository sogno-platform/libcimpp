///////////////////////////////////////////////////////////
//  VehicleUsageKind.h
//  Implementation of the Class VehicleUsageKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef VEHICLEUSAGEKIND_H
#define VEHICLEUSAGEKIND_H

namespace IEC61968
{
	namespace Work
	{
		/**
		 * Usage of a vehicle.
		 */
		enum class VehicleUsageKind
		{
			 _undef = -1, 	crew,
			user,
			contractor,
			other
		};

	}

}
#endif // VEHICLEUSAGEKIND_H
