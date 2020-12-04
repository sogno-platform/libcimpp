///////////////////////////////////////////////////////////
//  SafetyDocument.h
//  Implementation of the Class SafetyDocument
///////////////////////////////////////////////////////////

#ifndef SAFETYDOCUMENT_H
#define SAFETYDOCUMENT_H

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Document restricting or authorising works on electrical equipment (for example
		 * a permit to work, sanction for test, limitation of access, or certificate of
		 * isolation), defined based upon organisational practices.
		 */
		class SafetyDocument : public IEC61968::Common::Document
		{

		public:
			SafetyDocument();
			virtual ~SafetyDocument();
			/**
			 * Date and time this safety document has been issued.
			 */
			IEC61970::Base::Domain::DateTime issuedDateTime;
			/**
			 * Date and time this safety document has been released.
			 */
			IEC61970::Base::Domain::DateTime releasedDateTime;

		};

	}

}
#endif // SAFETYDOCUMENT_H
