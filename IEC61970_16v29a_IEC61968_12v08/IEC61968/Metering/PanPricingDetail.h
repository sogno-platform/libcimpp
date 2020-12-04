///////////////////////////////////////////////////////////
//  PanPricingDetail.h
//  Implementation of the Class PanPricingDetail
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef PANPRICINGDETAIL_H
#define PANPRICINGDETAIL_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/Money.h"
#include "IEC61970/Base/Domain/Integer.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Detail for a single price command/action.
		 */
		class PanPricingDetail : public BaseClass
		{

		public:
			PanPricingDetail();
			virtual ~PanPricingDetail();
			/**
			 * Alternative measure of the cost of the energy consumed. An example might be the
			 * emissions of CO2 for each kWh of electricity consumed providing a measure of
			 * the environmental cost.
			 */
			IEC61970::Base::Domain::Float alternateCostDelivered;
			/**
			 * Cost unit for the alternate cost delivered field. One example is kg of CO2 per
			 * unit of measure.
			 */
			IEC61970::Base::Domain::String alternateCostUnit;
			/**
			 * Current time as determined by a PAN device.
			 */
			IEC61970::Base::Domain::DateTime currentTimeDate;
			/**
			 * Price of the commodity measured in base unit of currency per 'unitOfMeasure'.
			 */
			IEC61970::Base::Domain::Money generationPrice;
			/**
			 * Ratio of 'generationPrice' to the "normal" price chosen by the commodity
			 * provider.
			 */
			IEC61970::Base::Domain::Float generationPriceRatio;
			/**
			 * Price of the commodity measured in base unit of currency per 'unitOfMeasure'.
			 */
			IEC61970::Base::Domain::Money price;
			/**
			 * Ratio of 'price' to the "normal" price chosen by the commodity provider.
			 */
			IEC61970::Base::Domain::Float priceRatio;
			/**
			 * Pricing tier as chosen by the commodity provider.
			 */
			IEC61970::Base::Domain::Integer priceTier;
			/**
			 * Maximum number of price tiers available.
			 */
			IEC61970::Base::Domain::Integer priceTierCount;
			/**
			 * Label for price tier.
			 */
			IEC61970::Base::Domain::String priceTierLabel;
			/**
			 * Label of the current billing rate specified by commodity provider.
			 */
			IEC61970::Base::Domain::String rateLabel;
			/**
			 * Register tier accumulating usage information.
			 */
			IEC61970::Base::Domain::String registerTier;
			/**
			 * Defines commodity as well as its base unit of measure.
			 */
			IEC61970::Base::Domain::String unitOfMeasure;

		};

	}

}
#endif // PANPRICINGDETAIL_H
