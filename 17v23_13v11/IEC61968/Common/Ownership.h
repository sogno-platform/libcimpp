///////////////////////////////////////////////////////////
//  Ownership.h
//  Implementation of the Class Ownership
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef OWNERSHIP_H
#define OWNERSHIP_H

#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61968/Assets/Asset.h"
#include "IEC61968/Assets/AssetOwner.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Ownership of e.g. asset.
		 */
		class Ownership : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			Ownership();
			virtual ~Ownership();
			/**
			 * Share of this ownership.
			 */
			IEC61970::Base::Domain::PerCent share;
			/**
			 * Asset that is object of this ownership.
			 */
			IEC61968::Assets::Asset *Asset;
			/**
			 * Asset owner that is subject in this ownership.
			 */
			IEC61968::Assets::AssetOwner *AssetOwner;

		};

	}

}
#endif // OWNERSHIP_H
