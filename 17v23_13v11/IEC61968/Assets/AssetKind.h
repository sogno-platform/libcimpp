///////////////////////////////////////////////////////////
//  AssetKind.h
//  Implementation of the Class AssetKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ASSETKIND_H
#define ASSETKIND_H

namespace IEC61968
{
	namespace Assets
	{
		enum class AssetKind
		{
			 _undef = -1, 	breakerAirBlastBreaker,
			breakerBulkOilBreaker,
			breakerMinimumOilBreaker,
			breakerSF6DeadTankBreaker,
			breakerSF6LiveTankBreaker,
			breakerTankAssembly,
			breakerInsulatingStackAssembly,
			transformer,
			transformerTank,
			/**
			 * Other type of Asset. The type attribute may provide more details in this case.
			 */
			other
		};

	}

}
#endif // ASSETKIND_H
