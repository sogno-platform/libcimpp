///////////////////////////////////////////////////////////
//  MeterMultiplierKind.h
//  Implementation of the Class MeterMultiplierKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef METERMULTIPLIERKIND_H
#define METERMULTIPLIERKIND_H

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Kind of meter multiplier.
		 */
		enum class MeterMultiplierKind
		{
			/**
			 * Meter kh (watthour) constant. The number of watthours that must be applied to
			 * the meter to cause one disk revolution for an electromechanical meter or the
			 * number of watthours represented by one increment pulse for an electronic meter.
			 */
			 _undef = -1, 	kH,
			/**
			 * Register multiplier. The number to multiply the register reading by in order to
			 * get kWh.
			 */
			kR,
			/**
			 * Test constant.
			 */
			kE,
			/**
			 * Current transformer ratio used to convert associated quantities to real
			 * measurements.
			 */
			ctRatio,
			/**
			 * Potential transformer ratio used to convert associated quantities to real
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
#endif // METERMULTIPLIERKIND_H
