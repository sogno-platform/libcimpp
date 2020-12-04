///////////////////////////////////////////////////////////
//  OilAnalysisFluidAnalog.h
//  Implementation of the Class OilAnalysisFluidAnalog
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OILANALYSISFLUIDANALOG_H
#define OILANALYSISFLUIDANALOG_H

#include "IEC61968/AssetMeas/OilAnalysisFluidAnalogKind.h"
#include "IEC61968/AssetMeas/AssetAnalog.h"

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Asset oil analysis fluid test type of analog.
		 */
		class OilAnalysisFluidAnalog : public IEC61968::AssetMeas::AssetAnalog
		{

		public:
			OilAnalysisFluidAnalog();
			virtual ~OilAnalysisFluidAnalog();
			/**
			 * Kind of analog representing oil fluid test analysis result.
			 */
			IEC61968::AssetMeas::OilAnalysisFluidAnalogKind kind = IEC61968::AssetMeas::OilAnalysisFluidAnalogKind::_undef;

		};

	}

}
#endif // OILANALYSISFLUIDANALOG_H
