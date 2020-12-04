///////////////////////////////////////////////////////////
//  AccessPermit.h
//  Implementation of the Class AccessPermit
///////////////////////////////////////////////////////////

#ifndef ACCESSPERMIT_H
#define ACCESSPERMIT_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Date.h"
#include "IEC61970/Base/Domain/Money.h"
#include "IEC61968/InfIEC61968/InfWork/WorkDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * A permit is sometimes needed to provide legal access to land or equipment. For
			 * example, local authority permission for road works.
			 */
			class AccessPermit : public IEC61968::InfIEC61968::InfWork::WorkDocument
			{

			public:
				AccessPermit();
				virtual ~AccessPermit();
				/**
				 * Permit application number that is used by municipality, state, province, etc.
				 */
				IEC61970::Base::Domain::String applicationNumber;
				/**
				 * Date that permit became official.
				 */
				IEC61970::Base::Domain::Date effectiveDate;
				/**
				 * Permit expiration date.
				 */
				IEC61970::Base::Domain::Date expirationDate;
				/**
				 * Total cost of permit.
				 */
				IEC61970::Base::Domain::Money payment;
				/**
				 * Permit identifier.
				 */
				IEC61970::Base::Domain::String permitID;

			};

		}

	}

}
#endif // ACCESSPERMIT_H
