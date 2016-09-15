///////////////////////////////////////////////////////////
//  StaticVarCompensator.h
//  Implementation of the Class StaticVarCompensator
//  Created on:      28-Jan-2016 12:46:46
///////////////////////////////////////////////////////////

#if !defined(EA_D29F1332_B9BA_484d_8995_A82E2E2EB5AC__INCLUDED_)
#define EA_D29F1332_B9BA_484d_8995_A82E2E2EB5AC__INCLUDED_

#include "IEC61970/Base/Domain/Reactance.h"
#include "IEC61970/Base/Domain/ReactivePower.h"
#include "IEC61970/Base/Domain/VoltagePerReactivePower.h"
#include "IEC61970/Base/Wires/SVCControlMode.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Wires/RegulatingCondEq.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A facility for providing variable and controllable shunt reactive power. The
			 * SVC typically consists of a stepdown transformer, filter, thyristor-controlled
			 * reactor, and thyristor-switched capacitor arms.
			 * 
			 * The SVC may operate in fixed MVar output mode or in voltage control mode. When
			 * in voltage control mode, the output of the SVC will be proportional to the
			 * deviation of voltage at the controlled bus from the voltage setpoint.  The SVC
			 * characteristic slope defines the proportion.  If the voltage at the controlled
			 * bus is equal to the voltage setpoint, the SVC MVar output is zero.
			 */
			class StaticVarCompensator : public IEC61970::Base::Wires::RegulatingCondEq
			{

			public:
				StaticVarCompensator();
				virtual ~StaticVarCompensator();
				/**
				 * Maximum available capacitive reactance.
				 */
				IEC61970::Base::Domain::Reactance capacitiveRating;
				/**
				 * Maximum available inductive reactance.
				 */
				IEC61970::Base::Domain::Reactance inductiveRating;
				/**
				 * Reactive power injection. Load sign convention is used, i.e. positive sign
				 * means flow out from a node.
				 * Starting value for a steady state solution.
				 */
				IEC61970::Base::Domain::ReactivePower q;
				/**
				 * The characteristics slope of an SVC defines how the reactive power output
				 * changes in proportion to the difference between the regulated bus voltage and
				 * the voltage setpoint.
				 */
				IEC61970::Base::Domain::VoltagePerReactivePower slope;
				/**
				 * SVC control mode.
				 */
				IEC61970::Base::Wires::SVCControlMode sVCControlMode;
				/**
				 * The reactive power output of the SVC is proportional to the difference between
				 * the voltage at the regulated bus and the voltage setpoint.  When the regulated
				 * bus voltage is equal to the voltage setpoint, the reactive power output is zero.
				 */
				IEC61970::Base::Domain::Voltage voltageSetPoint;

			};

		}

	}

}
#endif // !defined(EA_D29F1332_B9BA_484d_8995_A82E2E2EB5AC__INCLUDED_)
