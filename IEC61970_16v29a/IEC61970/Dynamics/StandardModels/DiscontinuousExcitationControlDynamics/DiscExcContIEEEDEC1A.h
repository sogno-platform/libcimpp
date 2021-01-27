///////////////////////////////////////////////////////////
//  DiscExcContIEEEDEC1A.h
//  Implementation of the Class DiscExcContIEEEDEC1A
//  Original author: pcha006
///////////////////////////////////////////////////////////

#ifndef DISCEXCCONTIEEEDEC1A_H
#define DISCEXCCONTIEEEDEC1A_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/DiscontinuousExcitationControlDynamics/DiscontinuousExcitationControlDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace DiscontinuousExcitationControlDynamics
			{
				/**
				 * The class represents IEEE Type DEC1A discontinuous excitation control model
				 * that boosts generator excitation to a level higher than that demanded by the
				 * voltage regulator and stabilizer immediately following a system fault.
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 12.2. 
				 */
				class DiscExcContIEEEDEC1A : public IEC61970::Dynamics::StandardModels::DiscontinuousExcitationControlDynamics::DiscontinuousExcitationControlDynamics
				{

				public:
					DiscExcContIEEEDEC1A();
					virtual ~DiscExcContIEEEDEC1A();
					/**
					 * Speed change reference (<i>E</i><i><sub>SC</sub></i>).  Typical Value = 0.0015.
					 */
					IEC61970::Base::Domain::PU esc;
					/**
					 * Discontinuous controller gain (<i>K</i><i><sub>AN</sub></i>).  Typical Value =
					 * 400.
					 */
					IEC61970::Base::Domain::PU kan;
					/**
					 * Terminal voltage limiter gain (<i>K</i><i><sub>ETL</sub></i>).  Typical Value =
					 * 47.
					 */
					IEC61970::Base::Domain::PU ketl;
					/**
					 * Discontinuous controller time constant (<i>T</i><i><sub>AN</sub></i>).  Typical
					 * Value = 0.08.
					 */
					IEC61970::Base::Domain::Seconds tan;
					/**
					 * Time constant (<i>T</i><i><sub>D</sub></i>).  Typical Value = 0.03.
					 */
					IEC61970::Base::Domain::Seconds td;
					/**
					 * Time constant (<i>T</i><i><sub>L</sub></i><sub>1</sub>).  Typical Value = 0.025.
					 */
					IEC61970::Base::Domain::Seconds tl1;
					/**
					 * Time constant (<i>T</i><i><sub>L</sub></i><sub>2</sub>).  Typical Value = 1.25.
					 */
					IEC61970::Base::Domain::Seconds tl2;
					/**
					 * DEC washout time constant (<i>T</i><i><sub>W</sub></i><sub>5</sub>).  Typical
					 * Value = 5.
					 */
					IEC61970::Base::Domain::Seconds tw5;
					/**
					 * Regulator voltage reference (<i>V</i><i><sub>AL</sub></i>).  Typical Value = 5.
					 * 5.
					 */
					IEC61970::Base::Domain::PU val;
					/**
					 * Limiter for Van (<i>V</i><i><sub>ANMAX</sub></i>).
					 */
					IEC61970::Base::Domain::PU vanmax;
					/**
					 * Limiter (<i>V</i><i><sub>OMAX</sub></i>).  Typical Value = 0.3.
					 */
					IEC61970::Base::Domain::PU vomax;
					/**
					 * Limiter (<i>V</i><i><sub>OMIN</sub></i>).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::PU vomin;
					/**
					 * Limiter (<i>V</i><i><sub>SMAX</sub></i>).  Typical Value = 0.2.
					 */
					IEC61970::Base::Domain::PU vsmax;
					/**
					 * Limiter (<i>V</i><i><sub>SMIN</sub></i>).  Typical Value = -0.066.
					 */
					IEC61970::Base::Domain::PU vsmin;
					/**
					 * Terminal voltage level reference (<i>V</i><i><sub>TC</sub></i>).  Typical Value
					 * = 0.95.
					 */
					IEC61970::Base::Domain::PU vtc;
					/**
					 * Voltage reference (<i>V</i><i><sub>TLMT</sub></i>).  Typical Value = 1.1.
					 */
					IEC61970::Base::Domain::PU vtlmt;
					/**
					 * Voltage limits (<i>V</i><i><sub>TM</sub></i>).  Typical Value = 1.13.
					 */
					IEC61970::Base::Domain::PU vtm;
					/**
					 * Voltage limits (<i>V</i><i><sub>TN</sub></i>).  Typical Value = 1.12.
					 */
					IEC61970::Base::Domain::PU vtn;

				};

			}

		}

	}

}
#endif // DISCEXCCONTIEEEDEC1A_H
