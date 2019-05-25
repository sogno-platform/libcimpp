///////////////////////////////////////////////////////////
//  OilAnalysisFluidDiscrete.h
//  Implementation of the Class OilAnalysisFluidDiscrete
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OILANALYSISFLUIDDISCRETE_H
#define OILANALYSISFLUIDDISCRETE_H

#include "IEC61968/AssetMeas/OilAnalysisFluidDiscreteKind.h"
#include "IEC61968/AssetMeas/AssetDiscrete.h"

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Asset oil analysis fluid type of discrete.
		 */
		class OilAnalysisFluidDiscrete : public IEC61968::AssetMeas::AssetDiscrete
		{

		public:
			OilAnalysisFluidDiscrete();
			virtual ~OilAnalysisFluidDiscrete();
			/**
			 * Kind of discrete representing oil fluid test analysis result.
			 */
			IEC61968::AssetMeas::OilAnalysisFluidDiscreteKind kind = IEC61968::AssetMeas::OilAnalysisFluidDiscreteKind::_undef;

		};

	}

}
#endif // OILANALYSISFLUIDDISCRETE_H
