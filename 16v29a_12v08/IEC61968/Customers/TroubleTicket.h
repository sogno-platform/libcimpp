///////////////////////////////////////////////////////////
//  TroubleTicket.h
//  Implementation of the Class TroubleTicket
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef TROUBLETICKET_H
#define TROUBLETICKET_H

#include <list>

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Customers/TroubleReportingKind.h"
#include "IEC61968/Common/Document.h"
#include "IEC61968/Customers/Customer.h"
#include "IEC61968/Customers/IncidentHazard.h"

namespace IEC61968
{	
	namespace Operations{
		class Incident;
	}
	namespace Customers
	{
		class TroubleTicket : public IEC61968::Common::Document
		{

		public:
			TroubleTicket();
			virtual ~TroubleTicket();
			/**
			 * Date and time the trouble has been reported.
			 */
			IEC61970::Base::Domain::DateTime dateTimeOfReport;
			/**
			 * A first responder on site such as police, fire department etc.
			 */
			IEC61970::Base::Domain::String firstResponder;
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
			 * Incident reported in this trouble ticket
			 */
			IEC61968::Operations::Incident *Incident;
			/**
			 * Customer for whom this trouble ticket is relevant.
			 */
			IEC61968::Customers::Customer *Customer;
			/**
			 * All hazards reported with this trouble ticket.
			 */
			std::list<IEC61968::Customers::IncidentHazard*> Hazards;

		};

	}

}
#endif // TROUBLETICKET_H
