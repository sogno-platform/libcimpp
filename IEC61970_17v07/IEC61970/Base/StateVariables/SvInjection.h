///////////////////////////////////////////////////////////
//  SvInjection.h
//  Implementation of the Class SvInjection
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef SVINJECTION_H
#define SVINJECTION_H

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
				IEC61970::Base::Wires::SinglePhaseKind phase = IEC61970::Base::Wires::SinglePhaseKind::_undef;
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
#endif // SVINJECTION_H
