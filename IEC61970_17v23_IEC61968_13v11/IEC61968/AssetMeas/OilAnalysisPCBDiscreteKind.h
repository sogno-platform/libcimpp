///////////////////////////////////////////////////////////
//  OilAnalysisPCBDiscreteKind.h
//  Implementation of the Class OilAnalysisPCBDiscreteKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OILANALYSISPCBDISCRETEKIND_H
#define OILANALYSISPCBDISCRETEKIND_H

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Discretes representing oil PCB test analysis result.
		 */
		enum class OilAnalysisPCBDiscreteKind
		{
			/**
			 * Possible values:  <blank>, <50, >50.
			 */
			 _undef = -1, 	testKitPCB
		};

	}

}
#endif // OILANALYSISPCBDISCRETEKIND_H
