///////////////////////////////////////////////////////////
//  OilAnalysisParticleDiscreteKind.h
//  Implementation of the Class OilAnalysisParticleDiscreteKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OILANALYSISPARTICLEDISCRETEKIND_H
#define OILANALYSISPARTICLEDISCRETEKIND_H

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Discretes representing oil particulate analysis result.
		 */
		enum class OilAnalysisParticleDiscreteKind
		{
			/**
			 * Opacity of oil.
			 * Possible values: any integer.
			 */
			 _undef = -1, 	opacity
		};

	}

}
#endif // OILANALYSISPARTICLEDISCRETEKIND_H
