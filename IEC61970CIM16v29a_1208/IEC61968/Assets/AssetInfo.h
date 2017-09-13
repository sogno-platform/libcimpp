///////////////////////////////////////////////////////////
//  AssetInfo.h
//  Implementation of the Class AssetInfo
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ASSETINFO_H
#define ASSETINFO_H

#include <list>

#include "IEC61970/Base/Core/PowerSystemResource.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Set of attributes of an asset, representing typical datasheet information of a
		 * physical device that can be instantiated and shared in different data exchange
		 * contexts:
		 * - as attributes of an asset instance (installed or in stock)
		 * - as attributes of an asset model (product by a manufacturer)
		 * - as attributes of a type asset (generic type of an asset as used in
		 * designs/extension planning).
		 */
		class AssetInfo : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			AssetInfo();
			virtual ~AssetInfo();
			/**
			 * All power system resources with this datasheet information.
			 */
			std::list<IEC61970::Base::Core::PowerSystemResource*> PowerSystemResources;

		};

	}

}
#endif // ASSETINFO_H
