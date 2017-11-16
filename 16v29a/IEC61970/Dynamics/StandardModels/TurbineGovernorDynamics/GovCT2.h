///////////////////////////////////////////////////////////
//  GovCT2.h
//  Implementation of the Class GovCT2
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef GOVCT2_H
#define GOVCT2_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Frequency.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Dynamics/StandardModels/TurbineGovernorDynamics/DroopSignalFeedbackKind.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Dynamics/StandardModels/TurbineGovernorDynamics/TurbineGovernorDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace TurbineGovernorDynamics
			{
				/**
				 * General governor model with frequency-dependent fuel flow limit.  This model is
				 * a modification of the GovCT1<b> </b>model in order to represent the frequency-
				 * dependent fuel flow limit of a specific gas turbine manufacturer.
				 */
				class GovCT2 : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovCT2();
					virtual ~GovCT2();
					/**
					 * Acceleration limiter setpoint (Aset).  Unit = PU/sec.  Typical Value = 10.
					 */
					IEC61970::Base::Domain::Float aset;
					/**
					 * Speed governor dead band in per unit speed (db).  In the majority of
					 * applications, it is recommended that this value be set to zero.  Typical Value
					 * = 0.
					 */
					IEC61970::Base::Domain::PU db;
					/**
					 * Speed sensitivity coefficient (Dm).  Dm can represent either the variation of
					 * the engine power with the shaft speed or the variation of maximum power
					 * capability with shaft speed.  If it is positive it describes the falling slope
					 * of the engine speed verses power characteristic as speed increases. A slightly
					 * falling characteristic is typical for reciprocating engines and some aero-
					 * derivative turbines.  If it is negative the engine power is assumed to be
					 * unaffected by the shaft speed, but the maximum permissible fuel flow is taken
					 * to fall with falling shaft speed. This is characteristic of single-shaft
					 * industrial turbines due to exhaust temperature limits.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU dm;
					/**
					 * Frequency threshold 1 (Flim1).  Unit = Hz.  Typical Value = 59.
					 */
					IEC61970::Base::Domain::Frequency flim1;
					/**
					 * Frequency threshold 10 (Flim10).  Unit = Hz.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Frequency flim10;
					/**
					 * Frequency threshold 2 (Flim2).  Unit = Hz.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Frequency flim2;
					/**
					 * Frequency threshold 3 (Flim3).  Unit = Hz.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Frequency flim3;
					/**
					 * Frequency threshold 4 (Flim4).  Unit = Hz.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Frequency flim4;
					/**
					 * Frequency threshold 5 (Flim5).  Unit = Hz.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Frequency flim5;
					/**
					 * Frequency threshold 6 (Flim6).  Unit = Hz.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Frequency flim6;
					/**
					 * Frequency threshold 7 (Flim7).  Unit = Hz.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Frequency flim7;
					/**
					 * Frequency threshold 8 (Flim8).  Unit = Hz.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Frequency flim8;
					/**
					 * Frequency threshold 9 (Flim9).  Unit = Hz.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Frequency flim9;
					/**
					 * Acceleration limiter Gain (Ka).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::PU ka;
					/**
					 * Governor derivative gain (Kdgov).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kdgov;
					/**
					 * Governor integral gain (Kigov).  Typical Value = 0.45.
					 */
					IEC61970::Base::Domain::PU kigov;
					/**
					 * Load limiter integral gain for PI controller (Kiload).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU kiload;
					/**
					 * Power controller (reset) gain (Kimw).  The default value of 0.01 corresponds to
					 * a reset time of 100 seconds.  A value of 0.001 corresponds to a relatively slow
					 * acting load controller.  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kimw;
					/**
					 * Governor proportional gain (Kpgov).  Typical Value = 4.
					 */
					IEC61970::Base::Domain::PU kpgov;
					/**
					 * Load limiter proportional gain for PI controller (Kpload).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU kpload;
					/**
					 * Turbine gain (Kturb).  Typical Value = 1.9168.
					 */
					IEC61970::Base::Domain::PU kturb;
					/**
					 * Load limiter reference value (Ldref).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU ldref;
					/**
					 * Maximum value for speed error signal (Maxerr).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU maxerr;
					/**
					 * Minimum value for speed error signal (Minerr).  Typical Value = -1.
					 */
					IEC61970::Base::Domain::PU minerr;
					/**
					 * Base for power values (MWbase) (> 0).  Unit = MW.
					 */
					IEC61970::Base::Domain::ActivePower mwbase;
					/**
					 * Power limit 1 (Plim1).  Typical Value = 0.8325.
					 */
					IEC61970::Base::Domain::PU plim1;
					/**
					 * Power limit 10 (Plim10).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU plim10;
					/**
					 * Power limit 2 (Plim2).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU plim2;
					/**
					 * Power limit 3 (Plim3).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU plim3;
					/**
					 * Power limit 4 (Plim4).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU plim4;
					/**
					 * Power limit 5 (Plim5).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU plim5;
					/**
					 * Power limit 6 (Plim6).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU plim6;
					/**
					 * Power limit 7 (Plim7).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU plim7;
					/**
					 * Power limit 8 (Plim8).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU plim8;
					/**
					 * Power Limit 9 (Plim9).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU plim9;
					/**
					 * Ramp rate for frequency-dependent power limit (Prate).  Typical Value = 0.017.
					 */
					IEC61970::Base::Domain::PU prate;
					/**
					 * Permanent droop (R).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU r;
					/**
					 * Minimum valve closing rate (Rclose).  Unit = PU/sec.  Typical Value = -99.
					 */
					IEC61970::Base::Domain::Float rclose;
					/**
					 * Maximum rate of load limit decrease (Rdown).  Typical Value = -99.
					 */
					IEC61970::Base::Domain::PU rdown;
					/**
					 * Maximum valve opening rate (Ropen).  Unit = PU/sec.  Typical Value = 99.
					 */
					IEC61970::Base::Domain::Float ropen;
					/**
					 * Feedback signal for droop (Rselect).  Typical Value = electricalPower.
					 */
					IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::DroopSignalFeedbackKind rselect = IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::DroopSignalFeedbackKind::_undef;
					/**
					 * Maximum rate of load limit increase (Rup).  Typical Value = 99.
					 */
					IEC61970::Base::Domain::PU rup;
					/**
					 * Acceleration limiter time constant (Ta).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds ta;
					/**
					 * Actuator time constant (Tact).  Typical Value = 0.4.
					 */
					IEC61970::Base::Domain::Seconds tact;
					/**
					 * Turbine lag time constant (Tb).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds tb;
					/**
					 * Turbine lead time constant (Tc).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tc;
					/**
					 * Governor derivative controller time constant (Tdgov).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::Seconds tdgov;
					/**
					 * Transport time delay for diesel engine used in representing diesel engines
					 * where there is a small but measurable transport delay between a change in fuel
					 * flow setting and the development of torque (Teng).  Teng should be zero in all
					 * but special cases where this transport delay is of particular concern.  Typical
					 * Value = 0.
					 */
					IEC61970::Base::Domain::Seconds teng;
					/**
					 * Load Limiter time constant (Tfload).  Typical Value = 3.
					 */
					IEC61970::Base::Domain::Seconds tfload;
					/**
					 * Electrical power transducer time constant (Tpelec).  Typical Value = 2.5.
					 */
					IEC61970::Base::Domain::Seconds tpelec;
					/**
					 * Temperature detection lead time constant (Tsa).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tsa;
					/**
					 * Temperature detection lag time constant (Tsb).  Typical Value = 50.
					 */
					IEC61970::Base::Domain::Seconds tsb;
					/**
					 * Maximum valve position limit (Vmax).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU vmax;
					/**
					 * Minimum valve position limit (Vmin).  Typical Value = 0.175.
					 */
					IEC61970::Base::Domain::PU vmin;
					/**
					 * No load fuel flow (Wfnl).  Typical Value = 0.187.
					 */
					IEC61970::Base::Domain::PU wfnl;
					/**
					 * Switch for fuel source characteristic to recognize that fuel flow, for a given
					 * fuel valve stroke, can be proportional to engine speed (Wfspd).
					 * true = fuel flow proportional to speed (for some gas turbines and diesel
					 * engines with positive displacement fuel injectors)
					 * false = fuel control system keeps fuel flow independent of engine speed.
					 * Typical Value = false.
					 */
					IEC61970::Base::Domain::Boolean wfspd;

				};

			}

		}

	}

}
#endif // GOVCT2_H
