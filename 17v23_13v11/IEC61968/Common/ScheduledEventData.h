///////////////////////////////////////////////////////////
//  ScheduledEventData.h
//  Implementation of the Class ScheduledEventData
///////////////////////////////////////////////////////////

#ifndef SCHEDULEDEVENTDATA_H
#define SCHEDULEDEVENTDATA_H

#include "BaseClass.h"
#include <list>

#include "IEC61970/Base/Domain/DateTimeInterval.h"
#include "IEC61968/Common/Status.h"
#include "IEC61968/Assets/InspectionDataSet.h"
#include "IEC61968/Common/ScheduledEvent.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Schedule parameters for an activity that is to occur, is occurring, or has
		 * completed.
		 */
		class ScheduledEventData : public BaseClass
		{

		public:
			ScheduledEventData();
			virtual ~ScheduledEventData();
			/**
			 * Estimated date and time for activity execution (with earliest possibility of
			 * activity initiation and latest possibility of activity completion).
			 */
			IEC61970::Base::Domain::DateTimeInterval estimatedWindow;
			/**
			 * Requested date and time interval for activity execution.
			 */
			IEC61970::Base::Domain::DateTimeInterval requestedWindow;
			IEC61968::Common::Status status;
			IEC61968::Assets::InspectionDataSet *InspectionDataSet;
			/**
			 * All scheduled events with this specification.
			 */
			std::list<IEC61968::Common::ScheduledEvent*> ScheduledEvents;

		};

	}

}
#endif // SCHEDULEDEVENTDATA_H
