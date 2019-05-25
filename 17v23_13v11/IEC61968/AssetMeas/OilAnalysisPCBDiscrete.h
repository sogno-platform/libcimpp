///////////////////////////////////////////////////////////
//  OilAnalysisPCBDiscrete.h
//  Implementation of the Class OilAnalysisPCBDiscrete
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OILANALYSISPCBDISCRETE_H
#define OILANALYSISPCBDISCRETE_H

#include "IEC61968/AssetMeas/OilAnalysisPCBDiscreteKind.h"
#include "IEC61968/AssetMeas/AssetDiscrete.h"

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Asset oil analysis PCB type of discrete.
		 */
		class OilAnalysisPCBDiscrete : public IEC61968::AssetMeas::AssetDiscrete
		{

		public:
			OilAnalysisPCBDiscrete();
			virtual ~OilAnalysisPCBDiscrete();
			/**
			 * Kind of discrete representing oil PCB test analysis result.
			 */
			IEC61968::AssetMeas::OilAnalysisPCBDiscreteKind kind = IEC61968::AssetMeas::OilAnalysisPCBDiscreteKind::_undef;

		};

	}

}
#endif // OILANALYSISPCBDISCRETE_H
