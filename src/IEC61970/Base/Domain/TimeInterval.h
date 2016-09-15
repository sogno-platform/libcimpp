///////////////////////////////////////////////////////////
//  TimeInterval.h
//  Implementation of the Class TimeInterval
//  Created on:      28-Jan-2016 12:47:18
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_BCCD1ED3_C977_4cd4_ACA5_15C418BD3DE8__INCLUDED_)
#define EA_BCCD1ED3_C977_4cd4_ACA5_15C418BD3DE8__INCLUDED_

#include "IEC61970/Base/Domain/Time.h"
#include "BaseClass.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * Interval between two times.
			 */
			class TimeInterval : public BaseClass
			{

			public:
				TimeInterval();
				virtual ~TimeInterval();
				/**
				 * End time of this interval.
				 */
				IEC61970::Base::Domain::Time end;
				/**
				 * Start time of this interval.
				 */
				IEC61970::Base::Domain::Time start;

			};

		}

	}

}
#endif // !defined(EA_BCCD1ED3_C977_4cd4_ACA5_15C418BD3DE8__INCLUDED_)
