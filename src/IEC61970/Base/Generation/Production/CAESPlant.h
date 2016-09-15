///////////////////////////////////////////////////////////
//  CAESPlant.h
//  Implementation of the Class CAESPlant
//  Created on:      28-Jan-2016 12:43:31
///////////////////////////////////////////////////////////

#if !defined(EA_576E1DCC_02AA_4506_AA42_922E16622BF2__INCLUDED_)
#define EA_576E1DCC_02AA_4506_AA42_922E16622BF2__INCLUDED_

#include "IEC61970/Base/Domain/RealEnergy.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Generation/Production/ThermalGeneratingUnit.h"
#include "IEC61970/Base/Generation/Production/AirCompressor.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * Compressed air energy storage plant.
				 */
				class CAESPlant : public IEC61970::Base::Core::PowerSystemResource
				{

				public:
					CAESPlant();
					virtual ~CAESPlant();
					/**
					 * The rated energy storage capacity.
					 */
					IEC61970::Base::Domain::RealEnergy energyStorageCapacity;
					/**
					 * The CAES plant's gross rated generating capacity.
					 */
					IEC61970::Base::Domain::ActivePower ratedCapacityP;
					/**
					 * A thermal generating unit may be a member of a compressed air energy storage
					 * plant.
					 */
					IEC61970::Base::Generation::Production::ThermalGeneratingUnit *ThermalGeneratingUnit;
					/**
					 * An air compressor may be a member of a compressed air energy storage plant.
					 */
					IEC61970::Base::Generation::Production::AirCompressor *AirCompressor;

				};

			}

		}

	}

}
#endif // !defined(EA_576E1DCC_02AA_4506_AA42_922E16622BF2__INCLUDED_)
