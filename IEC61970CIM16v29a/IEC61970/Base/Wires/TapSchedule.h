///////////////////////////////////////////////////////////
//  TapSchedule.h
//  Implementation of the Class TapSchedule
//  Original author: KLH
///////////////////////////////////////////////////////////

#ifndef TAPSCHEDULE_H
#define TAPSCHEDULE_H

#include "IEC61970/Base/LoadModel/SeasonDayTypeSchedule.h"
#include "IEC61970/Base/Wires/TapChanger.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A pre-established pattern over time for a tap step.
			 */
			class TapSchedule : public IEC61970::Base::LoadModel::SeasonDayTypeSchedule
			{

			public:
				TapSchedule();
				virtual ~TapSchedule();
				/**
				 * A TapSchedule is associated with a TapChanger.
				 */
				IEC61970::Base::Wires::TapChanger *TapChanger;

			};

		}

	}

}
#endif // TAPSCHEDULE_H
