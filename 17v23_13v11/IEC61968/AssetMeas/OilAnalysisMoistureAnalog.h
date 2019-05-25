///////////////////////////////////////////////////////////
//  OilAnalysisMoistureAnalog.h
//  Implementation of the Class OilAnalysisMoistureAnalog
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OILANALYSISMOISTUREANALOG_H
#define OILANALYSISMOISTUREANALOG_H

#include "IEC61968/AssetMeas/OilAnalysisMoistureAnalogKind.h"
#include "IEC61968/AssetMeas/AssetAnalog.h"

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Asset oil analysis moisture type of analog.
		 */
		class OilAnalysisMoistureAnalog : public IEC61968::AssetMeas::AssetAnalog
		{

		public:
			OilAnalysisMoistureAnalog();
			virtual ~OilAnalysisMoistureAnalog();
			/**
			 * Kind of analog representing oil moisture analysis result.
			 */
			IEC61968::AssetMeas::OilAnalysisMoistureAnalogKind kind = IEC61968::AssetMeas::OilAnalysisMoistureAnalogKind::_undef;

		};

	}

}
#endif // OILANALYSISMOISTUREANALOG_H
