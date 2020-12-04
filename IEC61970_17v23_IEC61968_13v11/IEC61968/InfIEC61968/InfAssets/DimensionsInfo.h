///////////////////////////////////////////////////////////
//  DimensionsInfo.h
//  Implementation of the Class DimensionsInfo
///////////////////////////////////////////////////////////

#ifndef DIMENSIONSINFO_H
#define DIMENSIONSINFO_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Length.h"
#include "IEC61968/InfIEC61968/InfAssets/Specification.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * As applicable, the basic linear, area, or volume dimensions of an asset, asset
			 * type (AssetModel) or other type of object (such as land area). Units and
			 * multipliers are specified per dimension.
			 */
			class DimensionsInfo : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				DimensionsInfo();
				virtual ~DimensionsInfo();
				/**
				 * A description of the orientation of the object relative to the dimensions. As
				 * an example, a vault may have north-south orientation for the sizeLength
				 * measurement and sizeDepth may be the height of the vault.
				 */
				IEC61970::Base::Domain::String orientation;
				/**
				 * Depth measurement.
				 */
				IEC61970::Base::Domain::Length sizeDepth;
				/**
				 * Diameter measurement.
				 */
				IEC61970::Base::Domain::Length sizeDiameter;
				/**
				 * Length measurement.
				 */
				IEC61970::Base::Domain::Length sizeLength;
				/**
				 * Width measurement.
				 */
				IEC61970::Base::Domain::Length sizeWidth;
				std::list<IEC61968::InfIEC61968::InfAssets::Specification*> Specifications;

			};

		}

	}

}
#endif // DIMENSIONSINFO_H
