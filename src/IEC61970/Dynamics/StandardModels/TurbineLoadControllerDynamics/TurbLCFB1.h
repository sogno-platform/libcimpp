///////////////////////////////////////////////////////////
//  TurbLCFB1.h
//  Implementation of the Class TurbLCFB1
//  Created on:      28-Jan-2016 12:47:27
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_DD453E12_8123_4602_98B1_C352EC4BBE12__INCLUDED_)
#define EA_DD453E12_8123_4602_98B1_C352EC4BBE12__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/TurbineLoadControllerDynamics/TurbineLoadControllerDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace TurbineLoadControllerDynamics
			{
				/**
				 * Turbine Load Controller model developed in the WECC.  This model represents a
				 * supervisory turbine load controller that acts to maintain turbine power at a
				 * set value by continuous adjustment of the turbine governor speed-load reference.
				 * This model is intended to represent slow reset 'outer loop' controllers
				 * managing the action of the turbine governor.
				 */
				class TurbLCFB1 : public IEC61970::Dynamics::StandardModels::TurbineLoadControllerDynamics::TurbineLoadControllerDynamics
				{

				public:
					TurbLCFB1();
					virtual ~TurbLCFB1();
					/**
					 * Controller dead band (db).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU db;
					/**
					 * Maximum control error (Emax) (note 4).  Typical Value = 0.02.
					 */
					IEC61970::Base::Domain::PU emax;
					/**
					 * Frequency bias gain (Fb).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU fb;
					/**
					 * Frequency bias flag (Fbf).
					 * true = enable frequency bias
					 * false = disable frequency bias.
					 * Typical Value = false.
					 */
					IEC61970::Base::Domain::Boolean fbf;
					/**
					 * Maximum turbine speed/load reference bias (Irmax) (note 3).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU irmax;
					/**
					 * Integral gain (Ki).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU ki;
					/**
					 * Proportional gain (Kp).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU kp;
					/**
					 * Base for power values (MWbase) (>0).  Unit = MW.
					 */
					IEC61970::Base::Domain::ActivePower mwbase;
					/**
					 * Power controller flag (Pbf).
					 * true = enable load controller
					 * false = disable load controller.
					 * Typical Value = false.
					 */
					IEC61970::Base::Domain::Boolean pbf;
					/**
					 * Power controller setpoint (Pmwset) (note 1).  Unit = MW. Typical Value = 0.
					 */
					IEC61970::Base::Domain::ActivePower pmwset;
					/**
					 * Type of turbine governor reference (Type).
					 * true = speed reference governor
					 * false = load reference governor.
					 * Typical Value = true.
					 */
					IEC61970::Base::Domain::Boolean speedReferenceGovernor;
					/**
					 * Power transducer time constant (Tpelec).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::Seconds tpelec;

				};

			}

		}

	}

}
#endif // !defined(EA_DD453E12_8123_4602_98B1_C352EC4BBE12__INCLUDED_)
