///////////////////////////////////////////////////////////
//  BusbarConfiguration.h
//  Implementation of the Class BusbarConfiguration
//  Created on:      28-Jan-2016 12:43:30
///////////////////////////////////////////////////////////

#if !defined(EA_BE13A598_17BB_4db2_BBD6_E228E99D211F__INCLUDED_)
#define EA_BE13A598_17BB_4db2_BBD6_E228E99D211F__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * Busbar layout for bay.
			 */
			enum class BusbarConfiguration
			{
				/**
				 * Single bus.
				 */
				singleBus,
				/**
				 * Double bus.
				 */
				doubleBus,
				/**
				 * Main bus with transfer bus.
				 */
				mainWithTransfer,
				/**
				 * Ring bus.
				 */
				ringBus
			};

		}

	}

}
#endif // !defined(EA_BE13A598_17BB_4db2_BBD6_E228E99D211F__INCLUDED_)
