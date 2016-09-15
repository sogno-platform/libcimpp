///////////////////////////////////////////////////////////
//  FuelType.h
//  Implementation of the Class FuelType
//  Created on:      28-Jan-2016 12:44:54
///////////////////////////////////////////////////////////

#if !defined(EA_72DCA1E6_DCFD_4526_BDC1_15867AF0E5A9__INCLUDED_)
#define EA_72DCA1E6_DCFD_4526_BDC1_15867AF0E5A9__INCLUDED_

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
#endif // !defined(EA_72DCA1E6_DCFD_4526_BDC1_15867AF0E5A9__INCLUDED_)
