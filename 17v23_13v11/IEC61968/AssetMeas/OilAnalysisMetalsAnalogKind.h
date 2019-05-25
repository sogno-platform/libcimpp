///////////////////////////////////////////////////////////
//  OilAnalysisMetalsAnalogKind.h
//  Implementation of the Class OilAnalysisMetalsAnalogKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OILANALYSISMETALSANALOGKIND_H
#define OILANALYSISMETALSANALOGKIND_H

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Analogs representing oil metals and elements analysis result.
		 */
		enum class OilAnalysisMetalsAnalogKind
		{
			/**
			 * Aluminum concentration (in ppb, specifically in microgram/litre).
			 */
			 _undef = -1, 	aluminum,
			/**
			 * Aluminum concentration of particles larger than 0.45 microns  (in ppb,
			 * specifically in microgram/litre).
			 */
			aluminumParticulate,
			/**
			 * Barium concentration (in ppb, specifically in microgram/litre).
			 */
			barium,
			/**
			 * Boron concentration (in ppb, specifically in microgram/litre).
			 */
			boron,
			/**
			 * Calcium concentration (in ppb, specifically in microgram/litre).
			 */
			calcium,
			/**
			 * Cadmium concentration (in ppb, specifically in microgram/litre).
			 */
			cadmium,
			/**
			 * Chromium concentration (in ppb, specifically in microgram/litre).
			 */
			chromium,
			/**
			 * Copper concentration (in ppb, specifically in microgram/litre).
			 */
			copper,
			/**
			 * Copper concentration of particles larger than 0.45 microns  (in ppb,
			 * specifically in microgram/litre).
			 */
			copperParticulate,
			/**
			 * Iron concentration (in ppb, specifically in microgram/litre).
			 */
			iron,
			/**
			 * Iron concentration of particles larger than 0.45 microns (in ppb, specifically
			 * in microgram/litre). 
			 */
			ironParticulate,
			/**
			 * Lead concentration (in ppb, specifically in microgram/litre).
			 */
			lead,
			/**
			 * Lead concentration of particles larger than 0.45 microns (in ppb, specifically
			 * in microgram/litre).
			 */
			leadParticulate,
			/**
			 * Lithium concentration (in ppb, specifically in microgram/litre).
			 */
			lithium,
			/**
			 * Molybdenum concentration (in ppb, specifically in microgram/litre).
			 */
			molybdenum,
			/**
			 * Magnesium concentration (in ppb, specifically in microgram/litre).
			 */
			magnesium,
			/**
			 * Nickel concentration (in ppb, specifically in microgram/litre).
			 */
			nickel,
			/**
			 * Phosphorus concentration (in ppb, specifically in microgram/litre).
			 */
			phosphorus,
			/**
			 * Silicon concentration (in ppb, specifically in microgram/litre).
			 */
			silicon,
			/**
			 * Silver concentration (in ppb, specifically in microgram/litre).
			 */
			silver,
			/**
			 * Silver concentration of particles larger than 0.45 microns (in ppb,
			 * specifically in microgram/litre).
			 */
			silverParticulate,
			/**
			 * Sodium concentration (in ppb, specifically in microgram/litre).
			 */
			sodium,
			/**
			 * Tin concentration (in ppb, specifically in microgram/litre).
			 */
			tin,
			/**
			 * Titanium concentration (in ppb, specifically in microgram/litre).
			 */
			titanium,
			/**
			 * Tungsten concentration (in ppb, specifically in microgram/litre).
			 */
			tungsten,
			/**
			 * Vanadium concentration (in ppb, specifically in microgram/litre).
			 */
			vanadium,
			/**
			 * Zinc concentration (in ppb, specifically in microgram/litre).
			 */
			zinc,
			/**
			 * Zinc concentration of particles larger than 0.45 microns (in ppb, specifically
			 * in microgram/litre).
			 */
			zincParticulate
		};

	}

}
#endif // OILANALYSISMETALSANALOGKIND_H
