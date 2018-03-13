///////////////////////////////////////////////////////////
//  Zone.h
//  Implementation of the Class Zone
///////////////////////////////////////////////////////////

#ifndef ZONE_H
#define ZONE_H

#include "IEC61968/InfIEC61968/InfLocations/ZoneKind.h"
#include "IEC61968/Common/Location.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfLocations
		{
			/**
			 * Area divided off from other areas. It may be part of the electrical network, a
			 * land area where special restrictions apply, weather areas, etc. For weather, it
			 * is an area where a set of relatively homogenous weather measurements apply.
			 */
			class Zone : public IEC61968::Common::Location
			{

			public:
				Zone();
				virtual ~Zone();
				/**
				 * Kind of this zone.
				 */
				IEC61968::InfIEC61968::InfLocations::ZoneKind kind = IEC61968::InfIEC61968::InfLocations::ZoneKind::_undef;

			};

		}

	}

}
#endif // ZONE_H
