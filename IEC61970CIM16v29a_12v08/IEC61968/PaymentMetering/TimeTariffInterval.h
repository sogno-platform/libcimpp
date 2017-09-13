///////////////////////////////////////////////////////////
//  TimeTariffInterval.h
//  Implementation of the Class TimeTariffInterval
///////////////////////////////////////////////////////////

#ifndef TIMETARIFFINTERVAL_H
#define TIMETARIFFINTERVAL_H

#include "BaseClass.h"
#include <list>

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Time.h"
#include "IEC61968/PaymentMetering/Charge.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * One of a sequence of time intervals defined in terms of real time. It is
		 * typically used in association with TariffProfile to define the intervals in a
		 * time of use tariff structure, where startDateTime simultaneously determines the
		 * starting point of this interval and the ending point of the previous interval.
		 */
		class TimeTariffInterval : public BaseClass
		{

		public:
			TimeTariffInterval();
			virtual ~TimeTariffInterval();
			/**
			 * A sequential reference that defines the identity of this interval and its
			 * relative position with respect to other intervals in a sequence of intervals.
			 */
			IEC61970::Base::Domain::Integer sequenceNumber;
			/**
			 * A real time marker that defines the starting time (typically it is the time of
			 * day) for this interval. The interval extends to the start of the next interval
			 * or until it is reset to the start of the first interval by TariffProfile.
			 * tariffCycle.
			 */
			IEC61970::Base::Domain::Time startTime;
			/**
			 * All charges used to define this time tariff interval.
			 */
			std::list<IEC61968::PaymentMetering::Charge*> Charges;

		};

	}

}
#endif // TIMETARIFFINTERVAL_H
