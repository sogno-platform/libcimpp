///////////////////////////////////////////////////////////
//  PowerElectronicsUnit.h
//  Implementation of the Class PowerElectronicsUnit
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef POWERELECTRONICSUNIT_H
#define POWERELECTRONICSUNIT_H

#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Core/Equipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * A generating unit or battery or aggregation that connects to the AC network
				 * using power electronics rather than rotating machines.
				 */
				class PowerElectronicsUnit : public IEC61970::Base::Core::Equipment
				{

				public:
					PowerElectronicsUnit();
					virtual ~PowerElectronicsUnit();
					/**
					 * Maximum active power limit. This is the maximum (nameplate) limit for the unit.
					 */
					IEC61970::Base::Domain::ActivePower maxP;
					/**
					 * Minimum active power limit. This is the minimum (nameplate) limit for the unit.
					 */
					IEC61970::Base::Domain::ActivePower minP;

				};

			}

		}

	}

}
#endif // POWERELECTRONICSUNIT_H
