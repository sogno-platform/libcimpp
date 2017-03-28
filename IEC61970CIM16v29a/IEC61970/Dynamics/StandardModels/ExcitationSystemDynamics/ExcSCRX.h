///////////////////////////////////////////////////////////
//  ExcSCRX.h
//  Implementation of the Class ExcSCRX
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef EXCSCRX_H
#define EXCSCRX_H

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/ExcitationSystemDynamics/ExcitationSystemDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace ExcitationSystemDynamics
			{
				/**
				 * Simple excitation system model representing generic characteristics of many
				 * excitation systems; intended for use where negative field current may be a
				 * problem.
				 */
				class ExcSCRX : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcSCRX();
					virtual ~ExcSCRX();
					/**
					 * Power source switch (Cswitch).
					 * true = fixed voltage of 1.0 PU
					 * false = generator terminal voltage.
					 */
					IEC61970::Base::Domain::Boolean cswitch;
					/**
					 * Maximum field voltage output (Emax).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::PU emax;
					/**
					 * Minimum field voltage output (Emin).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU emin;
					/**
					 * Gain (K) (>0).  Typical Value = 200.
					 */
					IEC61970::Base::Domain::PU k;
					/**
					 * Rc/Rfd - ratio of field discharge resistance to field winding resistance
					 * (RcRfd).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Float rcrfd;
					/**
					 * Ta/Tb - gain reduction ratio of lag-lead element (TaTb). The parameter Ta is
					 * not defined explicitly.  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Float tatb;
					/**
					 * Denominator time constant of lag-lead block (Tb).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Time constant of gain block (Te) (>0).  Typical Value = 0.02.
					 */
					IEC61970::Base::Domain::Seconds te;

				};

			}

		}

	}

}
#endif // EXCSCRX_H
