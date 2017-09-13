///////////////////////////////////////////////////////////
//  Charge.h
//  Implementation of the Class Charge
///////////////////////////////////////////////////////////

#ifndef CHARGE_H
#define CHARGE_H

#include <list>

#include "IEC61968/PaymentMetering/AccountingUnit.h"
#include "IEC61968/PaymentMetering/ChargeKind.h"
#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * A charge element associated with other entities such as tariff structures,
		 * auxiliary agreements or other charge elements. The total charge amount
		 * applicable to this instance of charge is the sum of fixed and variable portion.
		 */
		class Charge : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			Charge();
			virtual ~Charge();
			/**
			 * The fixed portion of this charge element.
			 */
			IEC61968::PaymentMetering::AccountingUnit fixedPortion;
			/**
			 * The kind of charge to be applied.
			 */
			IEC61968::PaymentMetering::ChargeKind kind;
			/**
			 * The variable portion of this charge element, calculated as a percentage of the
			 * total amount of a parent charge.
			 */
			IEC61970::Base::Domain::PerCent variablePortion;
			/**
			 * All sub-components of this complex charge.
			 */
			std::list<Charge*> ChildCharges;

		};

	}

}
#endif // CHARGE_H
