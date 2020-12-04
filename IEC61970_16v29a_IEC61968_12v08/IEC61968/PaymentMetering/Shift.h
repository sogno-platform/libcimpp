///////////////////////////////////////////////////////////
//  Shift.h
//  Implementation of the Class Shift
///////////////////////////////////////////////////////////

#ifndef SHIFT_H
#define SHIFT_H

#include "IEC61970/Base/Domain/DateTimeInterval.h"
#include "IEC61970/Base/Domain/Money.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * Generally referring to a period of operation or work performed. Whether the
		 * shift is open/closed can be derived from attributes 'activityInterval.start'
		 * and 'activityInterval.end'.
		 * The grand total for receipts (i.e., cumulative total of all actual receipted
		 * amounts during this shift; bankable + non-bankable; excludes rounding error
		 * totals) can be derived from receipt:
		 * =sum('Receipt.receiptAmount'); includes bankable and non-bankable receipts.
		 * It also has to be reconciled against:
		 * =sum('receiptsGrandTotalBankable' + 'receiptsGrandTotalNonBankable')
		 * and against receipt summary:
		 * =sum('ReceiptSummary.receiptsTotal').
		 * The attributes with "GrandTotal" defined in this class may need to be used when
		 * the source data is periodically flushed from the system and then these cannot
		 * be derived.
		 */
		class Shift : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			Shift();
			virtual ~Shift();
			/**
			 * Interval for activity of this shift.
			 */
			IEC61970::Base::Domain::DateTimeInterval activityInterval;
			/**
			 * Total of amounts receipted during this shift that can be manually banked (cash
			 * and cheques for example). Values are obtained from Receipt attributes:
			 * =sum(Receipt.receiptAmount) for all Receipt.bankable = true.
			 */
			IEC61970::Base::Domain::Money receiptsGrandTotalBankable;
			/**
			 * Total of amounts receipted during this shift that cannot be manually banked
			 * (card payments for example). Values are obtained from Receipt attributes:
			 * =sum(Receipt.receiptAmount) for all Receipt.bankable = false.
			 */
			IEC61970::Base::Domain::Money receiptsGrandTotalNonBankable;
			/**
			 * Cumulative amount in error due to process rounding not reflected in
			 * receiptsGrandTotal. Values are obtained from Receipt attributes:
			 * =sum(Receipt.receiptRounding).
			 */
			IEC61970::Base::Domain::Money receiptsGrandTotalRounding;
			/**
			 * Cumulative total of transacted amounts during this shift. Values are obtained
			 * from transaction:
			 * =sum('Transaction.transactionAmount'). It also has to be reconciled against
			 * transaction summary:
			 * =sum('TransactionSummary.transactionsTotal').
			 */
			IEC61970::Base::Domain::Money transactionsGrandTotal;
			/**
			 * Cumulative amount in error due to process rounding not reflected in
			 * transactionsGandTotal. Values are obtained from Transaction attributes:
			 * =sum(Transaction.transactionRounding).
			 */
			IEC61970::Base::Domain::Money transactionsGrandTotalRounding;

		};

	}

}
#endif // SHIFT_H
