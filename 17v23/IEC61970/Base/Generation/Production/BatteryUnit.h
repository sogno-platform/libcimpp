///////////////////////////////////////////////////////////
//  BatteryUnit.h
//  Implementation of the Class BatteryUnit
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef BATTERYUNIT_H
#define BATTERYUNIT_H

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
				 * An electrochemical energy storage device
				 */
				class BatteryUnit : public IEC61970::Base::Generation::Production::PowerElectronicsUnit
				{

				public:
					BatteryUnit();
					virtual ~BatteryUnit();

				};

			}

		}

	}

}
#endif // BATTERYUNIT_H
