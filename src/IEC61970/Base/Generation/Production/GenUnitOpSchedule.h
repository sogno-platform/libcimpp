///////////////////////////////////////////////////////////
//  GenUnitOpSchedule.h
//  Implementation of the Class GenUnitOpSchedule
//  Created on:      28-Jan-2016 12:44:58
///////////////////////////////////////////////////////////

#if !defined(EA_E76CF4C2_2B1A_46e9_A3CC_F1F1FA8F5EEC__INCLUDED_)
#define EA_E76CF4C2_2B1A_46e9_A3CC_F1F1FA8F5EEC__INCLUDED_

#include "IEC61970/Base/Core/RegularIntervalSchedule.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * The generating unit's Operator-approved current operating schedule (or plan),
				 * typically produced with the aid of unit commitment type analyses. The X-axis
				 * represents absolute time. The Y1-axis represents the status (0=off-line and
				 * unavailable: 1=available: 2=must run: 3=must run at fixed power value: etc.).
				 * The Y2-axis represents the must run fixed power value where required.
				 */
				class GenUnitOpSchedule : public IEC61970::Base::Core::RegularIntervalSchedule
				{

				public:
					GenUnitOpSchedule();
					virtual ~GenUnitOpSchedule();

				};

			}

		}

	}

}
#endif // !defined(EA_E76CF4C2_2B1A_46e9_A3CC_F1F1FA8F5EEC__INCLUDED_)
