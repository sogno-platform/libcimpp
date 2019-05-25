///////////////////////////////////////////////////////////
//  LoadComposite.h
//  Implementation of the Class LoadComposite
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef LOADCOMPOSITE_H
#define LOADCOMPOSITE_H

#include "IEC61970/Base/Domain/Float.h"
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
				 * This model combines static load and induction motor load effects.
				 * The dynamics of the motor are simplified by linearizing the induction machine
				 * equations.
				 */
				class LoadComposite : public IEC61970::Dynamics::StandardModels::LoadDynamics::LoadDynamics
				{

				public:
					LoadComposite();
					virtual ~LoadComposite();
					/**
					 * Active load-frequency dependence index (dynamic) (Epfd).  Typical Value = 1.5.
					 */
					IEC61970::Base::Domain::Float epfd;
					/**
					 * Active load-frequency dependence index (static) (Epfs).  Typical Value = 1.5.
					 */
					IEC61970::Base::Domain::Float epfs;
					/**
					 * Active load-voltage dependence index (dynamic) (Epvd).  Typical Value = 0.7.
					 */
					IEC61970::Base::Domain::Float epvd;
					/**
					 * Active load-voltage dependence index (static) (Epvs).  Typical Value = 0.7.
					 */
					IEC61970::Base::Domain::Float epvs;
					/**
					 * Reactive load-frequency dependence index (dynamic) (Eqfd).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Float eqfd;
					/**
					 * Reactive load-frequency dependence index (static) (Eqfs).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Float eqfs;
					/**
					 * Reactive load-voltage dependence index (dynamic) (Eqvd).  Typical Value = 2.
					 */
					IEC61970::Base::Domain::Float eqvd;
					/**
					 * Reactive load-voltage dependence index (static) (Eqvs).  Typical Value = 2.
					 */
					IEC61970::Base::Domain::Float eqvs;
					/**
					 * Inertia constant (H).  Typical Value = 2.5.
					 */
					IEC61970::Base::Domain::Seconds h;
					/**
					 * Loading factor – ratio of initial P to motor MVA base (Lfrac).  Typical Value =
					 * 0.8.
					 */
					IEC61970::Base::Domain::Float lfrac;
					/**
					 * Fraction of constant-power load to be represented by this motor model (Pfrac)
					 * (>=0.0 and <=1.0).  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::Float pfrac;

				};

			}

		}

	}

}
#endif // LOADCOMPOSITE_H
