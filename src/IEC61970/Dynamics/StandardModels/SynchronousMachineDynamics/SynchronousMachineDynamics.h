///////////////////////////////////////////////////////////
//  SynchronousMachineDynamics.h
//  Implementation of the Class SynchronousMachineDynamics
//  Created on:      28-Jan-2016 12:47:05
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_505E3805_2B31_4c0c_9C3C_BACCFBC0191E__INCLUDED_)
#define EA_505E3805_2B31_4c0c_9C3C_BACCFBC0191E__INCLUDED_

#include <list>

#include "IEC61970/Base/Wires/SynchronousMachine.h"
#include "IEC61970/Dynamics/StandardModels/TurbineGovernorDynamics/TurbineGovernorDynamics.h"
#include "IEC61970/Dynamics/StandardModels/RotatingMachineDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace SynchronousMachineDynamics
			{
				/**
				 * Synchronous machine whose behaviour is described by reference to a standard
				 * model expressed in one of the following forms:
				 * <ul>
				 * 	<li>simplified (or classical), where a group of generators or motors is not
				 * modelled in detail</li>
				 * </ul>
				 * <ul>
				 * 	<li>detailed, in equivalent circuit form</li>
				 * 	<li>detailed, in time constant reactance form</li>
				 * </ul>
				 * <font color="#0f0f0f">or by definition of a user-defined model.</font>
				 * <font color="#0f0f0f">
				 * </font><font color="#0f0f0f"><b>Note:</b>  It is a common practice to represent
				 * small generators by a negative load rather than by a dynamic generator model
				 * when performing dynamics simulations. In this case a SynchronousMachine in the
				 * static model is not represented by anything in the dynamics model, instead it
				 * is treated as ordinary load.</font>
				 * <font color="#0f0f0f">
				 * </font><font color="#0f0f0f"><b>Parameter Notes:</b></font>
				 * <ol>
				 * 	<li><font color="#0f0f0f">Synchronous machine parameters such as <b>Xl, Xd</b>,
				 * <b> Xp</b> etc. are actually used as inductances (L) in the models,</font> but
				 * are commonly referred to as reactances since, at nominal frequency, the per
				 * unit values are the same. However, some references use the symbol L instead of
				 * X. </li>
				 * </ol>
				 */
				class SynchronousMachineDynamics : public IEC61970::Dynamics::StandardModels::RotatingMachineDynamics
				{

				public:
					SynchronousMachineDynamics();
					virtual ~SynchronousMachineDynamics();
					/**
					 * Synchronous machine to which synchronous machine dynamics model applies.
					 */
					IEC61970::Base::Wires::SynchronousMachine *SynchronousMachine;
					/**
					 * Turbine-governor model associated with this synchronous machine model.
					 */
					std::list<IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics*> TurbineGovernorDynamics;

				};

			}

		}

	}

}
#endif // !defined(EA_505E3805_2B31_4c0c_9C3C_BACCFBC0191E__INCLUDED_)
