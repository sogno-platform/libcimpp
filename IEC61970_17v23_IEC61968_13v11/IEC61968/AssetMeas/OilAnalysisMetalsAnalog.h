///////////////////////////////////////////////////////////
//  OilAnalysisMetalsAnalog.h
//  Implementation of the Class OilAnalysisMetalsAnalog
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OILANALYSISMETALSANALOG_H
#define OILANALYSISMETALSANALOG_H

#include "IEC61968/AssetMeas/OilAnalysisMetalsAnalogKind.h"
#include "IEC61968/AssetMeas/AssetAnalog.h"

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Asset oil analysis metals type of analog.
		 */
		class OilAnalysisMetalsAnalog : public IEC61968::AssetMeas::AssetAnalog
		{

		public:
			OilAnalysisMetalsAnalog();
			virtual ~OilAnalysisMetalsAnalog();
			/**
			 * Kind of analog representing oil metals elements analysis result.
			 */
			IEC61968::AssetMeas::OilAnalysisMetalsAnalogKind kind = IEC61968::AssetMeas::OilAnalysisMetalsAnalogKind::_undef;

		};

	}

}
#endif // OILANALYSISMETALSANALOG_H
