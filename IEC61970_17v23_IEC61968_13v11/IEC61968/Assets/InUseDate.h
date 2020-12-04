///////////////////////////////////////////////////////////
//  InUseDate.h
//  Implementation of the Class InUseDate
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef INUSEDATE_H
#define INUSEDATE_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Date.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Dates associated with asset 'in use' status. May have multiple in use dates for
		 * this device and a compound type allows a query to return multiple dates.
		 */
		class InUseDate : public BaseClass
		{

		public:
			InUseDate();
			virtual ~InUseDate();
			/**
			 * Date asset was most recently put in use.
			 */
			IEC61970::Base::Domain::Date inUseDate;
			/**
			 * Date of most recent asset transition to not ready for use state.
			 */
			IEC61970::Base::Domain::Date notReadyForUseDate;
			/**
			 * Date of most recent asset transition to ready for use state.
			 */
			IEC61970::Base::Domain::Date readyForUseDate;

		};

	}

}
#endif // INUSEDATE_H
