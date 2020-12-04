///////////////////////////////////////////////////////////
//  Ratio.h
//  Implementation of the Class Ratio
///////////////////////////////////////////////////////////

#ifndef RATIO_H
#define RATIO_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Float.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCommon
		{
			/**
			 * Fraction specified explicitly with a numerator and denominator, which can be
			 * used to calculate the quotient.
			 */
			class Ratio : public BaseClass
			{

			public:
				Ratio();
				virtual ~Ratio();
				/**
				 * The part of a fraction that is below the line and that functions as the divisor
				 * of the numerator.
				 */
				IEC61970::Base::Domain::Float denominator;
				/**
				 * The part of a fraction that is above the line and signifies the number to be
				 * divided by the denominator.
				 */
				IEC61970::Base::Domain::Float numerator;

			};

		}

	}

}
#endif // RATIO_H
