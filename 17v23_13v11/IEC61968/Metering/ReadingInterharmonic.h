///////////////////////////////////////////////////////////
//  ReadingInterharmonic.h
//  Implementation of the Class ReadingInterharmonic
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef READINGINTERHARMONIC_H
#define READINGINTERHARMONIC_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Integer.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Interharmonics are represented as a rational number 'numerator' / 'denominator',
		 * and harmonics are represented using the same mechanism and identified by
		 * 'denominator'=1.
		 */
		class ReadingInterharmonic : public BaseClass
		{

		public:
			ReadingInterharmonic();
			virtual ~ReadingInterharmonic();
			/**
			 * Interharmonic denominator. Value 0 means not applicable. Value 2 is used in
			 * combination with 'numerator'=1 to represent interharmonic 1/2. Finally, value 1
			 * indicates the harmonic of the order specified with 'numerator'.
			 */
			IEC61970::Base::Domain::Integer denominator;
			/**
			 * Interharmonic numerator. Value 0 means not applicable. Value 1 is used in
			 * combination with 'denominator'=2 to represent interharmonic 1/2, and with
			 * 'denominator'=1 it represents fundamental frequency. Finally, values greater
			 * than 1 indicate the harmonic of that order (e.g., 'numerator'=5 is the fifth
			 * harmonic).
			 */
			IEC61970::Base::Domain::Integer numerator;

		};

	}

}
#endif // READINGINTERHARMONIC_H
