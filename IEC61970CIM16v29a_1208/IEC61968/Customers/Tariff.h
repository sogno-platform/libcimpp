///////////////////////////////////////////////////////////
//  Tariff.h
//  Implementation of the Class Tariff
///////////////////////////////////////////////////////////

#ifndef TARIFF_H
#define TARIFF_H

#include <list>

#include "IEC61970/Base/Domain/Date.h"
#include "IEC61968/PaymentMetering/TariffProfile.h"
#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace Customers
	{
		/**
		 * Document, approved by the responsible regulatory agency, listing the terms and
		 * conditions, including a schedule of prices, under which utility services will
		 * be provided. It has a unique number within the state or province. For rate
		 * schedules it is frequently allocated by the affiliated Public utilities
		 * commission (PUC).
		 */
		class Tariff : public IEC61968::Common::Document
		{

		public:
			Tariff();
			virtual ~Tariff();
			/**
			 * (if tariff became inactive) Date tariff was terminated.
			 */
			IEC61970::Base::Domain::Date endDate;
			/**
			 * Date tariff was activated.
			 */
			IEC61970::Base::Domain::Date startDate;
			/**
			 * All tariff profiles using this tariff.
			 */
			std::list<IEC61968::PaymentMetering::TariffProfile*> TariffProfiles;

		};

	}

}
#endif // TARIFF_H
