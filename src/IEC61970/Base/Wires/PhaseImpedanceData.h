///////////////////////////////////////////////////////////
//  PhaseImpedanceData.h
//  Implementation of the Class PhaseImpedanceData
//  Created on:      28-Jan-2016 12:46:02
//  Original author: Tom
///////////////////////////////////////////////////////////

#if !defined(EA_B2CB8601_AFFA_4bef_9C00_5F489B79628D__INCLUDED_)
#define EA_B2CB8601_AFFA_4bef_9C00_5F489B79628D__INCLUDED_

#include "IEC61970/Base/Domain/SusceptancePerLength.h"
#include "IEC61970/Base/Domain/ResistancePerLength.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/ReactancePerLength.h"
#include "BaseClass.h"

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
				 * N*(N-1)/2, where N is the number of phases possibly including neutral.    For
				 * instance, with N=4, column 1 = [1 2 3 4 ], column 2 = [- 5 6 7 ], column 3 = [-
				 * - 8 9], column 4 = [- - - 10].
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
#endif // !defined(EA_B2CB8601_AFFA_4bef_9C00_5F489B79628D__INCLUDED_)
