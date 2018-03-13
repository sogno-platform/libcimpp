///////////////////////////////////////////////////////////
//  ExcBBC.h
//  Implementation of the Class ExcBBC
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef EXCBBC_H
#define EXCBBC_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Boolean.h"
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
				 * Transformer fed static excitation system (static with ABB regulator). This
				 * model represents a static excitation system in which a gated thyristor bridge
				 * fed by a transformer at the main generator terminals feeds the main generator
				 * directly.
				 */
				class ExcBBC : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcBBC();
					virtual ~ExcBBC();
					/**
					 * Maximum open circuit exciter voltage (Efdmax).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::PU efdmax;
					/**
					 * Minimum open circuit exciter voltage (Efdmin).  Typical Value = -5.
					 */
					IEC61970::Base::Domain::PU efdmin;
					/**
					 * Steady state gain (K).  Typical Value = 300.
					 */
					IEC61970::Base::Domain::PU k;
					/**
					 * Supplementary signal routing selector (switch).
					 * true = Vs connected to 3rd summing point
					 * false =  Vs connected to 1st summing point (see diagram).
					 * Typical Value = true.
					 */
//#warning Member "switch" is renamed to "routing_selector", this does not comply the CIM standard!
					IEC61970::Base::Domain::Boolean routing_selector;
					/**
					 * Controller time constant (T1).  Typical Value = 6.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Controller time constant (T2).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Lead/lag time constant (T3).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * Lead/lag time constant (T4).  Typical Value = 0.01.
					 */
					IEC61970::Base::Domain::Seconds t4;
					/**
					 * Maximum control element output (Vrmax).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum control element output (Vrmin).  Typical Value = -5.
					 */
					IEC61970::Base::Domain::PU vrmin;
					/**
					 * Effective excitation transformer reactance (Xe).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU xe;

				};

			}

		}

	}

}
#endif // EXCBBC_H
