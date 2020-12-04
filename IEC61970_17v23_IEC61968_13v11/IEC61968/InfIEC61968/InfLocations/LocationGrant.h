///////////////////////////////////////////////////////////
//  LocationGrant.h
//  Implementation of the Class LocationGrant
///////////////////////////////////////////////////////////

#ifndef LOCATIONGRANT_H
#define LOCATIONGRANT_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Common/Agreement.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfLocations
		{
			/**
			 * A grant provides a right, as defined by type, for a parcel of land. Note that
			 * the association to Location, Asset, Organisation, etc. for the Grant is
			 * inherited from Agreement, a type of Document.
			 */
			class LocationGrant : public IEC61968::Common::Agreement
			{

			public:
				LocationGrant();
				virtual ~LocationGrant();
				/**
				 * Property related information that describes the Grant's land parcel. For
				 * example, it may be a deed book number, deed book page number, and parcel number.
				 */
				IEC61970::Base::Domain::String propertyData;

			};

		}

	}

}
#endif // LOCATIONGRANT_H
