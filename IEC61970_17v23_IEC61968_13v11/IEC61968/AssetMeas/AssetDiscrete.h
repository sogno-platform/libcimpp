///////////////////////////////////////////////////////////
//  AssetDiscrete.h
//  Implementation of the Class AssetDiscrete
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ASSETDISCRETE_H
#define ASSETDISCRETE_H

#include "IEC61970/Base/Meas/Discrete.h"
#include "IEC61968/Assets/TestStandard.h"

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Definition of type of discrete useful in asset domain.
		 */
		class AssetDiscrete : public IEC61970::Base::Meas::Discrete
		{

		public:
			AssetDiscrete();
			virtual ~AssetDiscrete();
			/**
			 * The lab test standard to which this asset health discrete is related.
			 */
			IEC61968::Assets::TestStandard *TestStandard;

		};

	}

}
#endif // ASSETDISCRETE_H
