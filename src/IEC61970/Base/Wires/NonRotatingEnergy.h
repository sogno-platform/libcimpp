///////////////////////////////////////////////////////////
//  NonRotatingEnergy.h
//  Implementation of the Class NonRotatingEnergy
//  Created on:      28-Jan-2016 12:45:50
///////////////////////////////////////////////////////////

#if !defined(EA_F731F0FC_9B56_489b_B42D_E9469B00B57F__INCLUDED_)
#define EA_F731F0FC_9B56_489b_B42D_E9469B00B57F__INCLUDED_

#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/ReactivePower.h"
#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/Domain/Reactance.h"
#include "IEC61970/Base/Wires/RegulatingCondEq.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A single terminal energy source which is not considered to be a rotating source.
			 *  Source could be a DC to AC connection with either a single generator or an
			 * aggregation of generators such as Type 3 and 4 wind turbines, solar, tidal, or
			 * other types of asynchronous energy production.  This class is meant to be a
			 * single aggregate device which represents single or multiple sources connected
			 * to the AC network through a single static connection.
			 */
			class NonRotatingEnergy : public IEC61970::Base::Wires::RegulatingCondEq
			{

			public:
				NonRotatingEnergy();
				virtual ~NonRotatingEnergy();
				/**
				 * Maximum active power of the injection.
				 */
				IEC61970::Base::Domain::ActivePower maxP;
				/**
				 * Maximum reactive power of the injection.
				 */
				IEC61970::Base::Domain::ReactivePower maxQ;
				/**
				 * Minimum active power of the injection.
				 */
				IEC61970::Base::Domain::ActivePower minP;
				/**
				 * Minimum reactive power of the injection.
				 */
				IEC61970::Base::Domain::ReactivePower minQ;
				/**
				 * Active power injection.  Load sign convention is used, i.e. positive sign means
				 * flow out from a node.
				 * Starting value for steady state solutions.
				 */
				IEC61970::Base::Domain::ActivePower p;
				/**
				 * Reactive power injection.  Load sign convention is used, i.e. positive sign
				 * means flow out from a node.
				 * Starting value for steady state solutions.
				 */
				IEC61970::Base::Domain::ReactivePower q;
				/**
				 * Positive sequence Thevenin resistance.
				 */
				IEC61970::Base::Domain::Resistance r;
				/**
				 * Zero sequence Thevenin resistance.
				 */
				IEC61970::Base::Domain::Resistance r0;
				/**
				 * Negative sequence Thevenin resistance.
				 */
				IEC61970::Base::Domain::Resistance rn;
				/**
				 * Positive sequence Thevenin reactance.
				 */
				IEC61970::Base::Domain::Reactance x;
				/**
				 * Zero sequence Thevenin reactance.
				 */
				IEC61970::Base::Domain::Reactance x0;
				/**
				 * Negative sequence Thevenin reactance.
				 */
				IEC61970::Base::Domain::Reactance xn;

			};

		}

	}

}
#endif // !defined(EA_F731F0FC_9B56_489b_B42D_E9469B00B57F__INCLUDED_)
