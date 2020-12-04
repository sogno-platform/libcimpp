///////////////////////////////////////////////////////////
//  LineDetail.h
//  Implementation of the Class LineDetail
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef LINEDETAIL_H
#define LINEDETAIL_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Money.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/String.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * Details on an amount line, with rounding, date and note.
		 */
		class LineDetail : public BaseClass
		{

		public:
			LineDetail();
			virtual ~LineDetail();
			/**
			 * Amount for this line item.
			 */
			IEC61970::Base::Domain::Money amount;
			/**
			 * Date and time when this line was created in the application process.
			 */
			IEC61970::Base::Domain::DateTime dateTime;
			/**
			 * Free format note relevant to this line.
			 */
			IEC61970::Base::Domain::String note;
			/**
			 * Totalised monetary value of all errors due to process rounding or truncating
			 * that is not reflected in 'amount'.
			 */
			IEC61970::Base::Domain::Money rounding;

		};

	}

}
#endif // LINEDETAIL_H
