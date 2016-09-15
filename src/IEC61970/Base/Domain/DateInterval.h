///////////////////////////////////////////////////////////
//  DateInterval.h
//  Implementation of the Class DateInterval
//  Created on:      28-Jan-2016 12:43:52
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_81734E17_BC16_4701_999A_87E0486E7FBB__INCLUDED_)
#define EA_81734E17_BC16_4701_999A_87E0486E7FBB__INCLUDED_

#include "IEC61970/Base/Domain/Date.h"
#include "BaseClass.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * Interval between two dates.
			 */
			class DateInterval : public BaseClass
			{

			public:
				DateInterval();
				virtual ~DateInterval();
				/**
				 * End date of this interval.
				 */
				IEC61970::Base::Domain::Date end;
				/**
				 * Start date of this interval.
				 */
				IEC61970::Base::Domain::Date start;

			};

		}

	}

}
#endif // !defined(EA_81734E17_BC16_4701_999A_87E0486E7FBB__INCLUDED_)
