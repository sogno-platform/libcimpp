///////////////////////////////////////////////////////////
//  CustomerKind.h
//  Implementation of the Class CustomerKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef CUSTOMERKIND_H
#define CUSTOMERKIND_H

namespace IEC61968
{
	namespace Customers
	{
		/**
		 * Kind of customer.
		 */
		enum class CustomerKind
		{
			/**
			 * Residential customer.
			 */
			residential,
			/**
			 * Residential and commercial customer.
			 */
			 _undef = -1, 	residentialAndCommercial,
			/**
			 * Residential and streetlight customer.
			 */
			residentialAndStreetlight,
			/**
			 * Residential streetlight or other related customer.
			 */
			residentialStreetlightOthers,
			/**
			 * Residential farm service customer.
			 */
			residentialFarmService,
			/**
			 * Commercial industrial customer.
			 */
			commercialIndustrial,
			/**
			 * Pumping load customer.
			 */
			pumpingLoad,
			/**
			 * Wind machine customer.
			 */
			windMachine,
			/**
			 * Customer as energy service supplier.
			 */
			energyServiceSupplier,
			/**
			 * Customer as energy service scheduler.
			 */
			energyServiceScheduler,
			/**
			 * Internal use customer.
			 */
			internalUse,
			/**
			 * Other kind of customer.
			 */
			other
		};

	}

}
#endif // CUSTOMERKIND_H
