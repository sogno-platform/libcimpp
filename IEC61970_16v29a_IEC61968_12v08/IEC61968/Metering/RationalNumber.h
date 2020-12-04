///////////////////////////////////////////////////////////
//  RationalNumber.h
//  Implementation of the Class RationalNumber
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Integer.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Rational number = 'numerator' / 'denominator'.
		 */
		class RationalNumber : public BaseClass
		{

		public:
			RationalNumber();
			virtual ~RationalNumber();
			/**
			 * Denominator. Value 1 indicates the number is a simple integer.
			 */
			IEC61970::Base::Domain::Integer denominator;
			/**
			 * Numerator.
			 */
			IEC61970::Base::Domain::Integer numerator;

		};

	}

}
#endif // RATIONALNUMBER_H
