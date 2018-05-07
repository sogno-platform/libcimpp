///////////////////////////////////////////////////////////
//  AccumulatorReset.h
//  Implementation of the Class AccumulatorReset
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef ACCUMULATORRESET_H
#define ACCUMULATORRESET_H

#include "IEC61970/Base/Meas/Control.h"
#include "IEC61970/Base/Meas/AccumulatorValue.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * This command reset the counter value to zero.
			 */
			class AccumulatorReset : public IEC61970::Base::Meas::Control
			{

			public:
				AccumulatorReset();
				virtual ~AccumulatorReset();
				/**
				 * The accumulator value that is reset by the command.
				 */
				IEC61970::Base::Meas::AccumulatorValue *AccumulatorValue;

			};

		}

	}

}
#endif // ACCUMULATORRESET_H
