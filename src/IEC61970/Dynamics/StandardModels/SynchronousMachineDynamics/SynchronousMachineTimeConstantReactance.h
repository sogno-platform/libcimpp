///////////////////////////////////////////////////////////
//  SynchronousMachineTimeConstantReactance.h
//  Implementation of the Class SynchronousMachineTimeConstantReactance
//  Created on:      28-Jan-2016 12:47:08
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_EA21170E_8B2A_4089_995A_077B80087571__INCLUDED_)
#define EA_EA21170E_8B2A_4089_995A_077B80087571__INCLUDED_

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Dynamics/StandardModels/SynchronousMachineDynamics/SynchronousMachineModelKind.h"
#include "IEC61970/Dynamics/StandardModels/SynchronousMachineDynamics/RotorKind.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Dynamics/StandardModels/SynchronousMachineDynamics/SynchronousMachineDetailed.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace SynchronousMachineDynamics
			{
				/**
				 * Synchronous machine detailed modelling types are defined by the combination of
				 * the attributes SynchronousMachineTimeConstantReactance.modelType and
				 * SynchronousMachineTimeConstantReactance.rotorType.
				 * <b>
				 * </b><b>Parameter notes:</b>
				 * <ol>
				 * 	<li>The “p” in the time-related attribute names is a substitution for a
				 * “prime” in the usual parameter notation, e.g. tpdo refers to <b>T'do</b>.</li>
				 * </ol>
				 * <b>
				 * </b>The parameters used for models expressed in time constant reactance form
				 * include:
				 * <ul>
				 * 	<li>RotatingMachine.ratedS (MVAbase)</li>
				 * 	<li>RotatingMachineDynamics.damping (D)</li>
				 * 	<li>RotatingMachineDynamics.inertia (H)</li>
				 * 	<li>RotatingMachineDynamics.saturationFactor (S1)</li>
				 * 	<li>RotatingMachineDynamics.saturationFactor120 (S12)</li>
				 * 	<li>RotatingMachineDynamics.statorLeakageReactance (Xl)</li>
				 * 	<li>RotatingMachineDynamics.statorResistance (Rs)</li>
				 * 	<li>SynchronousMachineTimeConstantReactance.ks (Ks)</li>
				 * 	<li>SynchronousMachineDetailed.saturationFactorQAxis (S1q)</li>
				 * 	<li>SynchronousMachineDetailed.saturationFactor120QAxis (S12q)</li>
				 * 	<li>SynchronousMachineDetailed.efdBaseRatio</li>
				 * 	<li>SynchronousMachineDetailed.ifdBaseType</li>
				 * 	<li>SynchronousMachineDetailed.ifdBaseValue, if present</li>
				 * 	<li>.xDirectSync (Xd)</li>
				 * 	<li>.xDirectTrans (X'd)</li>
				 * 	<li>.xDirectSubtrans (X''d)</li>
				 * 	<li>.xQuadSync (Xq)</li>
				 * 	<li>.xQuadTrans (X'q)</li>
				 * 	<li>.xQuadSubtrans (X''q)</li>
				 * 	<li>.tpdo (T'do)</li>
				 * 	<li>.tppdo (T''do)</li>
				 * 	<li>.tpqo (T'qo)</li>
				 * 	<li>.tppqo (T''qo)</li>
				 * 	<li>.tc.</li>
				 * </ul>
				 */
				class SynchronousMachineTimeConstantReactance : public IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineDetailed
				{

				public:
					SynchronousMachineTimeConstantReactance();
					virtual ~SynchronousMachineTimeConstantReactance();
					/**
					 * Saturation loading correction factor (Ks) (>= 0).  Used only by Type J model.
					 * Typical Value = 0.
					 */
					IEC61970::Base::Domain::Float ks;
					/**
					 * Type of synchronous machine model used in Dynamic simulation applications.
					 */
					IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineModelKind modelType;
					/**
					 * Type of rotor on physical machine.
					 */
					IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::RotorKind rotorType;
					/**
					 * Damping time constant for “Canay” reactance.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Direct-axis transient rotor time constant (T'do) (> T''do).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::Seconds tpdo;
					/**
					 * Direct-axis subtransient rotor time constant (T''do) (> 0).  Typical Value = 0.
					 * 03.
					 */
					IEC61970::Base::Domain::Seconds tppdo;
					/**
					 * Quadrature-axis subtransient rotor time constant (T''qo) (> 0). Typical Value =
					 * 0.03.
					 */
					IEC61970::Base::Domain::Seconds tppqo;
					/**
					 * Quadrature-axis transient rotor time constant (T'qo) (> T''qo). Typical Value =
					 * 0.5.
					 */
					IEC61970::Base::Domain::Seconds tpqo;
					/**
					 * Direct-axis subtransient reactance (unsaturated) (X''d) (> Xl).  Typical Value
					 * = 0.2.
					 */
					IEC61970::Base::Domain::PU xDirectSubtrans;
					/**
					 * Direct-axis synchronous reactance (Xd) (>= X'd).
					 * The quotient of a sustained value of that AC component of armature voltage that
					 * is produced by the total direct-axis flux due to direct-axis armature current
					 * and the value of the AC component of this current, the machine running at rated
					 * speed. Typical Value = 1.8.
					 */
					IEC61970::Base::Domain::PU xDirectSync;
					/**
					 * Direct-axis transient reactance (unsaturated) (X'd) (> =X''d).  Typical Value =
					 * 0.5.
					 */
					IEC61970::Base::Domain::PU xDirectTrans;
					/**
					 * Quadrature-axis subtransient reactance (X''q) (> Xl).  Typical Value = 0.2.
					 */
					IEC61970::Base::Domain::PU xQuadSubtrans;
					/**
					 * Quadrature-axis synchronous reactance (Xq) (> =X'q).
					 * The ratio of the component of reactive armature voltage, due to the quadrature-
					 * axis component of armature current, to this component of current, under steady
					 * state conditions and at rated frequency.  Typical Value = 1.6.
					 */
					IEC61970::Base::Domain::PU xQuadSync;
					/**
					 * Quadrature-axis transient reactance (X'q) (> =X''q).  Typical Value = 0.3.
					 */
					IEC61970::Base::Domain::PU xQuadTrans;

				};

			}

		}

	}

}
#endif // !defined(EA_EA21170E_8B2A_4089_995A_077B80087571__INCLUDED_)
