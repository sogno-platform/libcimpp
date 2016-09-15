///////////////////////////////////////////////////////////
//  AsynchronousMachineTimeConstantReactance.h
//  Implementation of the Class AsynchronousMachineTimeConstantReactance
//  Created on:      28-Jan-2016 12:43:24
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_EE91C418_57A6_4a46_ADE4_517B9FF17442__INCLUDED_)
#define EA_EE91C418_57A6_4a46_ADE4_517B9FF17442__INCLUDED_

#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Dynamics/StandardModels/AsynchronousMachineDynamics/AsynchronousMachineDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace AsynchronousMachineDynamics
			{
				/**
				 * <b>Parameter Notes:</b>
				 * <ol>
				 * 	<li>If <b>X''</b> = <b>X'</b>, a single cage (one equivalent rotor winding per
				 * axis) is modelled.</li>
				 * 	<li>The “p” in the attribute names is a substitution for a “prime” in the
				 * usual parameter notation, e.g. tpo refers to T'o.</li>
				 * </ol>
				 * 
				 * The parameters used for models expressed in time constant reactance form
				 * include:
				 * <ul>
				 * 	<li>RotatingMachine.ratedS (MVAbase)</li>
				 * 	<li>RotatingMachineDynamics.damping (D)</li>
				 * 	<li>RotatingMachineDynamics.inertia (H)</li>
				 * 	<li>RotatingMachineDynamics.saturationFactor (S1)</li>
				 * 	<li>RotatingMachineDynamics.saturationFactor120 (S12)</li>
				 * 	<li>RotatingMachineDynamics.statorLeakageReactance (Xl)</li>
				 * 	<li>RotatingMachineDynamics.statorResistance (Rs)</li>
				 * 	<li>.xs (Xs)</li>
				 * 	<li>.xp (X')</li>
				 * 	<li>.xpp (X'')</li>
				 * 	<li>.tpo (T'o)</li>
				 * 	<li>.tppo (T''o).</li>
				 * </ul>
				 */
				class AsynchronousMachineTimeConstantReactance : public IEC61970::Dynamics::StandardModels::AsynchronousMachineDynamics::AsynchronousMachineDynamics
				{

				public:
					AsynchronousMachineTimeConstantReactance();
					virtual ~AsynchronousMachineTimeConstantReactance();
					/**
					 * Transient rotor time constant (T'o) (> T''o).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::Seconds tpo;
					/**
					 * Subtransient rotor time constant (T''o) (> 0).  Typical Value = 0.03.
					 */
					IEC61970::Base::Domain::Seconds tppo;
					/**
					 * Transient reactance (unsaturated) (X') (>=X'').  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::PU xp;
					/**
					 * Subtransient reactance (unsaturated) (X'') (> Xl).  Typical Value = 0.2.
					 */
					IEC61970::Base::Domain::PU xpp;
					/**
					 * Synchronous reactance (Xs) (>= X').  Typical Value = 1.8.
					 */
					IEC61970::Base::Domain::PU xs;

				};

			}

		}

	}

}
#endif // !defined(EA_EE91C418_57A6_4a46_ADE4_517B9FF17442__INCLUDED_)
