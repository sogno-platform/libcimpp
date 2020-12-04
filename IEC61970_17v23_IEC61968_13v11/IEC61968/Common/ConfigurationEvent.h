///////////////////////////////////////////////////////////
//  ConfigurationEvent.h
//  Implementation of the Class ConfigurationEvent
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef CONFIGURATIONEVENT_H
#define CONFIGURATIONEVENT_H

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Faults/FaultCauseType.h"
#include "IEC61968/Common/ActivityRecord.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Used to report details on creation, change or deletion of an entity or its
		 * configuration.
		 */
		class ConfigurationEvent : public IEC61968::Common::ActivityRecord
		{

		public:
			ConfigurationEvent();
			virtual ~ConfigurationEvent();
			/**
			 * Date and time this event has or will become effective.
			 */
			IEC61970::Base::Domain::DateTime effectiveDateTime;
			/**
			 * Source/initiator of modification.
			 */
			IEC61970::Base::Domain::String modifiedBy;
			/**
			 * Free text remarks.
			 */
			IEC61970::Base::Domain::String remark;
			IEC61970::Base::Faults::FaultCauseType *FaultCauseType;

		};

	}

}
#endif // CONFIGURATIONEVENT_H
