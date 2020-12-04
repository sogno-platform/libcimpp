///////////////////////////////////////////////////////////
//  OilAnalysisParticleDiscrete.h
//  Implementation of the Class OilAnalysisParticleDiscrete
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OILANALYSISPARTICLEDISCRETE_H
#define OILANALYSISPARTICLEDISCRETE_H

#include "IEC61968/AssetMeas/OilAnalysisParticleDiscreteKind.h"
#include "IEC61968/AssetMeas/AssetDiscrete.h"

namespace IEC61968
{
	namespace AssetMeas
	{
		class OilAnalysisParticleDiscrete : public IEC61968::AssetMeas::AssetDiscrete
		{

		public:
			OilAnalysisParticleDiscrete();
			virtual ~OilAnalysisParticleDiscrete();
			/**
			 * Kind of discrete representing oil particulate analysis result.
			 */
			IEC61968::AssetMeas::OilAnalysisParticleDiscreteKind kind = IEC61968::AssetMeas::OilAnalysisParticleDiscreteKind::_undef;

		};

	}

}
#endif // OILANALYSISPARTICLEDISCRETE_H
