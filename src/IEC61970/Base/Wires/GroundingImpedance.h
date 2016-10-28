///////////////////////////////////////////////////////////
//  GroundingImpedance.h
//  Implementation of the Class GroundingImpedance
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#ifndef GROUNDINGIMPEDANCE_H
#define GROUNDINGIMPEDANCE_H

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
#endif // GROUNDINGIMPEDANCE_H
