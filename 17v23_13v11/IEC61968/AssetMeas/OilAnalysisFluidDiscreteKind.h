///////////////////////////////////////////////////////////
//  OilAnalysisFluidDiscreteKind.h
//  Implementation of the Class OilAnalysisFluidDiscreteKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OILANALYSISFLUIDDISCRETEKIND_H
#define OILANALYSISFLUIDDISCRETEKIND_H

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Discretes representing oil fluid test analysis result.
		 */
		enum class OilAnalysisFluidDiscreteKind
		{
			/**
			 * Fluid color index number.  Color numbers are expressed in 0.5 intervals and
			 * value specified is  "less-than". For example, a value of '2.5' means the color
			 * index number is between 2.0 and 2.5.
			 * Possible values: 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.5, 5.0, 5.5, 6.0, 6.
			 * 5, 7.0, 7.5, 8.0.
			 */
			 _undef = -1, 	colorNumber,
			/**
			 * Fluid color index on the platinum cobalt scale.
			 * Possible values: 5, 10, 15, 20, 25, 30, 35, 40, 50, 60, 70, 100, 150, 200, 250,
			 * 300, 350, 400, 450.
			 */
			colorNumberPlatinumCobaltScale,
			/**
			 * Corrosive sulphur test result using bare copper strip test.
			 * Possible values: corrosive, nonCorrosive.
			 */
			corrosiveSulphurByD1275,
			/**
			 * Corrosive sulphur test result using covered (copper) conductor deposition test.
			 * 
			 * Possible values: potentiallyCorrosive, nonCorrosive.
			 */
			corrosiveSulphurBy62535,
			/**
			 * Corrosive sulphur test result using silver strip test.
			 * Possible values: absent, present.
			 */
			corrosiveSulphurBy51353,
			/**
			 * Tarnish level indicated by corrosive sulphur test.
			 * Possible values: 1A, 1B, 2A, 2B, 2C, 2D, 2E, 3A, 3B, 4A, 4B, 4C.
			 */
			tarnishLevel,
			/**
			 * Sludge precipitation test results.
			 * Possible values: present, notPresent.
			 */
			sludgePrecipitation
		};

	}

}
#endif // OILANALYSISFLUIDDISCRETEKIND_H
