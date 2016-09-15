///////////////////////////////////////////////////////////
//  SteamSendoutSchedule.h
//  Implementation of the Class SteamSendoutSchedule
//  Created on:      28-Jan-2016 12:46:47
///////////////////////////////////////////////////////////

#if !defined(EA_8B0EEFB2_A591_4159_B504_11985D81F8F8__INCLUDED_)
#define EA_8B0EEFB2_A591_4159_B504_11985D81F8F8__INCLUDED_

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
#endif // !defined(EA_8B0EEFB2_A591_4159_B504_11985D81F8F8__INCLUDED_)
