///////////////////////////////////////////////////////////
//  CUAsset.h
//  Implementation of the Class CUAsset
///////////////////////////////////////////////////////////

#ifndef CUASSET_H
#define CUASSET_H

#include "IEC61970/Base/Domain/IntegerQuantity.h"
#include "IEC61968/Common/Status.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/InfIEC61968/InfWork/WorkIdentifiedObject.h"


namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets{
			class GenericAssetModelOrMaterial;
		}
		namespace InfWork
		{
			/**
			 * Compatible unit for various types of assets such as transformers switches,
			 * substation fences, poles, etc..
			 */
			class CUAsset : public IEC61968::InfIEC61968::InfWork::WorkIdentifiedObject
			{

			public:
				CUAsset();
				virtual ~CUAsset();
				/**
				 * Quantity of the type asset within the CU.
				 */
				IEC61970::Base::Domain::IntegerQuantity quantity;
				IEC61968::Common::Status status;
				/**
				 * The code for this type of asset.
				 */
				IEC61970::Base::Domain::String typeAssetCode;
				IEC61968::InfIEC61968::InfAssets::GenericAssetModelOrMaterial *TypeAsset;

			};

		}

	}

}
#endif // CUASSET_H
