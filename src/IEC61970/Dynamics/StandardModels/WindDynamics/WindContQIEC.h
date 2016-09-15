///////////////////////////////////////////////////////////
//  WindContQIEC.h
//  Implementation of the Class WindContQIEC
//  Created on:      28-Jan-2016 12:47:48
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_EFC42903_B91B_49c9_A248_93F1F25CF03E__INCLUDED_)
#define EA_EFC42903_B91B_49c9_A248_93F1F25CF03E__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindLVRTQcontrolModesKind.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindQcontrolModesKind.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType3or4IEC.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * Q control model.
				 * 
				 * Reference: IEC Standard 61400-27-1 Section 6.6.5.6.
				 */
				class WindContQIEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindContQIEC();
					virtual ~WindContQIEC();
					/**
					 * Maximum reactive current injection during dip (i<sub>qh1</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::PU iqh1;
					/**
					 * Maximum reactive current injection (i<sub>qmax</sub>). It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU iqmax;
					/**
					 * Minimum reactive current injection (i<sub>qmin</sub>). It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU iqmin;
					/**
					 * Post fault reactive current injection (<i>i</i><sub>qpost</sub>). It is project
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::PU iqpost;
					/**
					 * Reactive power PI controller integration gain (<i>K</i><sub>I,q</sub>). It is
					 * type dependent parameter.
					 */
					IEC61970::Base::Domain::PU kiq;
					/**
					 * Voltage PI controller integration gain (<i>K</i><sub>I,u</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::PU kiu;
					/**
					 * Reactive power PI controller proportional gain (<i>K</i><sub>P,q</sub>). It is
					 * type dependent parameter.
					 */
					IEC61970::Base::Domain::PU kpq;
					/**
					 * Voltage PI controller proportional gain (<i>K</i><sub>P,u</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::PU kpu;
					/**
					 * Voltage scaling factor for LVRT current (<i>K</i><sub>qv</sub>). It is project
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::PU kqv;
					/**
					 * Maximum reactive power (q<sub>max</sub>). It is type dependent parameter.
					 */
					IEC61970::Base::Domain::PU qmax;
					/**
					 * Minimum reactive power (q<sub>min</sub>). It is type dependent parameter.
					 */
					IEC61970::Base::Domain::PU qmin;
					/**
					 * Resistive component of voltage drop impedance (<i>r</i><sub>droop</sub>). It is
					 * project dependent parameter.
					 */
					IEC61970::Base::Domain::PU rdroop;
					/**
					 * Time constant in reactive current lag (T<sub>iq</sub>). It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::Seconds tiq;
					/**
					 * Power measurement filter time constant (<i>T</i><sub>pfilt</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tpfilt;
					/**
					 * Length of time period where post fault reactive power is injected
					 * (<i>T</i><sub>post</sub>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tpost;
					/**
					 * Time constant in reactive power order lag (<i>T</i><sub>qord</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tqord;
					/**
					 * Voltage measurement filter time constant (<i>T</i><sub>ufilt</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tufilt;
					/**
					 * Voltage dead band lower limit (<i>u</i><sub>db1</sub>). It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU udb1;
					/**
					 * Voltage dead band upper limit (<i>u</i><sub>db2</sub>). It is type dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU udb2;
					/**
					 * Maximum voltage in voltage PI controller integral term (u<sub>max</sub>). It is
					 * type dependent parameter.
					 */
					IEC61970::Base::Domain::PU umax;
					/**
					 * Minimum voltage in voltage PI controller integral term (u<sub>min</sub>). It is
					 * type dependent parameter.
					 */
					IEC61970::Base::Domain::PU umin;
					/**
					 * Voltage threshold for LVRT detection in q control (<i>u</i><sub>qdip</sub>). It
					 * is type dependent parameter.
					 */
					IEC61970::Base::Domain::PU uqdip;
					/**
					 * User defined bias in voltage reference (<i>u</i><sub>ref0</sub>), used when
					 * <i>M</i><sub>qG</sub> =<i> M</i><sub>G,u</sub>. It is case dependent parameter.
					 */
					IEC61970::Base::Domain::PU uref0;
					/**
					 * Types of LVRT Q control modes (<i>M</i><sub>qLVRT</sub>). It is project
					 * dependent parameter.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindLVRTQcontrolModesKind windLVRTQcontrolModesType;
					/**
					 * Types of general wind turbine Q control modes (<i>M</i><sub>qG</sub>).  It is
					 * project dependent parameter.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindQcontrolModesKind windQcontrolModesType;
					/**
					 * Inductive component of voltage drop impedance (<i>x</i><sub>droop</sub>). It is
					 * project dependent parameter.
					 */
					IEC61970::Base::Domain::PU xdroop;
					/**
					 * Wind turbine type 3 or 4 model with which this reactive control mode is
					 * associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4IEC *WindTurbineType3or4IEC;

				};

			}

		}

	}

}
#endif // !defined(EA_EFC42903_B91B_49c9_A248_93F1F25CF03E__INCLUDED_)
