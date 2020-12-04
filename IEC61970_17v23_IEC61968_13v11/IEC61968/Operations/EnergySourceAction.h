///////////////////////////////////////////////////////////
//  EnergySourceAction.h
//  Implementation of the Class EnergySourceAction
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ENERGYSOURCEACTION_H
#define ENERGYSOURCEACTION_H

#include "IEC61968/Operations/TempEquipActionKind.h"
#include "IEC61968/Operations/SwitchingAction.h"
#include "IEC61970/Base/Wires/EnergySource.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Action on energy source as a switching step.
		 */
		class EnergySourceAction : public IEC61968::Operations::SwitchingAction
		{

		public:
			EnergySourceAction();
			virtual ~EnergySourceAction();
			/**
			 * Switching action to perform.
			 */
			IEC61968::Operations::TempEquipActionKind kind = IEC61968::Operations::TempEquipActionKind::_undef;
			/**
			 * Energy source on which this action is taken.
			 */
			IEC61970::Base::Wires::EnergySource *EnergySource;

		};

	}

}
#endif // ENERGYSOURCEACTION_H
