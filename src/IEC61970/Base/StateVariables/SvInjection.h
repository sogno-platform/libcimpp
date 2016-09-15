///////////////////////////////////////////////////////////
//  SvInjection.h
//  Implementation of the Class SvInjection
//  Created on:      28-Jan-2016 12:46:57
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_1AEC5BF7_C202_4eef_B0C0_35C41F763779__INCLUDED_)
#define EA_1AEC5BF7_C202_4eef_B0C0_35C41F763779__INCLUDED_

#include "IEC61970/Base/Wires/SinglePhaseKind.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/ReactivePower.h"
#include "IEC61970/Base/StateVariables/StateVariable.h"
#include "IEC61970/Base/Topology/TopologicalNode.h"

namespace IEC61970
{
	namespace Base
	{
		namespace StateVariables
		{
			/**
			 * The SvInjection is reporting the calculated bus injection minus the sum of the
			 * terminal flows. The terminal flow is positive out from the bus (load sign
			 * convention) and bus injection has positive flow into the bus. SvInjection may
			 * have the remainder after state estimation or slack after power flow calculation.
			 */
			class SvInjection : public IEC61970::Base::StateVariables::StateVariable
			{

			public:
				SvInjection();
				virtual ~SvInjection();
				/**
				 * The terminal phase at which the connection is applied.   If missing, the
				 * injection is assumed to be balanced among non-neutral phases.
				 */
				IEC61970::Base::Wires::SinglePhaseKind phase;
				/**
				 * The active power injected into the bus in addition to injections from equipment
				 * terminals.  Positive sign means injection into the TopologicalNode (bus).
				 */
				IEC61970::Base::Domain::ActivePower pInjection;
				/**
				 * The reactive power injected into the bus in addition to injections from
				 * equipment terminals. Positive sign means injection into the TopologicalNode
				 * (bus).
				 */
				IEC61970::Base::Domain::ReactivePower qInjection;
				/**
				 * The topological node associated with the flow injection state variable.
				 */
				IEC61970::Base::Topology::TopologicalNode *TopologicalNode;

			};

		}

	}

}
#endif // !defined(EA_1AEC5BF7_C202_4eef_B0C0_35C41F763779__INCLUDED_)
