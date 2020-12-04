///////////////////////////////////////////////////////////
//  OilAnalysisParticleAnalog.h
//  Implementation of the Class OilAnalysisParticleAnalog
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OILANALYSISPARTICLEANALOG_H
#define OILANALYSISPARTICLEANALOG_H

#include "IEC61968/AssetMeas/OilAnalysisParticleAnalogKind.h"
#include "IEC61968/AssetMeas/AssetAnalog.h"

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Asset oil analysis particle type of analog.
		 */
		class OilAnalysisParticleAnalog : public IEC61968::AssetMeas::AssetAnalog
		{

		public:
			OilAnalysisParticleAnalog();
			virtual ~OilAnalysisParticleAnalog();
			/**
			 * Kind of analog representing oil particulate analysis result.
			 */
			IEC61968::AssetMeas::OilAnalysisParticleAnalogKind kind = IEC61968::AssetMeas::OilAnalysisParticleAnalogKind::_undef;

		};

	}

}
#endif // OILANALYSISPARTICLEANALOG_H
