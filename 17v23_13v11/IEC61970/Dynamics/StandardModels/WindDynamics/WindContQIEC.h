///////////////////////////////////////////////////////////
//  WindContQIEC.h
//  Implementation of the Class WindContQIEC
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef WINDCONTQIEC_H
#define WINDCONTQIEC_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindQcontrolModeKind.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindUVRTQcontrolModeKind.h"
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
				 * Reference: IEC Standard 61400-27-1 Section 5.6.5.7.
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
					 * Voltage scaling factor for UVRT current (<i>K</i><sub>qv</sub>). It is project
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::PU kqv;
					/**
					 * Resistive component of voltage drop impedance (<i>r</i><sub>droop</sub>). It is
					 * project dependent parameter.
					 */
					IEC61970::Base::Domain::PU rdroop;
					/**
					 * Power measurement filter time constant (<i>T</i><sub>pfiltq</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tpfiltq;
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
					 * Voltage measurement filter time constant (<i>T</i><sub>ufiltq</sub>). It is
					 * type dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tufiltq;
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
					 * Voltage threshold for UVRT detection in q control (<i>u</i><sub>qdip</sub>). It
					 * is type dependent parameter.
					 */
					IEC61970::Base::Domain::PU uqdip;
					/**
					 * User defined bias in voltage reference (<i>u</i><sub>ref0</sub>), used when
					 * <i>M</i><sub>qG</sub> is set to voltage control. It is case dependent parameter.
					 */
					IEC61970::Base::Domain::PU uref0;
					/**
					 * Types of general wind turbine Q control modes (<i>M</i><sub>qG</sub>).  It is
					 * project dependent parameter.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindQcontrolModeKind windQcontrolModesType = IEC61970::Dynamics::StandardModels::WindDynamics::WindQcontrolModeKind::_undef;
					/**
					 * Types of UVRT Q control modes (<i>M</i><sub>qUVRT</sub>). It is project
					 * dependent parameter.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindUVRTQcontrolModeKind windUVRTQcontrolModesType = IEC61970::Dynamics::StandardModels::WindDynamics::WindUVRTQcontrolModeKind::_undef;
					/**
					 * Inductive component of voltage drop impedance (<i>x</i><sub>droop</sub>). It is
					 * project dependent parameter.
					 */
					IEC61970::Base::Domain::PU xdroop;
					/**
					 * Wind turbine type 3 or 4 model with which this reactive control model is
					 * associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4IEC *WindTurbineType3or4IEC;

				};

			}

		}

	}

}
#endif // WINDCONTQIEC_H
