///////////////////////////////////////////////////////////
//  MeasurementValueQuality.h
//  Implementation of the Class MeasurementValueQuality
//  Created on:      28-Jan-2016 12:45:41
///////////////////////////////////////////////////////////

#if !defined(EA_C25E6A23_BB7B_493a_A131_128A646B2F03__INCLUDED_)
#define EA_C25E6A23_BB7B_493a_A131_128A646B2F03__INCLUDED_

#include "IEC61970/Base/Meas/Quality61850.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * Measurement quality flags. Bits 0-10 are defined for substation automation in
			 * draft IEC 61850 part 7-3. Bits 11-15 are reserved for future expansion by that
			 * document. Bits 16-31 are reserved for EMS applications.
			 */
			class MeasurementValueQuality : public IEC61970::Base::Meas::Quality61850
			{

			public:
				MeasurementValueQuality();
				virtual ~MeasurementValueQuality();

			};

		}

	}

}
#endif // !defined(EA_C25E6A23_BB7B_493a_A131_128A646B2F03__INCLUDED_)
