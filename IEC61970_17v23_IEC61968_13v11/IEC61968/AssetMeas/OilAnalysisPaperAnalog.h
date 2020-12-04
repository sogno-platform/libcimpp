///////////////////////////////////////////////////////////
//  OilAnalysisPaperAnalog.h
//  Implementation of the Class OilAnalysisPaperAnalog
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OILANALYSISPAPERANALOG_H
#define OILANALYSISPAPERANALOG_H

#include "IEC61968/AssetMeas/OilAnalysisPaperAnalogKind.h"
#include "IEC61968/AssetMeas/AssetAnalog.h"

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Asset oil inspection paper type of analog.
		 */
		class OilAnalysisPaperAnalog : public IEC61968::AssetMeas::AssetAnalog
		{

		public:
			OilAnalysisPaperAnalog();
			virtual ~OilAnalysisPaperAnalog();
			/**
			 * Kind of analog representing oil paper degradation analysis result.
			 */
			IEC61968::AssetMeas::OilAnalysisPaperAnalogKind kind = IEC61968::AssetMeas::OilAnalysisPaperAnalogKind::_undef;

		};

	}

}
#endif // OILANALYSISPAPERANALOG_H
