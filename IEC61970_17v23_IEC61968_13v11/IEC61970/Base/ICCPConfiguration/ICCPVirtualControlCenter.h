///////////////////////////////////////////////////////////
//  ICCPVirtualControlCenter.h
//  Implementation of the Class ICCPVirtualControlCenter
//  Original author: herb
///////////////////////////////////////////////////////////

#ifndef ICCPVIRTUALCONTROLCENTER_H
#define ICCPVIRTUALCONTROLCENTER_H

#include "IEC61970/Base/ICCPConfiguration/IEC62351_6ApplicationSecurityKind.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/ICCPConfiguration/BilateralExchangeActor.h"

namespace IEC61970
{
	namespace Base
	{
		namespace ICCPConfiguration
		{
			/**
			 * This contains the information that a particular actor exposes for a particular
			 * agreed upon ICCP Bilateral Table.
			 */
			class ICCPVirtualControlCenter : public IEC61970::Base::ICCPConfiguration::BilateralExchangeActor
			{

			public:
				ICCPVirtualControlCenter();
				virtual ~ICCPVirtualControlCenter();
				IEC61970::Base::ICCPConfiguration::IEC62351_6ApplicationSecurityKind applicationSecurityRequirement = IEC61970::Base::ICCPConfiguration::IEC62351_6ApplicationSecurityKind::_undef;
				/**
				 * Used to indicate if the Provider is responsible for initiating the TASE.2
				 * connection.  If the value is TRUE, the provider is responsible for establishing
				 * the association.  If the value is FALSE, the peer provider of the Bilateral
				 * Table will need to establish the association.
				 */
				IEC61970::Base::Domain::Boolean calling;
				/**
				 * If True the value indicates that the entity represented by the bilateral table
				 * is capable of issuing requests and responding to request (e.g. bidirectional
				 * support of ICCP requests).
				 * 
				 * If False, this indicates that a calling entity (e.g. calling = True) will not
				 * be able to respond to ICCP requests.  If False, and calling=False, this
				 * indicates that the entity will only respond to ICCP requests and not issue ICCP
				 * requests.
				 */
				IEC61970::Base::Domain::Boolean clientAndServer;
				/**
				 * Specifies the fastest update interval that can be provided for integrity
				 * information and Transfer Set creation. The value is in seconds.
				 */
				IEC61970::Base::Domain::Integer minimumUpdateInterval;
				/**
				 * Specifies the ICC scope name that the remote can use to access the information
				 * in the Bilateral Table if the information is not VCC scoped.  This value may
				 * not be null.
				 */
				IEC61970::Base::Domain::String nameOfLocalICC;
				/**
				 * Per IEC 60870-6-702:  If true indicates support for basic services.  Must
				 * always be true.
				 */
				IEC61970::Base::Domain::Boolean supportForBlock1;
				/**
				 * Per IEC 60870-6-702:  If true indicates support for extended conditions.
				 */
				IEC61970::Base::Domain::Boolean supportForBlock2;
				/**
				 * Per IEC 60870-6-702:  If true indicates support for blocked transfers. 
				 */
				IEC61970::Base::Domain::Boolean supportForBlock3;
				/**
				 * Per IEC 60870-6-702:  If true indicates support for information messages. 
				 */
				IEC61970::Base::Domain::Boolean supportForBlock4;
				/**
				 * Per IEC 60870-6-702:  If true indicates support for device control. 
				 */
				IEC61970::Base::Domain::Boolean supportForBlock5;
				/**
				 * Per IEC 60870-6-702:  If true indicates support for accounts.  The use of this
				 * block was deprecated in Edition 3.
				 */
				IEC61970::Base::Domain::Boolean supportForDepriciatedBlock8;
				/**
				 * If true, then transport level security as specified by IEC 62351-6 is required.
				 */
				IEC61970::Base::Domain::Boolean TransportSecurityRequirement;

			};

		}

	}

}
#endif // ICCPVIRTUALCONTROLCENTER_H
