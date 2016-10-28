///////////////////////////////////////////////////////////
//  TimeInterval.h
//  Implementation of the Class TimeInterval
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef TIMEINTERVAL_H
#define TIMEINTERVAL_H

#include "IEC61970/Base/Domain/Time.h"
#include "BaseClass.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * Interval between two times.
			 */
			class TimeInterval : public BaseClass
			{

			public:
				TimeInterval();
				virtual ~TimeInterval();
				/**
				 * End time of this interval.
				 */
				IEC61970::Base::Domain::Time end;
				/**
				 * Start time of this interval.
				 */
				IEC61970::Base::Domain::Time start;

			};

		}

	}

}
#endif // TIMEINTERVAL_H
