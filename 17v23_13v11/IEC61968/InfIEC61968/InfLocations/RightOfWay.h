///////////////////////////////////////////////////////////
//  RightOfWay.h
//  Implementation of the Class RightOfWay
///////////////////////////////////////////////////////////

#ifndef RIGHTOFWAY_H
#define RIGHTOFWAY_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/InfIEC61968/InfLocations/LandProperty.h"
#include "IEC61968/Common/Agreement.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfLocations
		{
			/**
			 * A right-of-way (ROW) is for land where it is lawful to use for a public road,
			 * an electric power line, etc. Note that the association to Location, Asset,
			 * Organisation, etc. for the Grant is inherited from Agreement, a type of
			 * Document.
			 */
			class RightOfWay : public IEC61968::Common::Agreement
			{

			public:
				RightOfWay();
				virtual ~RightOfWay();
				/**
				 * Property related information that describes the ROW's land parcel. For example,
				 * it may be a deed book number, deed book page number, and parcel number.
				 */
				IEC61970::Base::Domain::String propertyData;
				/**
				 * All land properties this right of way applies to.
				 */
				std::list<IEC61968::InfIEC61968::InfLocations::LandProperty*> LandProperties;

			};

		}

	}

}
#endif // RIGHTOFWAY_H
