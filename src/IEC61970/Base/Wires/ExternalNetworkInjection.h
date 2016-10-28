///////////////////////////////////////////////////////////
//  ExternalNetworkInjection.h
//  Implementation of the Class ExternalNetworkInjection
//  Original author: Jean-Luc
///////////////////////////////////////////////////////////

#ifndef EXTERNALNETWORKINJECTION_H
#define EXTERNALNETWORKINJECTION_H

#include "IEC61970/Base/Domain/ActivePowerPerFrequency.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/ReactivePower.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Wires/RegulatingCondEq.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * This class represents external network and it is used for IEC 60909
			 * calculations.
			 */
			class ExternalNetworkInjection : public IEC61970::Base::Wires::RegulatingCondEq
			{

			public:
				ExternalNetworkInjection();
				virtual ~ExternalNetworkInjection();
				/**
				 * Power Frequency Bias. This is the change in power injection divided by the
				 * change in frequency and negated.  A positive value of the power frequency bias
				 * provides additional power injection upon a drop in frequency.
				 */
				IEC61970::Base::Domain::ActivePowerPerFrequency governorSCD;
				/**
				 * Indicates whether initial symmetrical short-circuit current and power have been
				 * calculated according to IEC (Ik").
				 */
				IEC61970::Base::Domain::Boolean ikSecond;
				/**
				 *  Maximum initial symmetrical short-circuit currents (Ik" max) in A (Ik" =
				 * Sk"/(SQRT(3) Un)). Used for short circuit data exchange according to IEC 60909
				 */
				IEC61970::Base::Domain::CurrentFlow maxInitialSymShCCurrent;
				/**
				 * Maximum active power of the injection.
				 */
				IEC61970::Base::Domain::ActivePower maxP;
				/**
				 * Not for short circuit modelling; It is used for modelling of infeed for load
				 * flow exchange. If maxQ and minQ are not used ReactiveCapabilityCurve can be
				 * used 
				 */
				IEC61970::Base::Domain::ReactivePower maxQ;
				/**
				 * Maximum ratio of zero sequence resistance of Network Feeder to its zero
				 * sequence reactance (R(0)/X(0) max). Used for short circuit data exchange
				 * according to IEC 60909
				 */
				IEC61970::Base::Domain::Float maxR0ToX0Ratio;
				/**
				 * Maximum ratio of positive sequence resistance of Network Feeder to its positive
				 * sequence reactance (R(1)/X(1) max). Used for short circuit data exchange
				 * according to IEC 60909
				 */
				IEC61970::Base::Domain::Float maxR1ToX1Ratio;
				/**
				 * Maximum ratio of zero sequence impedance to its positive sequence impedance
				 * (Z(0)/Z(1) max). Used for short circuit data exchange according to IEC 60909
				 */
				IEC61970::Base::Domain::Float maxZ0ToZ1Ratio;
				/**
				 * Minimum initial symmetrical short-circuit currents (Ik" min) in A (Ik" =
				 * Sk"/(SQRT(3) Un)). Used for short circuit data exchange according to IEC 60909
				 */
				IEC61970::Base::Domain::CurrentFlow minInitialSymShCCurrent;
				/**
				 * Minimum active power of the injection.
				 */
				IEC61970::Base::Domain::ActivePower minP;
				/**
				 * Not for short circuit modelling; It is used for modelling of infeed for load
				 * flow exchange. If maxQ and minQ are not used ReactiveCapabilityCurve can be used
				 */
				IEC61970::Base::Domain::ReactivePower minQ;
				/**
				 * Indicates whether initial symmetrical short-circuit current and power have been
				 * calculated according to IEC (Ik"). Used for short circuit data exchange
				 * according to IEC 6090
				 */
				IEC61970::Base::Domain::Float minR0ToX0Ratio;
				/**
				 * Minimum ratio of positive sequence resistance of Network Feeder to its positive
				 * sequence reactance (R(1)/X(1) min). Used for short circuit data exchange
				 * according to IEC 60909
				 */
				IEC61970::Base::Domain::Float minR1ToX1Ratio;
				/**
				 * Minimum ratio of zero sequence impedance to its positive sequence impedance
				 * (Z(0)/Z(1) min). Used for short circuit data exchange according to IEC 60909
				 */
				IEC61970::Base::Domain::Float minZ0ToZ1Ratio;
				/**
				 * Active power injection. Load sign convention is used, i.e. positive sign means
				 * flow out from a node.
				 * Starting value for steady state solutions.
				 */
				IEC61970::Base::Domain::ActivePower p;
				/**
				 * Reactive power injection. Load sign convention is used, i.e. positive sign
				 * means flow out from a node.
				 * Starting value for steady state solutions.
				 */
				IEC61970::Base::Domain::ReactivePower q;
				/**
				 * Priority of unit for use as powerflow voltage phase angle reference bus
				 * selection. 0 = don t care (default) 1 = highest priority. 2 is less than 1 and
				 * so on.
				 */
				IEC61970::Base::Domain::Integer referencePriority;
				/**
				 * Voltage factor in pu, which was used to calculate short-circuit current Ik" and
				 * power Sk".
				 */
				IEC61970::Base::Domain::PU voltageFactor;

			};

		}

	}

}
#endif // EXTERNALNETWORKINJECTION_H
