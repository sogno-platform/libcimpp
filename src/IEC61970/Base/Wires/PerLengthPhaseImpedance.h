///////////////////////////////////////////////////////////
//  PerLengthPhaseImpedance.h
//  Implementation of the Class PerLengthPhaseImpedance
//  Created on:      28-Jan-2016 12:45:57
//  Original author: Tom
///////////////////////////////////////////////////////////

#if !defined(EA_27D11D51_F5C4_48d8_B415_4AA17C4BBEF1__INCLUDED_)
#define EA_27D11D51_F5C4_48d8_B415_4AA17C4BBEF1__INCLUDED_

#include <list>

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Wires/PhaseImpedanceData.h"
#include "IEC61970/Base/Wires/PerLengthImpedance.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Impedance and admittance parameters per unit length for n-wire unbalanced lines,
			 * in matrix form.
			 */
			class PerLengthPhaseImpedance : public IEC61970::Base::Wires::PerLengthImpedance
			{

			public:
				PerLengthPhaseImpedance();
				virtual ~PerLengthPhaseImpedance();
				/**
				 * Number of phase, neutral, and other wires retained. Constrains the number of
				 * matrix elements and the phase codes that can be used with this matrix.
				 */
				IEC61970::Base::Domain::Integer conductorCount;
				/**
				 * All data that belong to this conductor phase impedance.
				 */
				std::list<IEC61970::Base::Wires::PhaseImpedanceData*> PhaseImpedanceData;

			};

		}

	}

}
#endif // !defined(EA_27D11D51_F5C4_48d8_B415_4AA17C4BBEF1__INCLUDED_)
