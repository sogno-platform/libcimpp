///////////////////////////////////////////////////////////
//  ActivityRecord.h
//  Implementation of the Class ActivityRecord
///////////////////////////////////////////////////////////

#ifndef ACTIVITYRECORD_H
#define ACTIVITYRECORD_H

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Common/Status.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Records activity for an entity at a point in time; activity may be for an event
		 * that has already occurred or for a planned activity.
		 */
		class ActivityRecord : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			ActivityRecord();
			virtual ~ActivityRecord();
			/**
			 * Date and time this activity record has been created (different from the 'status.
			 * dateTime', which is the time of a status change of the associated object, if
			 * applicable).
			 */
			IEC61970::Base::Domain::DateTime createdDateTime;
			/**
			 * Reason for event resulting in this activity record, typically supplied when
			 * user initiated.
			 */
			IEC61970::Base::Domain::String reason;
			/**
			 * Severity level of event resulting in this activity record.
			 */
			IEC61970::Base::Domain::String severity;
			/**
			 * Information on consequence of event resulting in this activity record.
			 */
			IEC61968::Common::Status status;
			/**
			 * Type of event resulting in this activity record.
			 */
			IEC61970::Base::Domain::String type;

		};

	}

}
#endif // ACTIVITYRECORD_H
