///////////////////////////////////////////////////////////
//  PerLengthSequenceImpedance.h
//  Implementation of the Class PerLengthSequenceImpedance
//  Created on:      28-Jan-2016 12:45:58
//  Original author: Tom
///////////////////////////////////////////////////////////

#if !defined(EA_BDB7747F_4638_4410_880A_A3937D5714B1__INCLUDED_)
#define EA_BDB7747F_4638_4410_880A_A3937D5714B1__INCLUDED_

#include "IEC61970/Base/Domain/SusceptancePerLength.h"
#include "IEC61970/Base/Domain/ConductancePerLength.h"
#include "IEC61970/Base/Domain/ResistancePerLength.h"
#include "IEC61970/Base/Domain/ReactancePerLength.h"
#include "IEC61970/Base/Wires/PerLengthImpedance.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Sequence impedance and admittance parameters per unit length, for transposed
			 * lines of 1, 2, or 3 phases. For 1-phase lines, define x=x0=xself. For 2-phase
			 * lines, define x=xs-xm and x0=xs+xm.
			 */
			class PerLengthSequenceImpedance : public IEC61970::Base::Wires::PerLengthImpedance
			{

			public:
				PerLengthSequenceImpedance();
				virtual ~PerLengthSequenceImpedance();
				/**
				 * Zero sequence shunt (charging) susceptance, per unit of length.
				 */
				IEC61970::Base::Domain::SusceptancePerLength b0ch;
				/**
				 * Positive sequence shunt (charging) susceptance, per unit of length.
				 */
				IEC61970::Base::Domain::SusceptancePerLength bch;
				/**
				 * Zero sequence shunt (charging) conductance, per unit of length.
				 */
				IEC61970::Base::Domain::ConductancePerLength g0ch;
				/**
				 * Positive sequence shunt (charging) conductance, per unit of length.
				 */
				IEC61970::Base::Domain::ConductancePerLength gch;
				/**
				 * Positive sequence series resistance, per unit of length.
				 */
				IEC61970::Base::Domain::ResistancePerLength r;
				/**
				 * Zero sequence series resistance, per unit of length.
				 */
				IEC61970::Base::Domain::ResistancePerLength r0;
				/**
				 * Positive sequence series reactance, per unit of length.
				 */
				IEC61970::Base::Domain::ReactancePerLength x;
				/**
				 * Zero sequence series reactance, per unit of length.
				 */
				IEC61970::Base::Domain::ReactancePerLength x0;

			};

		}

	}

}
#endif // !defined(EA_BDB7747F_4638_4410_880A_A3937D5714B1__INCLUDED_)
