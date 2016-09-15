///////////////////////////////////////////////////////////
//  ExcIEEEST5B.h
//  Implementation of the Class ExcIEEEST5B
//  Created on:      28-Jan-2016 12:44:37
//  Original author: pcha006
///////////////////////////////////////////////////////////

#if !defined(EA_1F97E5E3_9275_4c3f_827A_3431D6ECB7FB__INCLUDED_)
#define EA_1F97E5E3_9275_4c3f_827A_3431D6ECB7FB__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
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
				 * The class represents IEEE Std 421.5-2005 type ST5B model. The Type ST5B
				 * excitation system is a variation of the Type ST1A model, with alternative
				 * overexcitation and underexcitation inputs and additional limits.
				 * 
				 * Reference: IEEE Standard 421.5-2005 Section 7.5.
				 * 
				 * Note: the block diagram in the IEEE 421.5 standard has input signal Vc and does
				 * not indicate the summation point with Vref. The implementation of the
				 * ExcIEEEST5B shall consider summation point with Vref.
				 */
				class ExcIEEEST5B : public IEC61970::Dynamics::StandardModels::ExcitationSystemDynamics::ExcitationSystemDynamics
				{

				public:
					ExcIEEEST5B();
					virtual ~ExcIEEEST5B();
					/**
					 * Rectifier regulation factor (K<sub>C</sub>).  Typical Value = 0.004.
					 */
					IEC61970::Base::Domain::PU kc;
					/**
					 * Regulator gain (K<sub>R</sub>).  Typical Value = 200.
					 */
					IEC61970::Base::Domain::PU kr;
					/**
					 * Firing circuit time constant (T1).  Typical Value = 0.004.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Regulator lag time constant (T<sub>B1</sub>).  Typical Value = 6.
					 */
					IEC61970::Base::Domain::Seconds tb1;
					/**
					 * Regulator lag time constant (T<sub>B2</sub>).  Typical Value = 0.01.
					 */
					IEC61970::Base::Domain::Seconds tb2;
					/**
					 * Regulator lead time constant (T<sub>C1</sub>).  Typical Value = 0.8.
					 */
					IEC61970::Base::Domain::Seconds tc1;
					/**
					 * Regulator lead time constant (T<sub>C2</sub>).  Typical Value = 0.08.
					 */
					IEC61970::Base::Domain::Seconds tc2;
					/**
					 * OEL lag time constant (T<sub>OB1</sub>).  Typical Value = 2.
					 */
					IEC61970::Base::Domain::Seconds tob1;
					/**
					 * OEL lag time constant (T<sub>OB2</sub>).  Typical Value = 0.08.
					 */
					IEC61970::Base::Domain::Seconds tob2;
					/**
					 * OEL lead time constant (T<sub>OC1</sub>).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds toc1;
					/**
					 * OEL lead time constant (T<sub>OC2</sub>).  Typical Value = 0.08.
					 */
					IEC61970::Base::Domain::Seconds toc2;
					/**
					 * UEL lag time constant (T<sub>UB1</sub>).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::Seconds tub1;
					/**
					 * UEL lag time constant (T<sub>UB2</sub>).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::Seconds tub2;
					/**
					 * UEL lead time constant (T<sub>UC1</sub>).  Typical Value = 2.
					 */
					IEC61970::Base::Domain::Seconds tuc1;
					/**
					 * UEL lead time constant (T<sub>UC2</sub>).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds tuc2;
					/**
					 * Maximum voltage regulator output (V<sub>RMAX</sub>).  Typical Value = 5.
					 */
					IEC61970::Base::Domain::PU vrmax;
					/**
					 * Minimum voltage regulator output (V<sub>RMIN</sub>).  Typical Value = -4.
					 */
					IEC61970::Base::Domain::PU vrmin;

				};

			}

		}

	}

}
#endif // !defined(EA_1F97E5E3_9275_4c3f_827A_3431D6ECB7FB__INCLUDED_)
