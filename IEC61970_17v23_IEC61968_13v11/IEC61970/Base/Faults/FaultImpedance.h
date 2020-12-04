///////////////////////////////////////////////////////////
//  FaultImpedance.h
//  Implementation of the Class FaultImpedance
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#ifndef FAULTIMPEDANCE_H
#define FAULTIMPEDANCE_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/Domain/Reactance.h"

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
#endif // FAULTIMPEDANCE_H
