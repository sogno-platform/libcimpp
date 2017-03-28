///////////////////////////////////////////////////////////
//  LoadGenericNonLinear.h
//  Implementation of the Class LoadGenericNonLinear
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef LOADGENERICNONLINEAR_H
#define LOADGENERICNONLINEAR_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Dynamics/StandardModels/LoadDynamics/GenericNonLinearLoadModelKind.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/LoadDynamics/LoadDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace LoadDynamics
			{
				/**
				 * These load models (known also as generic non-linear dynamic (GNLD) load models)
				 * can be used in mid-term and long-term voltage stability simulations (i.e., to
				 * study voltage collapse), as they can replace a more detailed representation of
				 * aggregate load, including induction motors, thermostatically controlled and
				 * static loads.
				 */
				class LoadGenericNonLinear : public IEC61970::Dynamics::StandardModels::LoadDynamics::LoadDynamics
				{

				public:
					LoadGenericNonLinear();
					virtual ~LoadGenericNonLinear();
					/**
					 * Steady state voltage index for reactive power (BS).
					 */
					IEC61970::Base::Domain::Float bs;
					/**
					 * Transient voltage index for reactive power (BT).
					 */
					IEC61970::Base::Domain::Float bt;
					/**
					 * Type of generic non-linear load model.
					 */
					IEC61970::Dynamics::StandardModels::LoadDynamics::GenericNonLinearLoadModelKind genericNonLinearLoadModelType;
					/**
					 * Steady state voltage index for active power (LS).
					 */
					IEC61970::Base::Domain::Float ls;
					/**
					 * Transient voltage index for active power (LT).
					 */
					IEC61970::Base::Domain::Float lt;
					/**
					 * Dynamic portion of active load (P<sub>T</sub>).
					 */
					IEC61970::Base::Domain::Float pt;
					/**
					 * Dynamic portion of reactive load (Q<sub>T</sub>).
					 */
					IEC61970::Base::Domain::Float qt;
					/**
					 * Time constant of lag function of active power (T<sub>P</sub>).
					 */
					IEC61970::Base::Domain::Seconds tp;
					/**
					 * Time constant of lag function of reactive power (T<sub>Q</sub>).
					 */
					IEC61970::Base::Domain::Seconds tq;

				};

			}

		}

	}

}
#endif // LOADGENERICNONLINEAR_H
