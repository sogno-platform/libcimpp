///////////////////////////////////////////////////////////
//  ConsumptionTariffInterval.h
//  Implementation of the Class ConsumptionTariffInterval
///////////////////////////////////////////////////////////

#ifndef CONSUMPTIONTARIFFINTERVAL_H
#define CONSUMPTIONTARIFFINTERVAL_H

#include "BaseClass.h"
#include <list>

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/RealEnergy.h"
#include "IEC61968/PaymentMetering/TimeTariffInterval.h"
#include "IEC61968/PaymentMetering/Charge.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * One of a sequence of intervals defined in terms of consumption quantity of a
		 * service such as electricity, water, gas, etc. It is typically used in
		 * association with TariffProfile to define the steps or blocks in a step tariff
		 * structure, where startValue simultaneously defines the entry value of this step
		 * and the closing value of the previous step. Where consumption is >= startValue
		 * it falls within this interval and where consumption is < startValue it falls
		 * within the previous interval.
		 */
		class ConsumptionTariffInterval : public BaseClass
		{

		public:
			ConsumptionTariffInterval();
			virtual ~ConsumptionTariffInterval();
			/**
			 * A sequential reference that defines the identity of this interval and its
			 * relative position with respect to other intervals in a sequence of intervals.
			 */
			IEC61970::Base::Domain::Integer sequenceNumber;
			/**
			 * The lowest level of consumption that defines the starting point of this
			 * interval. The interval extends to the start of the next interval or until it is
			 * reset to the start of the first interval by TariffProfile.tariffCycle.
			 */
			IEC61970::Base::Domain::RealEnergy startValue;
			/**
			 * All time of use tariff intervals influenced by this consumption tariff interval.
			 */
			std::list<IEC61968::PaymentMetering::TimeTariffInterval*> TouTariffIntervals;
			/**
			 * All charges used to define this consumption tariff interval.
			 */
			std::list<IEC61968::PaymentMetering::Charge*> Charges;

		};

	}

}
#endif // CONSUMPTIONTARIFFINTERVAL_H
