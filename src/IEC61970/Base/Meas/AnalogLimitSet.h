///////////////////////////////////////////////////////////
//  AnalogLimitSet.h
//  Implementation of the Class AnalogLimitSet
///////////////////////////////////////////////////////////

#ifndef ANALOGLIMITSET_H
#define ANALOGLIMITSET_H

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
#endif // ANALOGLIMITSET_H
