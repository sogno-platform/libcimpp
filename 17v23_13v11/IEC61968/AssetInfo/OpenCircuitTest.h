///////////////////////////////////////////////////////////
//  OpenCircuitTest.h
//  Implementation of the Class OpenCircuitTest
//  Original author: Tom
///////////////////////////////////////////////////////////

#ifndef OPENCIRCUITTEST_H
#define OPENCIRCUITTEST_H

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Domain/AngleDegrees.h"
#include "IEC61968/AssetInfo/TransformerEndInfo.h"
#include "IEC61968/AssetInfo/TransformerTest.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Open-circuit test results verify winding turn ratios and phase shifts. They
		 * include induced voltage and phase shift measurements on open-circuit windings,
		 * with voltage applied to the energised end. For three-phase windings, the
		 * excitation can be a positive sequence (the default) or a zero sequence.
		 */
		class OpenCircuitTest : public IEC61968::AssetInfo::TransformerTest
		{

		public:
			OpenCircuitTest();
			virtual ~OpenCircuitTest();
			/**
			 * Tap step number for the energised end of the test pair.
			 */
			IEC61970::Base::Domain::Integer energisedEndStep;
			/**
			 * Voltage applied to the winding (end) during test.
			 */
			IEC61970::Base::Domain::Voltage energisedEndVoltage;
			/**
			 * Tap step number for the open end of the test pair.
			 */
			IEC61970::Base::Domain::Integer openEndStep;
			/**
			 * Voltage measured at the open-circuited end, with the energised end set to rated
			 * voltage and all other ends open.
			 */
			IEC61970::Base::Domain::Voltage openEndVoltage;
			/**
			 * Phase shift measured at the open end with the energised end set to rated
			 * voltage and all other ends open.
			 */
			IEC61970::Base::Domain::AngleDegrees phaseShift;
			/**
			 * Transformer end measured for induced voltage and angle in this open-circuit
			 * test.
			 */
			IEC61968::AssetInfo::TransformerEndInfo *OpenEnd;
			/**
			 * Transformer end that current is applied to in this open-circuit test.
			 */
			IEC61968::AssetInfo::TransformerEndInfo *EnergisedEnd;

		};

	}

}
#endif // OPENCIRCUITTEST_H
