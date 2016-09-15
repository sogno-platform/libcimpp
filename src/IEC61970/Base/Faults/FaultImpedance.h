///////////////////////////////////////////////////////////
//  FaultImpedance.h
//  Implementation of the Class FaultImpedance
//  Created on:      28-Jan-2016 12:44:50
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#if !defined(EA_AC2BA714_8FD7_401e_9AA5_C00D69A6BB9F__INCLUDED_)
#define EA_AC2BA714_8FD7_401e_9AA5_C00D69A6BB9F__INCLUDED_

#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/Domain/Reactance.h"
#include "BaseClass.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Faults
		{
			/**
			 * Impedance description for the fault.
			 */
			class FaultImpedance : public BaseClass
			{

			public:
				FaultImpedance();
				virtual ~FaultImpedance();
				/**
				 * The resistance of the fault between phases and ground.
				 */
				IEC61970::Base::Domain::Resistance rGround;
				/**
				 * The resistance of the fault between phases.
				 */
				IEC61970::Base::Domain::Resistance rLineToLine;
				/**
				 * The reactance of the fault between phases and ground.
				 */
				IEC61970::Base::Domain::Reactance xGround;
				/**
				 * The reactance of the fault between phases.
				 */
				IEC61970::Base::Domain::Reactance xLineToLine;

			};

		}

	}

}
#endif // !defined(EA_AC2BA714_8FD7_401e_9AA5_C00D69A6BB9F__INCLUDED_)
