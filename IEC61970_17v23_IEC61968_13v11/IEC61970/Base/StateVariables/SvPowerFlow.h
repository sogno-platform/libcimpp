///////////////////////////////////////////////////////////
//  SvPowerFlow.h
//  Implementation of the Class SvPowerFlow
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef SVPOWERFLOW_H
#define SVPOWERFLOW_H

#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Wires/SinglePhaseKind.h"
#include "IEC61970/Base/Domain/ReactivePower.h"
#include "IEC61970/Base/StateVariables/StateVariable.h"
#include "IEC61970/Base/Core/Terminal.h"

namespace IEC61970
{
	namespace Base
	{
		namespace StateVariables
		{
			/**
			 * State variable for power flow. Load convention is used for flow direction. This
			 * means flow out from the TopologicalNode into the equipment is positive.
			 */
			class SvPowerFlow : public IEC61970::Base::StateVariables::StateVariable
			{

			public:
				SvPowerFlow();
				virtual ~SvPowerFlow();
				/**
				 * The active power flow. Load sign convention is used, i.e. positive sign means
				 * flow out from a TopologicalNode (bus) into the conducting equipment.
				 */
				IEC61970::Base::Domain::ActivePower p;
				/**
				 * The individual phase of the flow.   If unspecified, then assumed to be balanced
				 * among phases.
				 */
				IEC61970::Base::Wires::SinglePhaseKind phase = IEC61970::Base::Wires::SinglePhaseKind::_undef;
				/**
				 * The reactive power flow. Load sign convention is used, i.e. positive sign means
				 * flow out from a TopologicalNode (bus) into the conducting equipment.
				 */
				IEC61970::Base::Domain::ReactivePower q;
				/**
				 * The terminal associated with the power flow state variable.
				 */
				IEC61970::Base::Core::Terminal *Terminal;

			};

		}

	}

}
#endif // SVPOWERFLOW_H
