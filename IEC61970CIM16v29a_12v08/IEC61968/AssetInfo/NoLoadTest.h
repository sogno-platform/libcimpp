///////////////////////////////////////////////////////////
//  NoLoadTest.h
//  Implementation of the Class NoLoadTest
//  Original author: Tom
///////////////////////////////////////////////////////////

#ifndef NOLOADTEST_H
#define NOLOADTEST_H

#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61970/Base/Domain/KiloActivePower.h"
#include "IEC61968/AssetInfo/TransformerEndInfo.h"
#include "IEC61968/AssetInfo/TransformerTest.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * No-load test results determine core admittance parameters. They include
		 * exciting current and core loss measurements from applying voltage to one
		 * winding. The excitation may be positive sequence or zero sequence. The test may
		 * be repeated at different voltages to measure saturation.
		 */
		class NoLoadTest : public IEC61968::AssetInfo::TransformerTest
		{

		public:
			NoLoadTest();
			virtual ~NoLoadTest();
			/**
			 * Voltage applied to the winding (end) during test.
			 */
			IEC61970::Base::Domain::Voltage energisedEndVoltage;
			/**
			 * Exciting current measured from a positive-sequence or single-phase excitation
			 * test.
			 */
			IEC61970::Base::Domain::PerCent excitingCurrent;
			/**
			 * Exciting current measured from a zero-sequence open-circuit excitation test.
			 */
			IEC61970::Base::Domain::PerCent excitingCurrentZero;
			/**
			 * Losses measured from a positive-sequence or single-phase excitation test.
			 */
			IEC61970::Base::Domain::KiloActivePower loss;
			/**
			 * Losses measured from a zero-sequence excitation test.
			 */
			IEC61970::Base::Domain::KiloActivePower lossZero;
			/**
			 * Transformer end that current is applied to in this no-load test.
			 */
			IEC61968::AssetInfo::TransformerEndInfo *EnergisedEnd;

		};

	}

}
#endif // NOLOADTEST_H
