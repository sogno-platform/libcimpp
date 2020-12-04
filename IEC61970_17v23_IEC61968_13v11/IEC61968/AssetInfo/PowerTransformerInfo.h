///////////////////////////////////////////////////////////
//  PowerTransformerInfo.h
//  Implementation of the Class PowerTransformerInfo
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef POWERTRANSFORMERINFO_H
#define POWERTRANSFORMERINFO_H

#include "IEC61968/Assets/AssetInfo.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Set of power transformer data, from an equipment library.
		 */
		class PowerTransformerInfo : public IEC61968::Assets::AssetInfo
		{

		public:
			PowerTransformerInfo();
			virtual ~PowerTransformerInfo();

		};

	}

}
#endif // POWERTRANSFORMERINFO_H
