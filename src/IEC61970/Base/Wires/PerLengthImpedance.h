///////////////////////////////////////////////////////////
//  PerLengthImpedance.h
//  Implementation of the Class PerLengthImpedance
//  Created on:      28-Jan-2016 12:45:57
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_4EBD3E44_CB0C_4562_A4B8_0BD24F005FEC__INCLUDED_)
#define EA_4EBD3E44_CB0C_4562_A4B8_0BD24F005FEC__INCLUDED_

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
#endif // !defined(EA_4EBD3E44_CB0C_4562_A4B8_0BD24F005FEC__INCLUDED_)
