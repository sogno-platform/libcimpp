///////////////////////////////////////////////////////////
//  Card.h
//  Implementation of the Class Card
///////////////////////////////////////////////////////////

#ifndef CARD_H
#define CARD_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Date.h"
#include "IEC61968/PaymentMetering/Tender.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * Documentation of the tender when it is a type of card (credit, debit, etc).
		 */
		class Card : public BaseClass
		{

		public:
			Card();
			virtual ~Card();
			/**
			 * Name of account holder.
			 */
			IEC61970::Base::Domain::String accountHolderName;
			/**
			 * The card verification number.
			 */
			IEC61970::Base::Domain::String cvNumber;
			/**
			 * The date when this card expires.
			 */
			IEC61970::Base::Domain::Date expiryDate;
			/**
			 * The primary account number.
			 */
			IEC61970::Base::Domain::String pan;
			/**
			 * Payment tender this card is being used for.
			 */
			IEC61968::PaymentMetering::Tender *Tender;

		};

	}

}
#endif // CARD_H
