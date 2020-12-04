///////////////////////////////////////////////////////////
//  AssetHealthEvent.h
//  Implementation of the Class AssetHealthEvent
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ASSETHEALTHEVENT_H
#define ASSETHEALTHEVENT_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Duration.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/Common/ActivityRecord.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * An asset health-related event that is created by an analytic. The event is a
		 * record of a change in asset health.
		 */
		class AssetHealthEvent : public IEC61968::Common::ActivityRecord
		{

		public:
			AssetHealthEvent();
			virtual ~AssetHealthEvent();
			/**
			 * Recommendation for action.
			 */
			IEC61970::Base::Domain::String actionRecommendation;
			/**
			 * Time horizon for action.
			 */
			IEC61970::Base::Domain::Duration actionTimeline;
			/**
			 * The date and time when the event is effective.
			 */
			IEC61970::Base::Domain::DateTime effectiveDateTime;

		};

	}

}
#endif // ASSETHEALTHEVENT_H
