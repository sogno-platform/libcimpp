///////////////////////////////////////////////////////////
//  ReadingQuality.h
//  Implementation of the Class ReadingQuality
///////////////////////////////////////////////////////////

#ifndef READINGQUALITY_H
#define READINGQUALITY_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/Metering/ReadingQualityType.h"
#include "IEC61968/Metering/BaseReading.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Quality of a specific reading value or interval reading value. Note that more
		 * than one quality may be applicable to a given reading. Typically not used
		 * unless problems or unusual conditions occur (i.e., quality for each reading is
		 * assumed to be good unless stated otherwise in associated reading quality type).
		 * It can also be used with the corresponding reading quality type to indicate
		 * that the validation has been performed and succeeded.
		 */
		class ReadingQuality : public BaseClass
		{

		public:
			ReadingQuality();
			virtual ~ReadingQuality();
			/**
			 * Elaboration on the quality code.
			 */
			IEC61970::Base::Domain::String comment;
			/**
			 * System acting as the source of the quality code.
			 */
			IEC61970::Base::Domain::String source;
			/**
			 * Date and time at which the quality code was assigned or ascertained.
			 */
			IEC61970::Base::Domain::DateTime timeStamp;
			/**
			 * Type of this reading quality.
			 */
			IEC61968::Metering::ReadingQualityType *ReadingQualityType;
			/**
			 * Reading value to which this quality applies.
			 */
			IEC61968::Metering::BaseReading *Reading;

		};

	}

}
#endif // READINGQUALITY_H
