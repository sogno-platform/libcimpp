///////////////////////////////////////////////////////////
//  TariffProfile.h
//  Implementation of the Class TariffProfile
///////////////////////////////////////////////////////////

#ifndef TARIFFPROFILE_H
#define TARIFFPROFILE_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/PaymentMetering/ConsumptionTariffInterval.h"
#include "IEC61968/PaymentMetering/TimeTariffInterval.h"
#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * A schedule of charges; structure associated with Tariff that allows the
		 * definition of complex tarif structures such as step and time of use when used
		 * in conjunction with TimeTariffInterval and Charge. Inherited 'status.value' is
		 * defined in the context of the utility's business rules, for example: active,
		 * inactive, etc.
		 */
		class TariffProfile : public IEC61968::Common::Document
		{

		public:
			TariffProfile();
			virtual ~TariffProfile();
			/**
			 * The frequency at which the tariff charge schedule is repeated. Examples are:
			 * once off on a specified date and time; hourly; daily; weekly; monthly; 3-
			 * monthly; 6-monthly; 12-monthly; etc. At the end of each cycle, the business
			 * rules are reset to start from the beginning again.
			 */
			IEC61970::Base::Domain::String tariffCycle;
			/**
			 * All consumption tariff intervals used to define this tariff profile.
			 */
			std::list<IEC61968::PaymentMetering::ConsumptionTariffInterval*> ConsumptionTariffIntervals;
			/**
			 * All time tariff intervals used to define this tariff profile.
			 */
			std::list<IEC61968::PaymentMetering::TimeTariffInterval*> TimeTariffIntervals;

		};

	}

}
#endif // TARIFFPROFILE_H
