///////////////////////////////////////////////////////////
//  Document.h
//  Implementation of the Class Document
///////////////////////////////////////////////////////////

#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/Common/Status.h"
#include "IEC61968/Common/ElectronicAddress.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Common/ConfigurationEvent.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Parent class for different groupings of information collected and managed as a
		 * part of a business process. It will frequently contain references to other
		 * objects, such as assets, people and power system resources.
		 */
		class Document : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			Document();
			virtual ~Document();
			/**
			 * Name of the author of this document.
			 */
			IEC61970::Base::Domain::String authorName;
			/**
			 * Free text comment.
			 */
			IEC61970::Base::Domain::String comment;
			/**
			 * Date and time that this document was created.
			 */
			IEC61970::Base::Domain::DateTime createdDateTime;
			/**
			 * Status of this document. For status of subject matter this document represents
			 * (e.g., Agreement, Work), use 'status' attribute.
			 * Example values for 'docStatus.status' are draft, approved, cancelled, etc.
			 */
			IEC61968::Common::Status docStatus;
			/**
			 * Electronic address.
			 */
			IEC61968::Common::ElectronicAddress electronicAddress;
			/**
			 * Date and time this document was last modified. Documents may potentially be
			 * modified many times during their lifetime.
			 */
			IEC61970::Base::Domain::DateTime lastModifiedDateTime;
			/**
			 * Revision number for this document.
			 */
			IEC61970::Base::Domain::String revisionNumber;
			/**
			 * Status of subject matter (e.g., Agreement, Work) this document represents. For
			 * status of the document itself, use 'docStatus' attribute.
			 */
			IEC61968::Common::Status status;
			/**
			 * Document subject.
			 */
			IEC61970::Base::Domain::String subject;
			/**
			 * Document title.
			 */
			IEC61970::Base::Domain::String title;
			/**
			 * Utility-specific classification of this document, according to its corporate
			 * standards, practices, and existing IT systems (e.g., for management of assets,
			 * maintenance, work, outage, customers, etc.).
			 */
			IEC61970::Base::Domain::String type;
			/**
			 * All configuration events created for this document.
			 */
			std::list<IEC61968::Common::ConfigurationEvent*> ConfigurationEvents;

		};

	}

}
#endif // DOCUMENT_H
