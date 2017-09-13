///////////////////////////////////////////////////////////
//  ServiceCategory.h
//  Implementation of the Class ServiceCategory
///////////////////////////////////////////////////////////

#ifndef SERVICECATEGORY_H
#define SERVICECATEGORY_H

#include <list>

#include "IEC61968/Customers/ServiceKind.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Customers/PricingStructure.h"
#include "IEC61968/Common/ConfigurationEvent.h"

namespace IEC61968
{
	namespace Customers
	{
		/**
		 * Category of service provided to the customer.
		 */
		class ServiceCategory : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			ServiceCategory();
			virtual ~ServiceCategory();
			/**
			 * Kind of service.
			 */
			IEC61968::Customers::ServiceKind kind;
			/**
			 * All pricing structures applicable to this service category.
			 */
			std::list<IEC61968::Customers::PricingStructure*> PricingStructures;
			/**
			 * All configuration events created for this service category.
			 */
			std::list<IEC61968::Common::ConfigurationEvent*> ConfigurationEvents;

		};

	}

}
#endif // SERVICECATEGORY_H
