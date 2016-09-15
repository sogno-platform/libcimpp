///////////////////////////////////////////////////////////
//  LevelVsVolumeCurve.h
//  Implementation of the Class LevelVsVolumeCurve
//  Created on:      28-Jan-2016 12:45:32
///////////////////////////////////////////////////////////

#if !defined(EA_831D6970_44CB_4d4e_B605_BA87F068EF8D__INCLUDED_)
#define EA_831D6970_44CB_4d4e_B605_BA87F068EF8D__INCLUDED_

#include "IEC61970/Base/Core/Curve.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * Relationship between reservoir volume and reservoir level. The  volume is at
				 * the y-axis and the reservoir level at the x-axis.
				 */
				class LevelVsVolumeCurve : public IEC61970::Base::Core::Curve
				{

				public:
					LevelVsVolumeCurve();
					virtual ~LevelVsVolumeCurve();

				};

			}

		}

	}

}
#endif // !defined(EA_831D6970_44CB_4d4e_B605_BA87F068EF8D__INCLUDED_)
