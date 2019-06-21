///////////////////////////////////////////////////////////
//  ICCPInformationMessage.h
//  Implementation of the Class ICCPInformationMessage
//  Original author: herb
///////////////////////////////////////////////////////////

#ifndef ICCPINFORMATIONMESSAGE_H
#define ICCPINFORMATIONMESSAGE_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/ICCPConfiguration/ICCPScope.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Base/ICCPConfiguration/TASE2BilateralTable.h"

namespace IEC61970
{
	namespace Base
	{
		namespace ICCPConfiguration
		{
			/**
			 * This class represents the TASE.2 Information Message Object.  The
			 * IdentifiedObject.name attribute must be non-null.  The value of the attribute
			 * shall be used as the TASE.2 Information Reference, as specified by 60870-6-503.
			 */
			class ICCPInformationMessage : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				ICCPInformationMessage();
				virtual ~ICCPInformationMessage();
				/**
				 * The Local Reference attribute specifies a value agreed upon between sender and
				 * receiver of the Information Message. It further identifies the Information
				 * Message.
				 */
				IEC61970::Base::Domain::String localReference;
				IEC61970::Base::ICCPConfiguration::ICCPScope scope = IEC61970::Base::ICCPConfiguration::ICCPScope::_undef;
				std::list<IEC61970::Base::ICCPConfiguration::TASE2BilateralTable*> TASE2BilateralTable;

			};

		}

	}

}
#endif // ICCPINFORMATIONMESSAGE_H
