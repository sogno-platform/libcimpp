///////////////////////////////////////////////////////////
//  Fault.h
//  Implementation of the Class Fault
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef FAULT_H
#define FAULT_H

#include <list>

#include "IEC61970/Base/Faults/FaultImpedance.h"
#include "IEC61970/Base/Faults/PhaseConnectedFaultKind.h"
#include "IEC61970/Base/Core/PhaseCode.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Base/Core/Equipment.h"
#include "IEC61970/Base/Faults/FaultCauseType.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Faults
		{
			/**
			 * Abnormal condition causing current flow through conducting equipment, such as
			 * caused by equipment failure or short circuits from objects not typically
			 * modeled (for example, a tree falling on a line).
			 */
			class Fault : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				Fault();
				virtual ~Fault();
				/**
				 * Fault impedance. Its usage is described by 'kind'.
				 */
				IEC61970::Base::Faults::FaultImpedance impedance;
				/**
				 * The kind of phase fault.
				 */
				IEC61970::Base::Faults::PhaseConnectedFaultKind kind;
				/**
				 * The phases participating in the fault. The fault connections into these phases
				 * are further specified by the type of fault.
				 */
				IEC61970::Base::Core::PhaseCode phases;
				/**
				 * Equipment carrying this fault.
				 */
				IEC61970::Base::Core::Equipment *FaultyEquipment;
				/**
				 * All types of fault cause.
				 */
				std::list<IEC61970::Base::Faults::FaultCauseType*> FaultCauseTypes;

			};

		}

	}

}
#endif // FAULT_H
