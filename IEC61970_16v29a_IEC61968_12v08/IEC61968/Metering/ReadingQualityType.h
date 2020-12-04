///////////////////////////////////////////////////////////
//  ReadingQualityType.h
//  Implementation of the Class ReadingQualityType
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef READINGQUALITYTYPE_H
#define READINGQUALITYTYPE_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Detailed description for a quality of a reading value, produced by an end
		 * device or a system. Values in attributes allow for creation of the recommended
		 * codes to be used for identifying reading value quality codes as follows:
		 * <systemId>.<category>.<subCategory>.
		 */
		class ReadingQualityType : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			ReadingQualityType();
			virtual ~ReadingQualityType();
			/**
			 * High-level nature of the reading value quality.
			 */
			IEC61970::Base::Domain::String category;
			/**
			 * More specific nature of the reading value quality, as a further sub-
			 * categorisation of 'category'.
			 */
			IEC61970::Base::Domain::String subCategory;
			/**
			 * Identification of the system which has declared the issue with the data or
			 * provided commentary on the data.
			 */
			IEC61970::Base::Domain::String systemId;

		};

	}

}
#endif // READINGQUALITYTYPE_H
