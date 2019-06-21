///////////////////////////////////////////////////////////
//  TASE2BilateralTable.h
//  Implementation of the Class TASE2BilateralTable
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef TASE2BILATERALTABLE_H
#define TASE2BILATERALTABLE_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/ICCPConfiguration/BilateralExchangeAgreement.h"

namespace IEC61970
{
	namespace Base
	{
		namespace ICCPConfiguration
		{
			/**
			 * This class describe the sending (providing) side in a bilateral ICCP data
			 * exchange. Hence the ICCP bilateral (table) descriptions are created by
			 * exchanging ICCP Provider data between the parties.
			 */
			class TASE2BilateralTable : public IEC61970::Base::ICCPConfiguration::BilateralExchangeAgreement
			{

			public:
				TASE2BilateralTable();
				virtual ~TASE2BilateralTable();
				/**
				 * Specifies the version of the Bilateral Table configuration that is being
				 * exchanged.
				 */
				IEC61970::Base::Domain::String bilateralTableID;
				/**
				 * The Version attribute identifies a unique version of the Bilateral Table. If
				 * any changes are made to a Bilateral Table, then a new unique value for this
				 * attribute shall be generated.
				 */
				IEC61970::Base::Domain::String bilateralTableVersion;
				/**
				 * Specifies the version of the TASE.2 that is needed to access the Bilateral
				 * Table information via TASE.2.
				 * 
				 * In order for a link to be established, both sides must have the same value.
				 */
				IEC61970::Base::Domain::String tase2version;

			};

		}

	}

}
#endif // TASE2BILATERALTABLE_H
