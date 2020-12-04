///////////////////////////////////////////////////////////
//  PendingCalculation.h
//  Implementation of the Class PendingCalculation
///////////////////////////////////////////////////////////

#ifndef PENDINGCALCULATION_H
#define PENDINGCALCULATION_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61968/Metering/ReadingType.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * When present, a scalar conversion that needs to be applied to every
		 * IntervalReading.value contained in IntervalBlock. This conversion results in a
		 * new associated ReadingType, reflecting the true dimensions of IntervalReading
		 * values after the conversion.
		 */
		class PendingCalculation : public BaseClass
		{

		public:
			PendingCalculation();
			virtual ~PendingCalculation();
			/**
			 * Whether scalars should be applied before adding the 'offset'.
			 */
			IEC61970::Base::Domain::Boolean multiplyBeforeAdd;
			/**
			 * (if applicable) Offset to be added as well as multiplication using scalars.
			 */
			IEC61970::Base::Domain::Integer offset;
			/**
			 * (if scalar is rational number) When 'IntervalReading.value' is multiplied by
			 * 'scalarNumerator' and divided by this value, it causes a unit of measure
			 * conversion to occur, resulting in the 'ReadingType.unit'.
			 */
			IEC61970::Base::Domain::Integer scalarDenominator;
			/**
			 * (if scalar is floating number) When multiplied with 'IntervalReading.value', it
			 * causes a unit of measure conversion to occur, according to the 'ReadingType.
			 * unit'.
			 */
			IEC61970::Base::Domain::Float scalarFloat;
			/**
			 * (if scalar is integer or rational number)  When the scalar is a simple integer,
			 * and this attribute is presented alone and multiplied with 'IntervalReading.
			 * value', it causes a unit of measure conversion to occur, resulting in the
			 * 'ReadingType.unit'. It is never used in conjunction with 'scalarFloat', only
			 * with 'scalarDenominator'.
			 */
			IEC61970::Base::Domain::Integer scalarNumerator;
			/**
			 * Reading type resulting from this pending conversion.
			 */
			IEC61968::Metering::ReadingType *ReadingType;

		};

	}

}
#endif // PENDINGCALCULATION_H
