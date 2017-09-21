///////////////////////////////////////////////////////////
//  LandPropertyKind.h
//  Implementation of the Class LandPropertyKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef LANDPROPERTYKIND_H
#define LANDPROPERTYKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfLocations
		{
			/**
			 * Kind of (land) property.
			 */
			enum class LandPropertyKind
			{
				/**
				 * Site enclosed within a building.
				 */
				building,
				/**
				 * Site with a customer.
				 */
				customerPremise,
				/**
				 * Storehouse for supplies that also serves as a station for supporting crews.
				 */
				depot,
				/**
				 * Place of storage (e.g., a warehouse) to put aside, or accumulate, material and
				 * equipment for use when needed.
				 */
				store,
				/**
				 * Transmission network switchyard.
				 */
				substation,
				/**
				 * Substation where the distribution and transmission networks meet and hence have
				 * mixed ownership and mixed operational control.
				 */
				gridSupplyPoint,
				/**
				 * Property owned or used by an external party that is not a customer.
				 */
				external
			};

		}

	}

}
#endif // LANDPROPERTYKIND_H
