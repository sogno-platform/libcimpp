///////////////////////////////////////////////////////////
//  MeasurementValueQuality.h
//  Implementation of the Class MeasurementValueQuality
///////////////////////////////////////////////////////////

#ifndef MEASUREMENTVALUEQUALITY_H
#define MEASUREMENTVALUEQUALITY_H

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
#endif // MEASUREMENTVALUEQUALITY_H
