///////////////////////////////////////////////////////////
//  OilAnalysisPCBAnalog.h
//  Implementation of the Class OilAnalysisPCBAnalog
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OILANALYSISPCBANALOG_H
#define OILANALYSISPCBANALOG_H

#include "IEC61968/AssetMeas/OilAnalysisPCBAnalogKind.h"
#include "IEC61968/AssetMeas/AssetAnalog.h"

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Asset oil analysis PCB type of analog.
		 */
		class OilAnalysisPCBAnalog : public IEC61968::AssetMeas::AssetAnalog
		{

		public:
			OilAnalysisPCBAnalog();
			virtual ~OilAnalysisPCBAnalog();
			/**
			 * Kind of analog representing oil PCB analysis result.
			 */
			IEC61968::AssetMeas::OilAnalysisPCBAnalogKind kind = IEC61968::AssetMeas::OilAnalysisPCBAnalogKind::_undef;

		};

	}

}
#endif // OILANALYSISPCBANALOG_H
