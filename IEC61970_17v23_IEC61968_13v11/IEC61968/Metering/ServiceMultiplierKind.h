///////////////////////////////////////////////////////////
//  ServiceMultiplierKind.h
//  Implementation of the Class ServiceMultiplierKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SERVICEMULTIPLIERKIND_H
#define SERVICEMULTIPLIERKIND_H

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Kind of service multiplier.
		 */
		enum class ServiceMultiplierKind
		{
			/**
			 * Current transformer ratio used to convert associated quantities to real
			 * measurements.
			 */
			 _undef = -1, 	ctRatio,
			/**
			 * Voltage transformer ratio used to convert associated quantities to real
			 * measurements.
			 */
			ptRatio,
			/**
			 * Product of the CT ratio and PT ratio.
			 */
			transformerRatio
		};

	}

}
#endif // SERVICEMULTIPLIERKIND_H
