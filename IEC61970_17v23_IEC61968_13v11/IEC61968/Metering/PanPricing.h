///////////////////////////////////////////////////////////
//  PanPricing.h
//  Implementation of the Class PanPricing
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef PANPRICING_H
#define PANPRICING_H

#include <list>

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61968/Metering/PanPricingDetail.h"
#include "IEC61968/Metering/EndDeviceAction.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * PAN action/command used to issue pricing information to a PAN device.
		 */
		class PanPricing : public IEC61968::Metering::EndDeviceAction
		{

		public:
			PanPricing();
			virtual ~PanPricing();
			/**
			 * Unique identifier for the commodity provider.
			 */
			IEC61970::Base::Domain::Integer providerID;
			/**
			 * All pricing details issued by this PAN pricing command/action.
			 */
			std::list<IEC61968::Metering::PanPricingDetail*> PanPricingDetails;

		};

	}

}
#endif // PANPRICING_H
