///////////////////////////////////////////////////////////
//  EndDeviceEventType.h
//  Implementation of the Class EndDeviceEventType
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ENDDEVICEEVENTTYPE_H
#define ENDDEVICEEVENTTYPE_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Detailed description for an event produced by an end device. Values in
		 * attributes allow for creation of recommended codes to be used for identifying
		 * end device events as follows: <type>.<domain>.<subDomain>.<eventOrAction>.
		 */
		class EndDeviceEventType : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			EndDeviceEventType();
			virtual ~EndDeviceEventType();
			/**
			 * High-level nature of the event. By properly classifying events by a small set
			 * of domain codes, a system can more easily run reports based on the types of
			 * events that have occurred or been received.
			 */
			IEC61970::Base::Domain::String domain;
			/**
			 * The most specific part of this event type. It is mainly in the form of a verb
			 * that gives action to the event that just occurred.
			 */
			IEC61970::Base::Domain::String eventOrAction;
			/**
			 * More specific nature of the event, as a further sub-categorisation of 'domain'.
			 */
			IEC61970::Base::Domain::String subDomain;
			/**
			 * Type of physical device from which the event was created. A value of zero (0)
			 * can be used when the source is unknown.
			 */
			IEC61970::Base::Domain::String type;

		};

	}

}
#endif // ENDDEVICEEVENTTYPE_H
