///////////////////////////////////////////////////////////
//  AsynchronousMachineEquivalentCircuit.h
//  Implementation of the Class AsynchronousMachineEquivalentCircuit
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ASYNCHRONOUSMACHINEEQUIVALENTCIRCUIT_H
#define ASYNCHRONOUSMACHINEEQUIVALENTCIRCUIT_H

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
				 * The electrical equations of all variations of the asynchronous model are based
				 * on the AsynchronousEquivalentCircuit diagram for the direct and quadrature axes,
				 * with two equivalent rotor windings in each axis.
				 * 
				 * <b>Equations for conversion between Equivalent Circuit and Time Constant
				 * Reactance forms:</b>
				 * <b>Xs</b> = <b>Xm</b> + <b>Xl</b>
				 * <b>X'</b> = <b>Xl</b> + <b>Xm</b> * <b>Xlr1</b> / (<b>Xm</b> + <b>Xlr1</b>)
				 * <b>X''</b> = <b>Xl</b> + <b>Xm</b> * <b>Xlr1</b>* <b>Xlr2</b> / (<b>Xm</b> *
				 * <b>Xlr1</b> + <b>Xm</b> * <b>Xlr2</b> + <b>Xlr1</b> * <b>Xlr2</b>)
				 * <b>T'o</b> = (<b>Xm</b> + <b>Xlr1</b>) / (<b>omega</b><b><sub>0</sub></b> *
				 * <b>Rr1</b>)
				 * <b>T''o</b> = (<b>Xm</b> * <b>Xlr1</b> + <b>Xm</b> * <b>Xlr2</b> + <b>Xlr1</b>
				 * * <b>Xlr2</b>) / (<b>omega</b><b><sub>0</sub></b> * <b>Rr2</b> * (<b>Xm </b>+
				 * <b>Xlr1</b>)
				 * <b>
				 * </b>Same equations using CIM attributes from
				 * AsynchronousMachineTimeConstantReactance class on left of = sign and
				 * AsynchronousMachineEquivalentCircuit class on right (except as noted):
				 * xs = xm + RotatingMachineDynamics.statorLeakageReactance
				 * xp = RotatingMachineDynamics.statorLeakageReactance + xm * xlr1 / (xm + xlr1)
				 * xpp = RotatingMachineDynamics.statorLeakageReactance + xm * xlr1* xlr2 / (xm *
				 * xlr1 + xm * xlr2 + xlr1 * xlr2)
				 * tpo = (xm + xlr1) / (2*pi*nominal frequency * rr1)
				 * tppo = (xm * xlr1 + xm * xlr2 + xlr1 * xlr2) / (2*pi*nominal frequency * rr2 *
				 * (xm + xlr1).
				 */
				class AsynchronousMachineEquivalentCircuit : public IEC61970::Dynamics::StandardModels::AsynchronousMachineDynamics::AsynchronousMachineDynamics
				{

				public:
					AsynchronousMachineEquivalentCircuit();
					virtual ~AsynchronousMachineEquivalentCircuit();
					/**
					 * Damper 1 winding resistance.
					 */
					IEC61970::Base::Domain::PU rr1;
					/**
					 * Damper 2 winding resistance.
					 */
					IEC61970::Base::Domain::PU rr2;
					/**
					 * Damper 1 winding leakage reactance.
					 */
					IEC61970::Base::Domain::PU xlr1;
					/**
					 * Damper 2 winding leakage reactance.
					 */
					IEC61970::Base::Domain::PU xlr2;
					/**
					 * Magnetizing reactance.
					 */
					IEC61970::Base::Domain::PU xm;

				};

			}

		}

	}

}
#endif // ASYNCHRONOUSMACHINEEQUIVALENTCIRCUIT_H
