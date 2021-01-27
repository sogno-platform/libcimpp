///////////////////////////////////////////////////////////
//  PhaseImpedanceData.h
//  Implementation of the Class PhaseImpedanceData
//  Original author: Tom
///////////////////////////////////////////////////////////

#ifndef PHASEIMPEDANCEDATA_H
#define PHASEIMPEDANCEDATA_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/SusceptancePerLength.h"
#include "IEC61970/Base/Wires/SinglePhaseKind.h"
#include "IEC61970/Base/Domain/ConductancePerLength.h"
#include "IEC61970/Base/Domain/ResistancePerLength.h"
#include "IEC61970/Base/Domain/ReactancePerLength.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Impedance and conductance matrix element values.
			 * The diagonal elements are described by the elements having the same toPhase and
			 * fromPhase value and the off diagonal elements have different toPhase and
			 * fromPhase values.
			 */
			class PhaseImpedanceData : public BaseClass
			{

			public:
				PhaseImpedanceData();
				virtual ~PhaseImpedanceData();
				/**
				 * Susceptance matrix element value, per length of unit.
				 */
				IEC61970::Base::Domain::SusceptancePerLength b;
				/**
				 * Refer to the class description.
				 */
				IEC61970::Base::Wires::SinglePhaseKind fromPhase = IEC61970::Base::Wires::SinglePhaseKind::_undef;
				/**
				 * Conductance matrix element value, per length of unit.
				 */
				IEC61970::Base::Domain::ConductancePerLength g;
				/**
				 * Resistance matrix element value, per length of unit.
				 */
				IEC61970::Base::Domain::ResistancePerLength r;
				/**
				 * Refer to the class description.
				 */
				IEC61970::Base::Wires::SinglePhaseKind toPhase = IEC61970::Base::Wires::SinglePhaseKind::_undef;
				/**
				 * Reactance matrix element value, per length of unit.
				 */
				IEC61970::Base::Domain::ReactancePerLength x;

			};

		}

	}

}
#endif // PHASEIMPEDANCEDATA_H
