///////////////////////////////////////////////////////////
//  ComplianceEvent.h
//  Implementation of the Class ComplianceEvent
///////////////////////////////////////////////////////////

#ifndef COMPLIANCEEVENT_H
#define COMPLIANCEEVENT_H

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/Common/ActivityRecord.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCustomers
		{
			/**
			 * Compliance events are used for reporting regulatory or contract compliance
			 * issues and/or variances. These might be created as a consequence of local
			 * business processes and associated rules. It is anticipated that this class will
			 * be customised extensively to meet local implementation needs.
			 * Use inherited 'type' to indicate that, for example, expected performance will
			 * not be met or reported as mandated.
			 */
			class ComplianceEvent : public IEC61968::Common::ActivityRecord
			{

			public:
				ComplianceEvent();
				virtual ~ComplianceEvent();
				/**
				 * The deadline for compliance.
				 */
				IEC61970::Base::Domain::DateTime deadline;

			};

		}

	}

}
#endif // COMPLIANCEEVENT_H
