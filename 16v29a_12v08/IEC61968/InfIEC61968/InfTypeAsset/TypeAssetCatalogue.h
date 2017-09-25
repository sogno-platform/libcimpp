///////////////////////////////////////////////////////////
//  TypeAssetCatalogue.h
//  Implementation of the Class TypeAssetCatalogue
///////////////////////////////////////////////////////////

#ifndef TYPEASSETCATALOGUE_H
#define TYPEASSETCATALOGUE_H

#include "IEC61968/Common/Status.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfTypeAsset
		{
			/**
			 * Catalogue of generic types of assets (TypeAsset) that may be used for design
			 * purposes. It is not associated with a particular manufacturer.
			 */
			class TypeAssetCatalogue : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				TypeAssetCatalogue();
				virtual ~TypeAssetCatalogue();
				IEC61968::Common::Status status;

			};

		}

	}

}
#endif // TYPEASSETCATALOGUE_H
