///////////////////////////////////////////////////////////
//  Status.h
//  Implementation of the Class Status
///////////////////////////////////////////////////////////

#ifndef STATUS_H
#define STATUS_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/String.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Current status information relevant to an entity.
		 */
		class Status : public BaseClass
		{

		public:
			Status();
			virtual ~Status();
			/**
			 * Date and time for which status 'value' applies.
			 */
			IEC61970::Base::Domain::DateTime dateTime;
			/**
			 * Reason code or explanation for why an object went to the current status 'value'.
			 */
			IEC61970::Base::Domain::String reason;
			/**
			 * Pertinent information regarding the current 'value', as free form text.
			 */
			IEC61970::Base::Domain::String remark;
			/**
			 * Status value at 'dateTime'; prior status changes may have been kept in
			 * instances of activity records associated with the object to which this status
			 * applies.
			 */
			IEC61970::Base::Domain::String value;

		};

	}

}
#endif // STATUS_H
