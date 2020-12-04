///////////////////////////////////////////////////////////
//  Due.h
//  Implementation of the Class Due
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef DUE_H
#define DUE_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Money.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * Details on amounts due for an account.
		 */
		class Due : public BaseClass
		{

		public:
			Due();
			virtual ~Due();
			/**
			 * Part of 'current' that constitutes the arrears portion.
			 */
			IEC61970::Base::Domain::Money arrears;
			/**
			 * Part of 'current' that constitutes the charge portion: 'charges' = 'Charge.
			 * fixedPortion' + 'Charge.variablePortion'.
			 */
			IEC61970::Base::Domain::Money charges;
			/**
			 * Current total amount now due: current = principle + arrears + interest +
			 * charges. Typically the rule for settlement priority is: interest dues, then
			 * arrears dues, then current dues, then charge dues.
			 */
			IEC61970::Base::Domain::Money current;
			/**
			 * Part of 'current' that constitutes the interest portion.
			 */
			IEC61970::Base::Domain::Money interest;
			/**
			 * Part of 'current' that constitutes the portion of the principle amount
			 * currently due.
			 */
			IEC61970::Base::Domain::Money principle;

		};

	}

}
#endif // DUE_H
