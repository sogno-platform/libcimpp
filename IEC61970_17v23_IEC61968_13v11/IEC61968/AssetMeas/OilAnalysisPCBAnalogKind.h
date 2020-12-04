///////////////////////////////////////////////////////////
//  OilAnalysisPCBAnalogKind.h
//  Implementation of the Class OilAnalysisPCBAnalogKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OILANALYSISPCBANALOGKIND_H
#define OILANALYSISPCBANALOGKIND_H

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Analogs representing oil PCB analysis result.
		 */
		enum class OilAnalysisPCBAnalogKind
		{
			/**
			 * Concentration of Aroclor 1221 (in ppm, specifically in mg/kg).
			 */
			 _undef = -1, 	aroclor1221,
			/**
			 * Concentration of Aroclor 1242 (in ppm, specifically in mg/kg).
			 */
			aroclor1242,
			/**
			 * Concentration of Aroclor 1254 (in ppm, specifically in mg/kg).
			 */
			aroclor1254,
			/**
			 * Concentration of Aroclor 1260 (in ppm, specifically in mg/kg).
			 */
			aroclor1260,
			/**
			 * Concentration of Aroclor 1016 (in ppm, specifically in mg/kg).
			 */
			aroclor1016,
			/**
			 * Total arochlor (PCB) content (in ppm, specifically in mg/kg). Is the sum of
			 * Aroclor 1221, Aroclor 1242, Aroclor 1254, Aroclor 1260, Aroclor 1016. 
			 */
			totalPCB
		};

	}

}
#endif // OILANALYSISPCBANALOGKIND_H
