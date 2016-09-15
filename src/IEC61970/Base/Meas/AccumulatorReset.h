///////////////////////////////////////////////////////////
//  AccumulatorReset.h
//  Implementation of the Class AccumulatorReset
//  Created on:      28-Jan-2016 12:43:10
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_27F9FCD9_E0DD_4959_8BC7_AB686AAF14FA__INCLUDED_)
#define EA_27F9FCD9_E0DD_4959_8BC7_AB686AAF14FA__INCLUDED_

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
#endif // !defined(EA_27F9FCD9_E0DD_4959_8BC7_AB686AAF14FA__INCLUDED_)
