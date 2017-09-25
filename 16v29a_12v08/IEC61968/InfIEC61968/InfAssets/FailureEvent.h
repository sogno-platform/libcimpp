///////////////////////////////////////////////////////////
//  FailureEvent.h
//  Implementation of the Class FailureEvent
///////////////////////////////////////////////////////////

#ifndef FAILUREEVENT_H
#define FAILUREEVENT_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/InfIEC61968/InfAssets/FailureIsolationMethodKind.h"
#include "IEC61968/Common/ActivityRecord.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * An event where an asset has failed to perform its functions within specified
			 * parameters.
			 */
			class FailureEvent : public IEC61968::Common::ActivityRecord
			{

			public:
				FailureEvent();
				virtual ~FailureEvent();
				/**
				 * Code for asset failure.
				 */
				IEC61970::Base::Domain::String corporateCode;
				/**
				 * How the asset failure was isolated from the system.
				 */
				IEC61968::InfIEC61968::InfAssets::FailureIsolationMethodKind failureIsolationMethod;
				/**
				 * The method used for locating the faulted part of the asset. For example, cable
				 * options include: Cap Discharge-Thumping, Bridge Method, Visual Inspection,
				 * Other.
				 */
				IEC61970::Base::Domain::String faultLocatingMethod;
				/**
				 * Failure location on an object.
				 */
				IEC61970::Base::Domain::String location;

			};

		}

	}

}
#endif // FAILUREEVENT_H
