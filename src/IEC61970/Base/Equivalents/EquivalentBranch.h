///////////////////////////////////////////////////////////
//  EquivalentBranch.h
//  Implementation of the Class EquivalentBranch
///////////////////////////////////////////////////////////

#ifndef EQUIVALENTBRANCH_H
#define EQUIVALENTBRANCH_H

#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/Domain/Reactance.h"
#include "IEC61970/Base/Equivalents/EquivalentEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Equivalents
		{
			/**
			 * The class represents equivalent branches.
			 */
			class EquivalentBranch : public IEC61970::Base::Equivalents::EquivalentEquipment
			{

			public:
				EquivalentBranch();
				virtual ~EquivalentBranch();
				/**
				 * Negative sequence series resistance from terminal sequence  1 to terminal
				 * sequence 2. Used for short circuit data exchange according to IEC 60909
				 * EquivalentBranch is a result of network reduction prior to the data exchange 
				 */
				IEC61970::Base::Domain::Resistance negativeR12;
				/**
				 * Negative sequence series resistance from terminal sequence 2 to terminal
				 * sequence 1. Used for short circuit data exchange according to IEC 60909
				 * EquivalentBranch is a result of network reduction prior to the data exchange
				 */
				IEC61970::Base::Domain::Resistance negativeR21;
				/**
				 * Negative sequence series reactance from terminal sequence  1 to terminal
				 * sequence 2. Used for short circuit data exchange according to IEC 60909
				 * Usage : EquivalentBranch is a result of network reduction prior to the data
				 * exchange
				 */
				IEC61970::Base::Domain::Reactance negativeX12;
				/**
				 * Negative sequence series reactance from terminal sequence 2 to terminal
				 * sequence 1. Used for short circuit data exchange according to IEC 60909.
				 * Usage: EquivalentBranch is a result of network reduction prior to the data
				 * exchange
				 */
				IEC61970::Base::Domain::Reactance negativeX21;
				/**
				 * Positive sequence series resistance from terminal sequence  1 to terminal
				 * sequence 2 . Used for short circuit data exchange according to IEC 60909.
				 * EquivalentBranch is a result of network reduction prior to the data exchange. 
				 */
				IEC61970::Base::Domain::Resistance positiveR12;
				/**
				 * Positive sequence series resistance from terminal sequence 2 to terminal
				 * sequence 1. Used for short circuit data exchange according to IEC 60909
				 * EquivalentBranch is a result of network reduction prior to the data exchange
				 */
				IEC61970::Base::Domain::Resistance positiveR21;
				/**
				 * Positive sequence series reactance from terminal sequence  1 to terminal
				 * sequence 2. Used for short circuit data exchange according to IEC 60909
				 * Usage : EquivalentBranch is a result of network reduction prior to the data
				 * exchange
				 */
				IEC61970::Base::Domain::Reactance positiveX12;
				/**
				 * Positive sequence series reactance from terminal sequence 2 to terminal
				 * sequence 1. Used for short circuit data exchange according to IEC 60909
				 * Usage : EquivalentBranch is a result of network reduction prior to the data
				 * exchange
				 */
				IEC61970::Base::Domain::Reactance positiveX21;
				/**
				 * Positive sequence series resistance of the reduced branch.
				 */
				IEC61970::Base::Domain::Resistance r;
				/**
				 * Resistance from terminal sequence 2 to terminal sequence 1 .Used for steady
				 * state power flow. This attribute is optional and represent unbalanced network
				 * such as off-nominal phase shifter. If only EquivalentBranch.r is given, then
				 * EquivalentBranch.r21 is assumed equal to EquivalentBranch.r.
				 * Usage rule : EquivalentBranch is a result of network reduction prior to the
				 * data exchange.
				 */
				IEC61970::Base::Domain::Resistance r21;
				/**
				 * Positive sequence series reactance of the reduced branch.
				 */
				IEC61970::Base::Domain::Reactance x;
				/**
				 * Reactance from terminal sequence 2 to terminal sequence 1 .Used for steady
				 * state power flow. This attribute is optional and represent unbalanced network
				 * such as off-nominal phase shifter. If only EquivalentBranch.x is given, then
				 * EquivalentBranch.x21 is assumed equal to EquivalentBranch.x.
				 * Usage rule : EquivalentBranch is a result of network reduction prior to the
				 * data exchange.
				 */
				IEC61970::Base::Domain::Reactance x21;
				/**
				 * Zero sequence series resistance from terminal sequence  1 to terminal sequence
				 * 2. Used for short circuit data exchange according to IEC 60909
				 * EquivalentBranch is a result of network reduction prior to the data exchange
				 */
				IEC61970::Base::Domain::Resistance zeroR12;
				/**
				 * Zero sequence series resistance from terminal sequence  2 to terminal sequence
				 * 1. Used for short circuit data exchange according to IEC 60909
				 * Usage : EquivalentBranch is a result of network reduction prior to the data
				 * exchange
				 */
				IEC61970::Base::Domain::Resistance zeroR21;
				/**
				 * Zero sequence series reactance from terminal sequence  1 to terminal sequence 2.
				 * Used for short circuit data exchange according to IEC 60909
				 * Usage : EquivalentBranch is a result of network reduction prior to the data
				 * exchange
				 */
				IEC61970::Base::Domain::Reactance zeroX12;
				/**
				 * Zero sequence series reactance from terminal sequence 2 to terminal sequence 1.
				 * Used for short circuit data exchange according to IEC 60909
				 * Usage : EquivalentBranch is a result of network reduction prior to the data
				 * exchange
				 */
				IEC61970::Base::Domain::Reactance zeroX21;

			};

		}

	}

}
#endif // EQUIVALENTBRANCH_H
