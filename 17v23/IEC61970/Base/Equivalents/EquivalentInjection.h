///////////////////////////////////////////////////////////
//  EquivalentInjection.h
//  Implementation of the Class EquivalentInjection
//  Original author: KLH
///////////////////////////////////////////////////////////

#ifndef EQUIVALENTINJECTION_H
#define EQUIVALENTINJECTION_H

#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/ReactivePower.h"
#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Domain/Reactance.h"
#include "IEC61970/Base/Equivalents/EquivalentEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Equivalents
		{
			/**
			 * This class represents equivalent injections (generation or load).  Voltage
			 * regulation is allowed only at the point of connection.
			 */
			class EquivalentInjection : public IEC61970::Base::Equivalents::EquivalentEquipment
			{

			public:
				EquivalentInjection();
				virtual ~EquivalentInjection();
				/**
				 * Maximum active power of the injection.
				 */
				IEC61970::Base::Domain::ActivePower maxP;
				/**
				 * Used for modeling of infeed for load flow exchange. Not used for short circuit
				 * modeling.  If maxQ and minQ are not used ReactiveCapabilityCurve can be used.   
				 */
				IEC61970::Base::Domain::ReactivePower maxQ;
				/**
				 * Minimum active power of the injection.
				 */
				IEC61970::Base::Domain::ActivePower minP;
				/**
				 * Used for modeling of infeed for load flow exchange. Not used for short circuit
				 * modeling.  If maxQ and minQ are not used ReactiveCapabilityCurve can be used.
				 */
				IEC61970::Base::Domain::ReactivePower minQ;
				/**
				 * Equivalent active power injection. Load sign convention is used, i.e. positive
				 * sign means flow out from a node.
				 * Starting value for steady state solutions.
				 */
				IEC61970::Base::Domain::ActivePower p;
				/**
				 * Equivalent reactive power injection. Load sign convention is used, i.e.
				 * positive sign means flow out from a node.
				 * Starting value for steady state solutions.
				 */
				IEC61970::Base::Domain::ReactivePower q;
				/**
				 * Positive sequence resistance. Used to represent Extended-Ward (IEC 60909).
				 * Usage : Extended-Ward is a result of network reduction prior to the data
				 * exchange. 
				 */
				IEC61970::Base::Domain::Resistance r;
				/**
				 * Zero sequence resistance. Used to represent Extended-Ward (IEC 60909).
				 * Usage : Extended-Ward is a result of network reduction prior to the data
				 * exchange. 
				 */
				IEC61970::Base::Domain::Resistance r0;
				/**
				 * Negative sequence resistance. Used to represent Extended-Ward (IEC 60909).
				 * Usage : Extended-Ward is a result of network reduction prior to the data
				 * exchange. 
				 */
				IEC61970::Base::Domain::Resistance r2;
				/**
				 * Specifies whether or not the EquivalentInjection has the capability to regulate
				 * the local voltage.
				 */
				IEC61970::Base::Domain::Boolean regulationCapability;
				/**
				 * Specifies the default regulation status of the EquivalentInjection.  True is
				 * regulating.  False is not regulating.
				 */
				IEC61970::Base::Domain::Boolean regulationStatus;
				/**
				 * The target voltage for voltage regulation.
				 */
				IEC61970::Base::Domain::Voltage regulationTarget;
				/**
				 * Positive sequence reactance. Used to represent Extended-Ward (IEC 60909).
				 * Usage : Extended-Ward is a result of network reduction prior to the data
				 * exchange. 
				 */
				IEC61970::Base::Domain::Reactance x;
				/**
				 * Zero sequence reactance. Used to represent Extended-Ward (IEC 60909).
				 * Usage : Extended-Ward is a result of network reduction prior to the data
				 * exchange. 
				 */
				IEC61970::Base::Domain::Reactance x0;
				/**
				 * Negative sequence reactance. Used to represent Extended-Ward (IEC 60909).
				 * Usage : Extended-Ward is a result of network reduction prior to the data
				 * exchange. 
				 */
				IEC61970::Base::Domain::Reactance x2;

			};

		}

	}

}
#endif // EQUIVALENTINJECTION_H
