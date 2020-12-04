///////////////////////////////////////////////////////////
//  ShiftPattern.h
//  Implementation of the Class ShiftPattern
///////////////////////////////////////////////////////////

#ifndef SHIFTPATTERN_H
#define SHIFTPATTERN_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61968/Common/Status.h"
#include "IEC61970/Base/Domain/DateTimeInterval.h"
#include "IEC61968/InfIEC61968/InfWork/WorkIdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * The patterns of shifts worked by people or crews.
			 */
			class ShiftPattern : public IEC61968::InfIEC61968::InfWork::WorkIdentifiedObject
			{

			public:
				ShiftPattern();
				virtual ~ShiftPattern();
				/**
				 * Type of assignement intended to be worked on this shift, for example, temporary,
				 * standard, etc.
				 */
				IEC61970::Base::Domain::String assignmentType;
				/**
				 * Number of cycles for a temporary shift.
				 */
				IEC61970::Base::Domain::Integer cycleCount;
				IEC61968::Common::Status status;
				/**
				 * Date and time interval for which this shift pattern is valid (when it became
				 * effective and when it expires).
				 */
				IEC61970::Base::Domain::DateTimeInterval validityInterval;

			};

		}

	}

}
#endif // SHIFTPATTERN_H
