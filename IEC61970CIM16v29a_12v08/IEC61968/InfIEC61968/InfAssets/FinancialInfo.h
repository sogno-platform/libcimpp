///////////////////////////////////////////////////////////
//  FinancialInfo.h
//  Implementation of the Class FinancialInfo
///////////////////////////////////////////////////////////

#ifndef FINANCIALINFO_H
#define FINANCIALINFO_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Money.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/IntegerQuantity.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Assets/Asset.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Various current financial properties associated with a particular asset.
			 * Historical properties may be determined by ActivityRecords associated with the
			 * asset.
			 */
			class FinancialInfo : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				FinancialInfo();
				virtual ~FinancialInfo();
				/**
				 * The account to which this actual material item is charged.
				 */
				IEC61970::Base::Domain::String account;
				/**
				 * The actual purchase cost of this particular asset.
				 */
				IEC61970::Base::Domain::Money actualPurchaseCost;
				/**
				 * Description of the cost.
				 */
				IEC61970::Base::Domain::String costDescription;
				/**
				 * Type of cost to which this Material Item belongs.
				 */
				IEC61970::Base::Domain::String costType;
				/**
				 * Value of asset as of 'valueDateTime'.
				 */
				IEC61970::Base::Domain::Money financialValue;
				/**
				 * Date and time asset's financial value was put in plant for regulatory
				 * accounting purposes (e.g., for rate base calculations). This is sometime
				 * referred to as the "in-service date".
				 */
				IEC61970::Base::Domain::DateTime plantTransferDateTime;
				/**
				 * Date and time asset was purchased.
				 */
				IEC61970::Base::Domain::DateTime purchaseDateTime;
				/**
				 * Purchase order identifier.
				 */
				IEC61970::Base::Domain::String purchaseOrderNumber;
				/**
				 * The quantity of the asset if per unit length, for example conductor.
				 */
				IEC61970::Base::Domain::IntegerQuantity quantity;
				/**
				 * Date and time at which the financial value was last established.
				 */
				IEC61970::Base::Domain::DateTime valueDateTime;
				/**
				 * Date and time warranty on asset expires.
				 */
				IEC61970::Base::Domain::DateTime warrantyEndDateTime;
				IEC61968::Assets::Asset *Asset;

			};

		}

	}

}
#endif // FINANCIALINFO_H
