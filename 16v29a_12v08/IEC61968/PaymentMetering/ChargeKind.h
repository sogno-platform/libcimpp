///////////////////////////////////////////////////////////
//  ChargeKind.h
//  Implementation of the Class ChargeKind
///////////////////////////////////////////////////////////

#ifndef CHARGEKIND_H
#define CHARGEKIND_H

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * Kind of charge.
		 */
		enum class ChargeKind
		{
			/**
			 * The charge levied for the actual usage of the service, normally expressed in
			 * terms of a tariff. For example: usage x price per kWh = total charge for
			 * consumption.
			 */
			consumptionCharge,
			/**
			 * The charge related to the usage within a defined time interval, normally
			 * expressed in terms of a tariff. For example: a maximum-demand tariff will levy
			 * an additional charge on top of the consumption charge if the usage exceeds a
			 * defined limit per hour.
			 */
			demandCharge,
			/**
			 * Any other charge which is not a consumptionCharge or demandCharge. For example:
			 * debt recovery, arrears, standing charge or charge for another service such as
			 * street lighting.
			 */
			auxiliaryCharge,
			/**
			 * Any charge that is classified as a tax of a kind. For example: VAT, GST, TV tax,
			 * etc.
			 */
			taxCharge,
			/**
			 * Other kind of charge.
			 */
			other
		};

	}

}
#endif // CHARGEKIND_H
