///////////////////////////////////////////////////////////
//  SwitchOperationSummary.h
//  Implementation of the Class SwitchOperationSummary
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef SWITCHOPERATIONSUMMARY_H
#define SWITCHOPERATIONSUMMARY_H

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Date.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Assets/Asset.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Up-to-date, of-record summary of switch operation information, distilled from a
		 * variety of sources (real-time data or real-time data historian, field
		 * inspections, etc.) of use to asset health analytics.  
		 */
		class SwitchOperationSummary : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			SwitchOperationSummary();
			virtual ~SwitchOperationSummary();
			/**
			 * Total breaker fault operations to date.
			 */
			IEC61970::Base::Domain::Integer lifetimeFaultOperations;
			/**
			 * Total motor starts to date.
			 */
			IEC61970::Base::Domain::Integer lifetimeMotorStarts;
			/**
			 * Total breaker operations to date (including fault and non-fault).
			 */
			IEC61970::Base::Domain::Integer lifetimeTotalOperations;
			/**
			 * Date of most recent breaker fault operation.
			 */
			IEC61970::Base::Domain::Date mostRecentFaultOperationDate;
			/**
			 * Date of most recent motor start.
			 */
			IEC61970::Base::Domain::Date mostRecentMotorStartDate;
			/**
			 * Date of most recent breaker operation (fault or non-fault).
			 */
			IEC61970::Base::Domain::Date mostRecentOperationDate;
			/**
			 * Breaker asset to which this operation information applies.
			 */
			IEC61968::Assets::Asset *Breaker;

		};

	}

}
#endif // SWITCHOPERATIONSUMMARY_H
