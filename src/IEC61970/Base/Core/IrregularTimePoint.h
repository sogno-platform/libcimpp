///////////////////////////////////////////////////////////
//  IrregularTimePoint.h
//  Implementation of the Class IrregularTimePoint
///////////////////////////////////////////////////////////

#ifndef IRREGULARTIMEPOINT_H
#define IRREGULARTIMEPOINT_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/Float.h"

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
#endif // IRREGULARTIMEPOINT_H
