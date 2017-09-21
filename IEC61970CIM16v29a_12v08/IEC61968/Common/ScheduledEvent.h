///////////////////////////////////////////////////////////
//  ScheduledEvent.h
//  Implementation of the Class ScheduledEvent
///////////////////////////////////////////////////////////

#ifndef SCHEDULEDEVENT_H
#define SCHEDULEDEVENT_H

#include <list>

#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61968/Common/Status.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Assets/Asset.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * An event to trigger one or more activities, such as reading a meter,
		 * recalculating a bill, requesting work, when generating units must be scheduled
		 * for maintenance, when a transformer is scheduled to be refurbished, etc.
		 */
		class ScheduledEvent : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			ScheduledEvent();
			virtual ~ScheduledEvent();
			/**
			 * Duration of the scheduled event, for example, the time to ramp between values.
			 */
			IEC61970::Base::Domain::Seconds duration;
			IEC61968::Common::Status status;
			/**
			 * Type of scheduled event.
			 */
			IEC61970::Base::Domain::String type;
			std::list<IEC61968::Assets::Asset*> Assets;

		};

	}

}
#endif // SCHEDULEDEVENT_H
