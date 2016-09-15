///////////////////////////////////////////////////////////
//  AnalogLimitSet.h
//  Implementation of the Class AnalogLimitSet
//  Created on:      28-Jan-2016 12:43:19
///////////////////////////////////////////////////////////

#if !defined(EA_092E9A77_E83A_4b07_BE83_6B667D349FAA__INCLUDED_)
#define EA_092E9A77_E83A_4b07_BE83_6B667D349FAA__INCLUDED_

#include <list>

#include "IEC61970/Base/Meas/LimitSet.h"
#include "IEC61970/Base/Meas/AnalogLimit.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * An AnalogLimitSet specifies a set of Limits that are associated with an Analog
			 * measurement.
			 */
			class AnalogLimitSet : public IEC61970::Base::Meas::LimitSet
			{

			public:
				AnalogLimitSet();
				virtual ~AnalogLimitSet();
				/**
				 * The limit values used for supervision of Measurements.
				 */
				std::list<IEC61970::Base::Meas::AnalogLimit*> Limits;

			};

		}

	}

}
#endif // !defined(EA_092E9A77_E83A_4b07_BE83_6B667D349FAA__INCLUDED_)
