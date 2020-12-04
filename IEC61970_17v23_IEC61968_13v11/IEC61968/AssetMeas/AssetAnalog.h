///////////////////////////////////////////////////////////
//  AssetAnalog.h
//  Implementation of the Class AssetAnalog
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ASSETANALOG_H
#define ASSETANALOG_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Temperature.h"
#include "IEC61970/Base/Meas/Analog.h"
#include "IEC61968/Assets/TestStandard.h"

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Definition of type of analog useful in asset domain.
		 */
		class AssetAnalog : public IEC61970::Base::Meas::Analog
		{

		public:
			AssetAnalog();
			virtual ~AssetAnalog();
			/**
			 * Detection limit of related analog value if different from detection limit of
			 * test standard or if there is no test standard. The detection limit (also known
			 * as lower limit of detection or limit of detection (LOD), is the lowest quantity
			 * of a substance that can be distinguished from the absence of that substance (a
			 * blank value) within a stated confidence limit (generally 1%).
			 */
			IEC61970::Base::Domain::Float detectionLimit;
			/**
			 * Precision of related analog value if different from precision of test standard
			 * or if there is no test standard. Precision is a measure of how closely
			 * individual measurements agree with one another. Expressed as 'plus or minus'
			 * the value of this attribute.
			 */
			IEC61970::Base::Domain::Float precision;
			/**
			 * Reporting temperature of related analog value if different from reporting
			 * temperature of test standard or if there is no test standard. Reporting
			 * temperature is what gas volumes are normalized to. Different reporting
			 * temperatures are used by different sources. For example, ASTM specifies 0°C,
			 * whereas IEC specifies 20°C. Online monitors often have their own unique
			 * reporting temperatures. 
			 */
			IEC61970::Base::Domain::Temperature reportingTemperature;
			/**
			 * The lab test standard to which this asset health analog is related.
			 */
			IEC61968::Assets::TestStandard *TestStandard;

		};

	}

}
#endif // ASSETANALOG_H
