///////////////////////////////////////////////////////////
//  FaultIndicatorResetKind.h
//  Implementation of the Class FaultIndicatorResetKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef FAULTINDICATORRESETKIND_H
#define FAULTINDICATORRESETKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssetInfo
		{
			/**
			 * Kind of resetting the fault indicators.
			 */
			enum class FaultIndicatorResetKind
			{
				automatic,
				manual,
				remote,
				other
			};

		}

	}

}
#endif // FAULTINDICATORRESETKIND_H
