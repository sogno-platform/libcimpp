///////////////////////////////////////////////////////////
//  SteamSendoutSchedule.h
//  Implementation of the Class SteamSendoutSchedule
///////////////////////////////////////////////////////////

#ifndef STEAMSENDOUTSCHEDULE_H
#define STEAMSENDOUTSCHEDULE_H

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
				 * The cogeneration plant's steam sendout schedule in volume per time unit.
				 */
				class SteamSendoutSchedule : public IEC61970::Base::Core::RegularIntervalSchedule
				{

				public:
					SteamSendoutSchedule();
					virtual ~SteamSendoutSchedule();

				};

			}

		}

	}

}
#endif // STEAMSENDOUTSCHEDULE_H
