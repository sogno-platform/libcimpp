///////////////////////////////////////////////////////////
//  TapSchedule.h
//  Implementation of the Class TapSchedule
//  Created on:      28-Jan-2016 12:47:12
//  Original author: KLH
///////////////////////////////////////////////////////////

#if !defined(EA_2066D830_44E3_4770_B110_4971DB9157E7__INCLUDED_)
#define EA_2066D830_44E3_4770_B110_4971DB9157E7__INCLUDED_

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
#endif // !defined(EA_2066D830_44E3_4770_B110_4971DB9157E7__INCLUDED_)
