///////////////////////////////////////////////////////////
//  FailureEvent.h
//  Implementation of the Class FailureEvent
///////////////////////////////////////////////////////////

#ifndef FAILUREEVENT_H
#define FAILUREEVENT_H

#include "IEC61968/Assets/BreakerFailureReasonKind.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Assets/AssetFailureClassification.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/Assets/FailureIsolationMethodKind.h"
#include "IEC61968/Assets/AssetFailureMode.h"
#include "IEC61968/Assets/TransformerFailureReasonKind.h"
#include "IEC61968/Common/ActivityRecord.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * An event where an asset has failed to perform its functions within specified
		 * parameters. This class is intended to reflect the failure itself. Additional
		 * information resulting from forensic analysis could be captured by a diagnosis
		 * data set. 
		 */
		class FailureEvent : public IEC61968::Common::ActivityRecord
		{

		public:
			FailureEvent();
			virtual ~FailureEvent();
			/**
			 * Reason for breaker failure.
			 */
			IEC61968::Assets::BreakerFailureReasonKind breakerFailureReason = IEC61968::Assets::BreakerFailureReasonKind::_undef;
			/**
			 * Code for asset failure.
			 */
			IEC61970::Base::Domain::String corporateCode;
			/**
			 * Classification of failure.
			 */
			IEC61968::Assets::AssetFailureClassification failureClassification = IEC61968::Assets::AssetFailureClassification::_undef;
			/**
			 * Time and date of asset failure.
			 */
			IEC61970::Base::Domain::DateTime failureDateTime;
			/**
			 * How the asset failure was isolated from the system.
			 */
			IEC61968::Assets::FailureIsolationMethodKind failureIsolationMethod = IEC61968::Assets::FailureIsolationMethodKind::_undef;
			/**
			 * What asset failed to be able to do.
			 */
			IEC61968::Assets::AssetFailureMode failureMode = IEC61968::Assets::AssetFailureMode::_undef;
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
			/**
			 * Root cause of asset failure.
			 */
			IEC61970::Base::Domain::String rootCause;
			/**
			 * Reason for transformer failure.
			 */
			IEC61968::Assets::TransformerFailureReasonKind transformerFailureReason = IEC61968::Assets::TransformerFailureReasonKind::_undef;

		};

	}

}
#endif // FAILUREEVENT_H
