///////////////////////////////////////////////////////////
//  AuxiliaryAgreement.h
//  Implementation of the Class AuxiliaryAgreement
///////////////////////////////////////////////////////////

#ifndef AUXILIARYAGREEMENT_H
#define AUXILIARYAGREEMENT_H

#include <list>

#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Money.h"
#include "IEC61968/Common/Agreement.h"
#include "IEC61968/PaymentMetering/AuxiliaryAccount.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * An ad-hoc auxiliary account agreement associated with a customer agreement, not
		 * part of the customer's account, but typically subject to formal agreement
		 * between customer and supplier (utility). Typically this is used to collect
		 * revenue owed by the customer for other services or arrears accrued with the
		 * utility for other services. It is typically linked to a prepaid token purchase
		 * transaction, thus forcing the customer to make a payment towards settlement of
		 * the auxiliary account balance whenever the customer needs to purchase a prepaid
		 * token for electricity.
		 * The present status of the auxiliary agreement can be defined in the context of
		 * the utility's business rules, for example: enabled, disabled, pending, over
		 * recovered, under recovered, written off, etc.
		 */
		class AuxiliaryAgreement : public IEC61968::Common::Agreement
		{

		public:
			AuxiliaryAgreement();
			virtual ~AuxiliaryAgreement();
			/**
			 * The interest per annum to be charged prorata on 'AuxiliaryAccount.dueArrears'
			 * at the end of each 'payCycle'.
			 */
			IEC61970::Base::Domain::PerCent arrearsInterest;
			/**
			 * The frequency for automatically recurring auxiliary charges, where
			 * 'AuxiliaryAccount.initialCharge' is recursively added to 'AuxiliaryAccount.
			 * dueCurrent' at the start of each 'auxCycle'. For example: on a specified date
			 * and time; hourly; daily; weekly; monthly; 3-monthly; 6-monthly; 12-monthly; etc.
			 */
			IEC61970::Base::Domain::String auxCycle;
			/**
			 * The coded priority indicating the priority that this auxiliary agreement has
			 * above other auxiliary agreements (associated with the same customer agreement)
			 * when it comes to competing for settlement from a payment transaction or token
			 * purchase.
			 */
			IEC61970::Base::Domain::String auxPriorityCode;
			/**
			 * The fixed amount that has to be collected from each vending transaction towards
			 * settlement of this auxiliary agreement. Note that there may be multiple tokens
			 * vended per vending transaction, but this is not relevant.
			 */
			IEC61970::Base::Domain::Money fixedAmount;
			/**
			 * The minimum amount that has to be paid at any transaction towards settling this
			 * auxiliary agreement or reducing the balance.
			 */
			IEC61970::Base::Domain::Money minAmount;
			/**
			 * The contractually expected payment frequency (by the customer). Examples are:
			 * ad-hoc; on specified date; hourly, daily, weekly, monthly. etc.
			 */
			IEC61970::Base::Domain::String payCycle;
			/**
			 * Sub-classification of the inherited 'type' for this AuxiliaryAgreement.
			 */
			IEC61970::Base::Domain::String subType;
			/**
			 * The percentage of the transaction amount that has to be collected from each
			 * vending transaction towards settlement of this auxiliary agreement when
			 * payments are not in arrears. Note that there may be multiple tokens vended per
			 * vending transaction, but this is not relevant.
			 */
			IEC61970::Base::Domain::PerCent vendPortion;
			/**
			 * The percentage of the transaction amount that has to be collected from each
			 * vending transaction towards settlement of this auxiliary agreement when
			 * payments are in arrears. Note that there may be multiple tokens vended per
			 * vending transaction, but this is not relevant.
			 */
			IEC61970::Base::Domain::PerCent vendPortionArrear;
			/**
			 * All auxiliary accounts regulated by this agreement.
			 */
			std::list<IEC61968::PaymentMetering::AuxiliaryAccount*> AuxiliaryAccounts;

		};

	}

}
#endif // AUXILIARYAGREEMENT_H
