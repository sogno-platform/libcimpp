///////////////////////////////////////////////////////////
//  TransformerTest.h
//  Implementation of the Class TransformerTest
//  Original author: Tom
///////////////////////////////////////////////////////////

#ifndef TRANSFORMERTEST_H
#define TRANSFORMERTEST_H

#include "IEC61970/Base/Domain/ApparentPower.h"
#include "IEC61970/Base/Domain/Temperature.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Test result for transformer ends, such as short-circuit, open-circuit
		 * (excitation) or no-load test.
		 */
		class TransformerTest : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			TransformerTest();
			virtual ~TransformerTest();
			/**
			 * Base power at which the tests are conducted, usually equal to the rateds of one
			 * of the involved transformer ends.
			 */
			IEC61970::Base::Domain::ApparentPower basePower;
			/**
			 * Temperature at which the test is conducted.
			 */
			IEC61970::Base::Domain::Temperature temperature;

		};

	}

}
#endif // TRANSFORMERTEST_H
