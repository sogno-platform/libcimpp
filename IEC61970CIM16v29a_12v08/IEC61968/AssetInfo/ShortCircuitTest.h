///////////////////////////////////////////////////////////
//  ShortCircuitTest.h
//  Implementation of the Class ShortCircuitTest
//  Original author: Tom
///////////////////////////////////////////////////////////

#ifndef SHORTCIRCUITTEST_H
#define SHORTCIRCUITTEST_H

#include <list>

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Impedance.h"
#include "IEC61970/Base/Domain/KiloActivePower.h"
#include "IEC61968/AssetInfo/TransformerEndInfo.h"
#include "IEC61968/AssetInfo/TransformerTest.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Short-circuit test results determine mesh impedance parameters. They include
		 * load losses and leakage impedances. For three-phase windings, the excitation
		 * can be a positive sequence (the default) or a zero sequence. There shall be at
		 * least one grounded winding.
		 */
		class ShortCircuitTest : public IEC61968::AssetInfo::TransformerTest
		{

		public:
			ShortCircuitTest();
			virtual ~ShortCircuitTest();
			/**
			 * Tap step number for the energised end of the test pair.
			 */
			IEC61970::Base::Domain::Integer energisedEndStep;
			/**
			 * Tap step number for the grounded end of the test pair.
			 */
			IEC61970::Base::Domain::Integer groundedEndStep;
			/**
			 * Leakage impedance measured from a positive-sequence or single-phase short-
			 * circuit test.
			 */
			IEC61970::Base::Domain::Impedance leakageImpedance;
			/**
			 * Leakage impedance measured from a zero-sequence short-circuit test.
			 */
			IEC61970::Base::Domain::Impedance leakageImpedanceZero;
			/**
			 * Load losses from a positive-sequence or single-phase short-circuit test.
			 */
			IEC61970::Base::Domain::KiloActivePower loss;
			/**
			 * Load losses from a zero-sequence short-circuit test.
			 */
			IEC61970::Base::Domain::KiloActivePower lossZero;
			/**
			 * All ends short-circuited in this short-circuit test.
			 */
			std::list<IEC61968::AssetInfo::TransformerEndInfo*> GroundedEnds;
			/**
			 * Transformer end that voltage is applied to in this short-circuit test. The test
			 * voltage is chosen to induce rated current in the energised end.
			 */
			IEC61968::AssetInfo::TransformerEndInfo *EnergisedEnd;

		};

	}

}
#endif // SHORTCIRCUITTEST_H
