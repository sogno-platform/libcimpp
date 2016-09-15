///////////////////////////////////////////////////////////
//  MeasurementValueSource.h
//  Implementation of the Class MeasurementValueSource
//  Created on:      28-Jan-2016 12:45:41
///////////////////////////////////////////////////////////

#if !defined(EA_F5F3B014_5E08_4590_BC36_FBEAAE07E249__INCLUDED_)
#define EA_F5F3B014_5E08_4590_BC36_FBEAAE07E249__INCLUDED_

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
#endif // !defined(EA_F5F3B014_5E08_4590_BC36_FBEAAE07E249__INCLUDED_)
