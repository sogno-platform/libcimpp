///////////////////////////////////////////////////////////
//  PSREvent.h
//  Implementation of the Class PSREvent
///////////////////////////////////////////////////////////

#ifndef PSREVENT_H
#define PSREVENT_H

#include "IEC61968/Operations/PSREventKind.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"
#include "IEC61968/Common/ActivityRecord.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Event recording the change in operational status of a power system resource;
		 * may be for an event that has already occurred or for a planned activity.
		 */
		class PSREvent : public IEC61968::Common::ActivityRecord
		{

		public:
			PSREvent();
			virtual ~PSREvent();
			/**
			 * Kind of event.
			 */
			IEC61968::Operations::PSREventKind kind = IEC61968::Operations::PSREventKind::_undef;
			/**
			 * Power system resource that generated this event.
			 */
			IEC61970::Base::Core::PowerSystemResource *PowerSystemResource;

		};

	}

}
#endif // PSREVENT_H
