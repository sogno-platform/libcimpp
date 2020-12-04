///////////////////////////////////////////////////////////
//  PowerElectronicsWindUnit.h
//  Implementation of the Class PowerElectronicsWindUnit
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef POWERELECTRONICSWINDUNIT_H
#define POWERELECTRONICSWINDUNIT_H

#include "IEC61970/Base/Generation/Production/PowerElectronicsUnit.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * A wind generating unit that connects to the AC network with power electronics
				 * rather than rotating machines or an aggregation of such units.
				 */
				class PowerElectronicsWindUnit : public IEC61970::Base::Generation::Production::PowerElectronicsUnit
				{

				public:
					PowerElectronicsWindUnit();
					virtual ~PowerElectronicsWindUnit();

				};

			}

		}

	}

}
#endif // POWERELECTRONICSWINDUNIT_H
