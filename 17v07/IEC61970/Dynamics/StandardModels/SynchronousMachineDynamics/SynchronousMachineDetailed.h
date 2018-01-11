///////////////////////////////////////////////////////////
//  SynchronousMachineDetailed.h
//  Implementation of the Class SynchronousMachineDetailed
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef SYNCHRONOUSMACHINEDETAILED_H
#define SYNCHRONOUSMACHINEDETAILED_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Dynamics/StandardModels/SynchronousMachineDynamics/IfdBaseKind.h"
#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Dynamics/StandardModels/SynchronousMachineDynamics/SynchronousMachineDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace SynchronousMachineDynamics
			{
				/**
				 * All synchronous machine detailed types use a subset of the same data parameters
				 * and input/output variables.
				 * The several variations differ in the following ways:
				 * <ul>
				 * 	<li>The number of  equivalent windings that are included</li>
				 * 	<li>The way in which saturation is incorporated into the model.</li>
				 * 	<li>Whether or not “subtransient saliency” (<b>X''q</b> not = <b>X''d</b>) is
				 * represented.</li>
				 * </ul>
				 * <b>Note:</b> It is not necessary for each simulation tool to have separate
				 * models for each of the model types.  The same model can often be used for
				 * several types by alternative logic within the model.  Also, differences in
				 * saturation representation may not result in significant model performance
				 * differences so model substitutions are often acceptable. 
				 */
				class SynchronousMachineDetailed : public IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineDynamics
				{

				public:
					SynchronousMachineDetailed();
					virtual ~SynchronousMachineDetailed();
					/**
					 * Ratio of Efd bases of exciter and generator models.  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Float efdBaseRatio;
					/**
					 * Excitation base system mode.  Typical Value = ifag.
					 */
					IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::IfdBaseKind ifdBaseType = IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::IfdBaseKind::_undef;
					/**
					 * Ifd base current if .ifdBaseType = other.
					 * Not needed if .ifdBaseType not = other.
					 * Unit = A.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::CurrentFlow ifdBaseValue;
					/**
					 * Q-axis saturation factor at 120% of rated terminal voltage (S12q) (>=S1q).
					 * Typical Value = 0.12.
					 */
					IEC61970::Base::Domain::Float saturationFactor120QAxis;
					/**
					 * Q-axis saturation factor at rated terminal voltage (S1q) (>= 0). Typical Value
					 * = 0.02.
					 */
					IEC61970::Base::Domain::Float saturationFactorQAxis;

				};

			}

		}

	}

}
#endif // SYNCHRONOUSMACHINEDETAILED_H
