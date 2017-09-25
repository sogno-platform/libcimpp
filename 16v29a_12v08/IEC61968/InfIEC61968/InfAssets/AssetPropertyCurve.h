///////////////////////////////////////////////////////////
//  AssetPropertyCurve.h
//  Implementation of the Class AssetPropertyCurve
///////////////////////////////////////////////////////////

#ifndef ASSETPROPERTYCURVE_H
#define ASSETPROPERTYCURVE_H

#include "IEC61970/Base/Core/Curve.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * An Asset Property that is described through curves rather than as a data point.
			 * The relationship is to be defined between an independent variable (X-axis) and
			 * one or two dependent variables (Y1-axis and Y2-axis).
			 */
			class AssetPropertyCurve : public IEC61970::Base::Core::Curve
			{

			public:
				AssetPropertyCurve();
				virtual ~AssetPropertyCurve();

			};

		}

	}

}
#endif // ASSETPROPERTYCURVE_H
