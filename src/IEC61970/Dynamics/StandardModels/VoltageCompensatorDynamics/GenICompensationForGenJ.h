///////////////////////////////////////////////////////////
//  GenICompensationForGenJ.h
//  Implementation of the Class GenICompensationForGenJ
//  Created on:      28-Jan-2016 12:44:57
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_29D3B211_F291_4909_A5F6_21C5A85D03E7__INCLUDED_)
#define EA_29D3B211_F291_4909_A5F6_21C5A85D03E7__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Dynamics/StandardModels/VoltageCompensatorDynamics/VCompIEEEType2.h"
#include "IEC61970/Dynamics/StandardModels/SynchronousMachineDynamics/SynchronousMachineDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace VoltageCompensatorDynamics
			{
				/**
				 * This class provides the resistive and reactive components of compensation for
				 * the generator associated with the IEEE Type 2 voltage compensator for current
				 * flow out of one of the other generators in the interconnection.
				 */
				class GenICompensationForGenJ : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					GenICompensationForGenJ();
					virtual ~GenICompensationForGenJ();
					/**
					 * <font color="#0f0f0f">Resistive component of compensation of generator
					 * associated with this IEEE Type 2 voltage compensator for current flow out of
					 * another generator (Rcij).</font>
					 */
					IEC61970::Base::Domain::PU rcij;
					/**
					 * <font color="#0f0f0f">Reactive component of compensation of generator
					 * associated with this IEEE Type 2 voltage compensator for current flow out of
					 * another generator (Xcij).</font>
					 */
					IEC61970::Base::Domain::PU xcij;
					/**
					 * The standard IEEE Type 2 voltage compensator of this compensation.
					 */
					IEC61970::Dynamics::StandardModels::VoltageCompensatorDynamics::VCompIEEEType2 *VcompIEEEType2;
					/**
					 * Standard synchronous machine out of which current flow is being compensated for.
					 */
					IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineDynamics *SynchronousMachineDynamics;

				};

			}

		}

	}

}
#endif // !defined(EA_29D3B211_F291_4909_A5F6_21C5A85D03E7__INCLUDED_)
