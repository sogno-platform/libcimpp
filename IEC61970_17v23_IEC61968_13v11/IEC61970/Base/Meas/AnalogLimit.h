///////////////////////////////////////////////////////////
//  AnalogLimit.h
//  Implementation of the Class AnalogLimit
///////////////////////////////////////////////////////////

#ifndef ANALOGLIMIT_H
#define ANALOGLIMIT_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Meas/Limit.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * Limit values for Analog measurements.
			 */
			class AnalogLimit : public IEC61970::Base::Meas::Limit
			{

			public:
				AnalogLimit();
				virtual ~AnalogLimit();
				/**
				 * The value to supervise against.
				 */
				IEC61970::Base::Domain::Float value;

			};

		}

	}

}
#endif // ANALOGLIMIT_H
