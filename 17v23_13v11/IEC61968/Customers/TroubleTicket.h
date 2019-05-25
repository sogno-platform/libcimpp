///////////////////////////////////////////////////////////
//  TroubleTicket.h
//  Implementation of the Class TroubleTicket
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef TROUBLETICKET_H
#define TROUBLETICKET_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61968/Customers/TroubleReportingKind.h"
#include "IEC61968/Customers/IncidentHazard.h"
#include "IEC61968/Operations/Incident.h"
#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace Customers
	{
		class Customer;
	}
}

namespace IEC61968
{
	namespace Customers
	{
		class TroubleTicket : public IEC61968::Common::Document
		{

		public:
			TroubleTicket();
			virtual ~TroubleTicket();
			/**
			 * Free-form comment associated with the trouble call for example, "customer
			 * reported a large flash", etc.
			 */
			IEC61970::Base::Domain::String comment;
			/**
			 * Date and time the trouble has been reported.
			 */
			IEC61970::Base::Domain::DateTime dateTimeOfReport;
			/**
			 * Indicates whether the first responder such as police, fire department etc.has
			 * been notified and whether they are on site or en route.
			 */
			IEC61970::Base::Domain::String firstResponderStatus;
			/**
			 * Set to true if the outage report indicated that other neighbors are also out of
			 * power.
			 */
			IEC61970::Base::Domain::Boolean multiplePremises;
			/**
			 * Indicates how the customer reported trouble.
			 */
			IEC61968::Customers::TroubleReportingKind reportingKind = IEC61968::Customers::TroubleReportingKind::_undef;
			/**
			 * Date and time this trouble ticket has been resolved.
			 */
			IEC61970::Base::Domain::DateTime resolvedDateTime;
			/**
			 * Trouble code (e.g., power down, flickering lights, partial power, etc).
			 */
			IEC61970::Base::Domain::String troubleCode;
			/**
			 * All hazards reported with this trouble ticket.
			 */
			std::list<IEC61968::Customers::IncidentHazard*> IncidentHazard;
			/**
			 * Customer for whom this trouble ticket is relevant.
			 */
			IEC61968::Customers::Customer *Customer;
			/**
			 * Incident reported in this trouble ticket
			 */
			IEC61968::Operations::Incident *Incident;

		};

	}

}
#endif // TROUBLETICKET_H
