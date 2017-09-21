///////////////////////////////////////////////////////////
//  Agreement.h
//  Implementation of the Class Agreement
///////////////////////////////////////////////////////////

#ifndef AGREEMENT_H
#define AGREEMENT_H

#include "IEC61970/Base/Domain/Date.h"
#include "IEC61970/Base/Domain/DateTimeInterval.h"
#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Formal agreement between two parties defining the terms and conditions for a
		 * set of services. The specifics of the services are, in turn, defined via one or
		 * more service agreements.
		 */
		class Agreement : public IEC61968::Common::Document
		{

		public:
			Agreement();
			virtual ~Agreement();
			/**
			 * Date this agreement was consummated among associated persons and/or
			 * organisations.
			 */
			IEC61970::Base::Domain::Date signDate;
			/**
			 * Date and time interval this agreement is valid (from going into effect to
			 * termination).
			 */
			IEC61970::Base::Domain::DateTimeInterval validityInterval;

		};

	}

}
#endif // AGREEMENT_H
