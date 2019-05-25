///////////////////////////////////////////////////////////
//  Cheque.h
//  Implementation of the Class Cheque
///////////////////////////////////////////////////////////

#ifndef CHEQUE_H
#define CHEQUE_H

#include "BaseClass.h"
#include "IEC61968/PaymentMetering/BankAccountDetail.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Date.h"
#include "IEC61968/PaymentMetering/ChequeKind.h"
#include "IEC61968/PaymentMetering/Tender.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * The actual tender when it is a type of cheque.
		 */
		class Cheque : public BaseClass
		{

		public:
			Cheque();
			virtual ~Cheque();
			/**
			 * Details of the account holder and bank.
			 */
			IEC61968::PaymentMetering::BankAccountDetail bankAccountDetail;
			/**
			 * Cheque reference number as printed on the cheque.
			 */
			IEC61970::Base::Domain::String chequeNumber;
			/**
			 * Date when cheque becomes valid.
			 */
			IEC61970::Base::Domain::Date date;
			/**
			 * Kind of cheque.
			 */
			IEC61968::PaymentMetering::ChequeKind kind = IEC61968::PaymentMetering::ChequeKind::_undef;
			/**
			 * The magnetic ink character recognition number printed on the cheque.
			 */
			IEC61970::Base::Domain::String micrNumber;
			/**
			 * Payment tender the cheque is being used for.
			 */
			IEC61968::PaymentMetering::Tender *Tender;

		};

	}

}
#endif // CHEQUE_H
