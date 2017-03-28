///////////////////////////////////////////////////////////
//  LevelVsVolumeCurve.h
//  Implementation of the Class LevelVsVolumeCurve
///////////////////////////////////////////////////////////

#ifndef LEVELVSVOLUMECURVE_H
#define LEVELVSVOLUMECURVE_H

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
#endif // LEVELVSVOLUMECURVE_H
