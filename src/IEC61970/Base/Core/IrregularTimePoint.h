///////////////////////////////////////////////////////////
//  IrregularTimePoint.h
//  Implementation of the Class IrregularTimePoint
//  Created on:      28-Jan-2016 12:45:30
///////////////////////////////////////////////////////////

#if !defined(EA_39F5E0B9_4F2B_4aec_8316_B9AA61113EF9__INCLUDED_)
#define EA_39F5E0B9_4F2B_4aec_8316_B9AA61113EF9__INCLUDED_

#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/Float.h"
#include "BaseClass.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * TimePoints for a schedule where the time between the points varies.
			 */
			class IrregularTimePoint : public BaseClass
			{

			public:
				IrregularTimePoint();
				virtual ~IrregularTimePoint();
				/**
				 * The time is relative to the schedule starting time.
				 */
				IEC61970::Base::Domain::Seconds time;
				/**
				 * The first value at the time. The meaning of the value is defined by the derived
				 * type of the associated schedule.
				 */
				IEC61970::Base::Domain::Float value1;
				/**
				 * The second value at the time. The meaning of the value is defined by the
				 * derived type of the associated schedule.
				 */
				IEC61970::Base::Domain::Float value2;

			};

		}

	}

}
#endif // !defined(EA_39F5E0B9_4F2B_4aec_8316_B9AA61113EF9__INCLUDED_)
