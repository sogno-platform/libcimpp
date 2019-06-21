///////////////////////////////////////////////////////////
//  OilAnalysisGasAnalog.h
//  Implementation of the Class OilAnalysisGasAnalog
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OILANALYSISGASANALOG_H
#define OILANALYSISGASANALOG_H

#include "IEC61968/AssetMeas/OilAnalysisGasAnalogKind.h"
#include "IEC61968/AssetMeas/AssetAnalog.h"

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Asset oil analysis gas type of analog.
		 */
		class OilAnalysisGasAnalog : public IEC61968::AssetMeas::AssetAnalog
		{

		public:
			OilAnalysisGasAnalog();
			virtual ~OilAnalysisGasAnalog();
			/**
			 * Kind of analog representing oil dissolved gases analysis result.
			 */
			IEC61968::AssetMeas::OilAnalysisGasAnalogKind kind = IEC61968::AssetMeas::OilAnalysisGasAnalogKind::_undef;

		};

	}

}
#endif // OILANALYSISGASANALOG_H
