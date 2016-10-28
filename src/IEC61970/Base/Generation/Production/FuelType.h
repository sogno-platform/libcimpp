///////////////////////////////////////////////////////////
//  FuelType.h
//  Implementation of the Class FuelType
///////////////////////////////////////////////////////////

#ifndef FUELTYPE_H
#define FUELTYPE_H

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * Type of fuel.
				 */
				enum class FuelType
				{
					/**
					 * Generic coal, not including lignite type.
					 */
					coal,
					/**
					 * Oil.
					 */
					oil,
					/**
					 * Natural gas.
					 */
					gas,
					/**
					 * The fuel is lignite coal.  Note that this is a special type of coal, so the
					 * other enum of coal is reserved for hard coal types or if the exact type of coal
					 * is not known.
					 */
					lignite,
					/**
					 * Hard coal
					 */
					hardCoal,
					/**
					 * Oil Shale
					 */
					oilShale
				};

			}

		}

	}

}
#endif // FUELTYPE_H
