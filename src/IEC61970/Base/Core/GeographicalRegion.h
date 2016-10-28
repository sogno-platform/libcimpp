///////////////////////////////////////////////////////////
//  GeographicalRegion.h
//  Implementation of the Class GeographicalRegion
///////////////////////////////////////////////////////////

#ifndef GEOGRAPHICALREGION_H
#define GEOGRAPHICALREGION_H

#include <list>

#include "IEC61970/Base/Core/SubGeographicalRegion.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * A geographical region of a power system network model.
			 */
			class GeographicalRegion : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				GeographicalRegion();
				virtual ~GeographicalRegion();
				/**
				 * All sub-geograhpical regions within this geographical region.
				 */
				std::list<IEC61970::Base::Core::SubGeographicalRegion*> Regions;

			};

		}

	}

}
#endif // GEOGRAPHICALREGION_H
