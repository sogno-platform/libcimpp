///////////////////////////////////////////////////////////
//  GroundingImpedance.h
//  Implementation of the Class GroundingImpedance
//  Created on:      28-Jan-2016 12:45:17
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#if !defined(EA_0B1D36F9_6CCB_4244_AD07_709CAEB61DDC__INCLUDED_)
#define EA_0B1D36F9_6CCB_4244_AD07_709CAEB61DDC__INCLUDED_

#include "IEC61970/Base/Domain/Reactance.h"
#include "IEC61970/Base/Wires/EarthFaultCompensator.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A fixed impedance device used for grounding.
			 */
			class GroundingImpedance : public IEC61970::Base::Wires::EarthFaultCompensator
			{

			public:
				GroundingImpedance();
				virtual ~GroundingImpedance();
				/**
				 * Reactance of device.
				 */
				IEC61970::Base::Domain::Reactance x;

			};

		}

	}

}
#endif // !defined(EA_0B1D36F9_6CCB_4244_AD07_709CAEB61DDC__INCLUDED_)
