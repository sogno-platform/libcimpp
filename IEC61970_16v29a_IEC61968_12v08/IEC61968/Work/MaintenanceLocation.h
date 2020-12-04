///////////////////////////////////////////////////////////
//  MaintenanceLocation.h
//  Implementation of the Class MaintenanceLocation
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef MAINTENANCELOCATION_H
#define MAINTENANCELOCATION_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Work/WorkLocation.h"

namespace IEC61968
{
	namespace Work
	{
		/**
		 * Location where to perform maintenance work.
		 */
		class MaintenanceLocation : public IEC61968::Work::WorkLocation
		{

		public:
			MaintenanceLocation();
			virtual ~MaintenanceLocation();
			/**
			 * (if applicable) Name, identifier, or description of the block in which work is
			 * to occur.
			 */
			IEC61970::Base::Domain::String block;
			/**
			 * (if applicable) Name, identifier, or description of the lot in which work is to
			 * occur.
			 */
			IEC61970::Base::Domain::String lot;
			/**
			 * The names of streets at the nearest intersection to work area.
			 */
			IEC61970::Base::Domain::String nearestIntersection;
			/**
			 * (if applicable) Name, identifier, or description of the subdivision in which
			 * work is to occur.
			 */
			IEC61970::Base::Domain::String subdivision;

		};

	}

}
#endif // MAINTENANCELOCATION_H
