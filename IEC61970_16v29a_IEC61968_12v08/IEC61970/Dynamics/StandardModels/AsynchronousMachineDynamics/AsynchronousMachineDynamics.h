///////////////////////////////////////////////////////////
//  AsynchronousMachineDynamics.h
//  Implementation of the Class AsynchronousMachineDynamics
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef ASYNCHRONOUSMACHINEDYNAMICS_H
#define ASYNCHRONOUSMACHINEDYNAMICS_H

#include "IEC61970/Base/Wires/AsynchronousMachine.h"
#include "IEC61970/Dynamics/StandardModels/RotatingMachineDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace AsynchronousMachineDynamics
			{
				/**
				 * Asynchronous machine whose behaviour is described by reference to a standard
				 * model expressed in either time constant reactance form or equivalent circuit
				 * form <font color="#0f0f0f">or by definition of a user-defined model.</font>
				 * 
				 * <b>Parameter Notes:</b>
				 * <ol>
				 * 	<li>Asynchronous machine parameters such as <b>Xl, Xs</b> etc. are actually
				 * used as inductances (L) in the model, but are commonly referred to as
				 * reactances since, at nominal frequency, the per unit values are the same.
				 * However, some references use the symbol L instead of X. </li>
				 * </ol>
				 */
				class AsynchronousMachineDynamics : public IEC61970::Dynamics::StandardModels::RotatingMachineDynamics
				{

				public:
					AsynchronousMachineDynamics();
					virtual ~AsynchronousMachineDynamics();
					/**
					 * Asynchronous machine to which this asynchronous machine dynamics model applies.
					 */
					IEC61970::Base::Wires::AsynchronousMachine *AsynchronousMachine;

				};

			}

		}

	}

}
#endif // ASYNCHRONOUSMACHINEDYNAMICS_H
