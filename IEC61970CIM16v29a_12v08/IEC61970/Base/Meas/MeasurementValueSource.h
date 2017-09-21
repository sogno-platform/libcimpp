///////////////////////////////////////////////////////////
//  MeasurementValueSource.h
//  Implementation of the Class MeasurementValueSource
///////////////////////////////////////////////////////////

#ifndef MEASUREMENTVALUESOURCE_H
#define MEASUREMENTVALUESOURCE_H

#include <list>

#include "IEC61970/Base/Meas/MeasurementValue.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * MeasurementValueSource describes the alternative sources updating a
			 * MeasurementValue. User conventions for how to use the MeasurementValueSource
			 * attributes are described in the introduction to IEC 61970-301.
			 */
			class MeasurementValueSource : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				MeasurementValueSource();
				virtual ~MeasurementValueSource();
				/**
				 * The MeasurementValues updated by the source.
				 */
				std::list<IEC61970::Base::Meas::MeasurementValue*> MeasurementValues;

			};

		}

	}

}
#endif // MEASUREMENTVALUESOURCE_H
