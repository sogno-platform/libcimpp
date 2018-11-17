///////////////////////////////////////////////////////////
//  VolumeFlowRate.h
//  Implementation of the Class VolumeFlowRate
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef VOLUMEFLOWRATE_H
#define VOLUMEFLOWRATE_H

#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Domain/Float.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * Volume per time.
			 */
			class VolumeFlowRate
			{

			public:
				VolumeFlowRate();
				virtual ~VolumeFlowRate();
				static const IEC61970::Base::Domain::UnitMultiplier multiplier;
				static const IEC61970::Base::Domain::UnitSymbol unit;
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // VOLUMEFLOWRATE_H
