///////////////////////////////////////////////////////////
//  FaultIndicatorInfo.h
//  Implementation of the Class FaultIndicatorInfo
///////////////////////////////////////////////////////////

#ifndef FAULTINDICATORINFO_H
#define FAULTINDICATORINFO_H

#include "IEC61968/InfIEC61968/InfAssetInfo/FaultIndicatorResetKind.h"
#include "IEC61968/Assets/AssetInfo.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssetInfo
		{
			/**
			 * Parameters of fault indicator asset.
			 */
			class FaultIndicatorInfo : public IEC61968::Assets::AssetInfo
			{

			public:
				FaultIndicatorInfo();
				virtual ~FaultIndicatorInfo();
				/**
				 * Kind of reset mechanisim of this fault indicator.
				 */
				IEC61968::InfIEC61968::InfAssetInfo::FaultIndicatorResetKind resetKind = IEC61968::InfIEC61968::InfAssetInfo::FaultIndicatorResetKind::_undef;

			};

		}

	}

}
#endif // FAULTINDICATORINFO_H
