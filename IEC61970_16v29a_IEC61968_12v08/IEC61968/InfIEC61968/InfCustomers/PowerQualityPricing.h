///////////////////////////////////////////////////////////
//  PowerQualityPricing.h
//  Implementation of the Class PowerQualityPricing
///////////////////////////////////////////////////////////

#ifndef POWERQUALITYPRICING_H
#define POWERQUALITYPRICING_H

#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/CostPerEnergyUnit.h"
#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCustomers
		{
			/**
			 * Pricing can be based on power quality.
			 */
			class PowerQualityPricing : public IEC61968::Common::Document
			{

			public:
				PowerQualityPricing();
				virtual ~PowerQualityPricing();
				/**
				 * Emergency high voltage limit.
				 */
				IEC61970::Base::Domain::Voltage emergencyHighVoltLimit;
				/**
				 * Emergency low voltage limit.
				 */
				IEC61970::Base::Domain::Voltage emergencyLowVoltLimit;
				/**
				 * Normal high voltage limit.
				 */
				IEC61970::Base::Domain::Voltage normalHighVoltLimit;
				/**
				 * Normal low voltage limit.
				 */
				IEC61970::Base::Domain::Voltage normalLowVoltLimit;
				/**
				 * Threshold minimum power factor for this PricingStructure, specified in
				 * instances where a special charge is levied if the actual power factor for a
				 * Service falls below the value specified here.
				 */
				IEC61970::Base::Domain::Float powerFactorMin;
				/**
				 * Value of uninterrupted service (Cost per energy).
				 */
				IEC61970::Base::Domain::CostPerEnergyUnit valueUninterruptedServiceEnergy;
				/**
				 * Value of uninterrupted service (Cost per active power).
				 */
				IEC61970::Base::Domain::Float valueUninterruptedServiceP;
				/**
				 * Voltage imbalance violation cost (Cost per unit Voltage).
				 */
				IEC61970::Base::Domain::Float voltImbalanceViolCost;
				/**
				 * Voltage limit violation cost (Cost per unit Voltage).
				 */
				IEC61970::Base::Domain::Float voltLimitViolCost;

			};

		}

	}

}
#endif // POWERQUALITYPRICING_H
