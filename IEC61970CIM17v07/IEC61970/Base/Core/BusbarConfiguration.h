///////////////////////////////////////////////////////////
//  BusbarConfiguration.h
//  Implementation of the Class BusbarConfiguration
///////////////////////////////////////////////////////////

#ifndef BUSBARCONFIGURATION_H
#define BUSBARCONFIGURATION_H

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
#endif // BUSBARCONFIGURATION_H
