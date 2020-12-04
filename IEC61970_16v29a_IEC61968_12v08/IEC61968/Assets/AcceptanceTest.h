///////////////////////////////////////////////////////////
//  AcceptanceTest.h
//  Implementation of the Class AcceptanceTest
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ACCEPTANCETEST_H
#define ACCEPTANCETEST_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/String.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Acceptance test for assets.
		 */
		class AcceptanceTest : public BaseClass
		{

		public:
			AcceptanceTest();
			virtual ~AcceptanceTest();
			/**
			 * Date and time the asset was last tested using the 'type' of test and yielding
			 * the current status in 'success' attribute.
			 */
			IEC61970::Base::Domain::DateTime dateTime;
			/**
			 * True if asset has passed acceptance test and may be placed in or is in service.
			 * It is set to false if asset is removed from service and is required to be
			 * tested again before being placed back in service, possibly in a new location.
			 * Since asset may go through multiple tests during its lifecycle, the date of
			 * each acceptance test may be recorded in 'Asset.ActivityRecord.status.dateTime'.
			 */
			IEC61970::Base::Domain::Boolean success;
			/**
			 * Type of test or group of tests that was conducted on 'dateTime'.
			 */
			IEC61970::Base::Domain::String type;

		};

	}

}
#endif // ACCEPTANCETEST_H
