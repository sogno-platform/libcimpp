///////////////////////////////////////////////////////////
//  PhaseImpedanceData.h
//  Implementation of the Class PhaseImpedanceData
//  Original author: Tom
///////////////////////////////////////////////////////////

#ifndef PHASEIMPEDANCEDATA_H
#define PHASEIMPEDANCEDATA_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/SusceptancePerLength.h"
#include "IEC61970/Base/Domain/ResistancePerLength.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/ReactancePerLength.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Triplet of resistance, reactance, and susceptance matrix element values.
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
				 * Resistance matrix element value, per length of unit.
				 */
				IEC61970::Base::Domain::ResistancePerLength r;
				/**
				 * Column-wise element index, assuming a symmetrical matrix. Ranges from 1 to N +
				 * N*(N-1)/2.
				 */
				IEC61970::Base::Domain::Integer sequenceNumber;
				/**
				 * Reactance matrix element value, per length of unit.
				 */
				IEC61970::Base::Domain::ReactancePerLength x;

			};

		}

	}

}
#endif // PHASEIMPEDANCEDATA_H
