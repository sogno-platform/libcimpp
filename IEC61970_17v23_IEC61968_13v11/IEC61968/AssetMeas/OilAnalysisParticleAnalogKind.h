///////////////////////////////////////////////////////////
//  OilAnalysisParticleAnalogKind.h
//  Implementation of the Class OilAnalysisParticleAnalogKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OILANALYSISPARTICLEANALOGKIND_H
#define OILANALYSISPARTICLEANALOGKIND_H

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Analogs representing oil particulate analysis result.
		 */
		enum class OilAnalysisParticleAnalogKind
		{
			/**
			 * Count of particles 2 microns and larger in a 1 millilitre sample.
			 */
			 _undef = -1, 	count2Plus,
			/**
			 * Count of particles 4 microns and larger in a 1 millilitre sample.
			 */
			count4Plus,
			/**
			 * Count of particles 5 microns and larger in a 1 millilitre sample.
			 */
			count5Plus,
			/**
			 * Count of particles 6 microns and larger in a 1 millilitre sample.
			 */
			count6Plus,
			/**
			 * Count of particles 10 microns and larger in a 1 millilitre sample.
			 */
			count10Plus,
			/**
			 * Count of particles 14 microns and larger in a 1 millilitre sample.
			 */
			count14Plus,
			/**
			 * Count of particles 15 microns and larger in a 1 millilitre sample.
			 */
			count15Plus,
			/**
			 * Count of particles 21 microns and larger in a 1 millilitre sample.
			 */
			count21Plus,
			/**
			 * Count of particles 25 microns and larger in a 1 millilitre sample.
			 */
			count25Plus,
			/**
			 * Count of particles 38 microns and larger in a 1 millilitre sample.
			 */
			count38Plus,
			/**
			 * Count of particles 50 microns and larger in a 1 millilitre sample.
			 */
			count50Plus,
			/**
			 * Count of particles 70 microns and larger in a 1 millilitre sample.
			 */
			count70Plus,
			/**
			 * Count of particles 100 microns and larger in a 1 millilitre sample.
			 */
			count100Plus,
			/**
			 * Percent of particles which are fibres.
			 */
			fibrePercent,
			/**
			 * Percent of particles which are metal.
			 */
			metalPercent,
			/**
			 * Percent of particles which are carbon.
			 */
			carbonPercent,
			/**
			 * Percent of particles which are 'other'.
			 */
			otherPercent
		};

	}

}
#endif // OILANALYSISPARTICLEANALOGKIND_H
