///////////////////////////////////////////////////////////
//  GeographicalRegion.h
//  Implementation of the Class GeographicalRegion
//  Created on:      28-Jan-2016 12:44:58
///////////////////////////////////////////////////////////

#if !defined(EA_1AF7F1F5_1F79_4d91_B76A_E4A60805FFBB__INCLUDED_)
#define EA_1AF7F1F5_1F79_4d91_B76A_E4A60805FFBB__INCLUDED_

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
#endif // !defined(EA_1AF7F1F5_1F79_4d91_B76A_E4A60805FFBB__INCLUDED_)
