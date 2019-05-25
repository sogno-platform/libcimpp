///////////////////////////////////////////////////////////
//  StreetDetail.h
//  Implementation of the Class StreetDetail
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef STREETDETAIL_H
#define STREETDETAIL_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Boolean.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Street details, in the context of address.
		 */
		class StreetDetail : public BaseClass
		{

		public:
			StreetDetail();
			virtual ~StreetDetail();
			/**
			 * First line of a free form address or some additional address information (for
			 * example a mail stop).
			 */
			IEC61970::Base::Domain::String addressGeneral;
			/**
			 * (if applicable) Second line of a free form address.
			 */
			IEC61970::Base::Domain::String addressGeneral2;
			/**
			 * (if applicable) Third line of a free form address.
			 */
			IEC61970::Base::Domain::String addressGeneral3;
			/**
			 * (if applicable) In certain cases the physical location of the place of interest
			 * does not have a direct point of entry from the street, but may be located
			 * inside a larger structure such as a building, complex, office block, apartment,
			 * etc.
			 */
			IEC61970::Base::Domain::String buildingName;
			/**
			 * (if applicable) Utilities often make use of external reference systems, such as
			 * those of the town-planner's department or surveyor general's mapping system,
			 * that allocate global reference codes to streets.
			 */
			IEC61970::Base::Domain::String code;
			/**
			 * Name of the street.
			 */
			IEC61970::Base::Domain::String name;
			/**
			 * Designator of the specific location on the street.
			 */
			IEC61970::Base::Domain::String number;
			/**
			 * Prefix to the street name. For example: North, South, East, West.
			 */
			IEC61970::Base::Domain::String prefix;
			/**
			 * Suffix to the street name. For example: North, South, East, West.
			 */
			IEC61970::Base::Domain::String suffix;
			/**
			 * Number of the apartment or suite.
			 */
			IEC61970::Base::Domain::String suiteNumber;
			/**
			 * Type of street. Examples include: street, circle, boulevard, avenue, road,
			 * drive, etc.
			 */
			IEC61970::Base::Domain::String type;
			/**
			 * True if this street is within the legal geographical boundaries of the
			 * specified town (default).
			 */
			IEC61970::Base::Domain::Boolean withinTownLimits;

		};

	}

}
#endif // STREETDETAIL_H
