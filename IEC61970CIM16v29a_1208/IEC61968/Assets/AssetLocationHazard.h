///////////////////////////////////////////////////////////
//  AssetLocationHazard.h
//  Implementation of the Class AssetLocationHazard
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ASSETLOCATIONHAZARD_H
#define ASSETLOCATIONHAZARD_H

#include <list>

#include "IEC61968/Common/Location.h"
#include "IEC61968/Common/Hazard.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Potential hazard related to the location of an asset. Examples are trees
		 * growing under overhead power lines, a park being located by a substation (i.e.,
		 * children climb fence to recover a ball), a lake near an overhead distribution
		 * line (fishing pole/line contacting power lines), dangerous neighbour, etc.
		 */
		class AssetLocationHazard : public IEC61968::Common::Hazard
		{

		public:
			AssetLocationHazard();
			virtual ~AssetLocationHazard();
			/**
			 * The location of this hazard.
			 */
			std::list<IEC61968::Common::Location*> Locations;

		};

	}

}
#endif // ASSETLOCATIONHAZARD_H
