///////////////////////////////////////////////////////////
//  PerLengthImpedance.h
//  Implementation of the Class PerLengthImpedance
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef PERLENGTHIMPEDANCE_H
#define PERLENGTHIMPEDANCE_H

#include <list>

#include "IEC61970/Base/Wires/ACLineSegment.h"
#include "IEC61970/Base/Wires/PerLengthLineParameter.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Common type for per-length impedance electrical catalogues.
			 */
			class PerLengthImpedance : public IEC61970::Base::Wires::PerLengthLineParameter
			{

			public:
				PerLengthImpedance();
				virtual ~PerLengthImpedance();
				/**
				 * All line segments described by this per-length impedance.
				 */
				std::list<IEC61970::Base::Wires::ACLineSegment*> ACLineSegments;

			};

		}

	}

}
#endif // PERLENGTHIMPEDANCE_H
