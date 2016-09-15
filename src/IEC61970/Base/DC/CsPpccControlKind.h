///////////////////////////////////////////////////////////
//  CsPpccControlKind.h
//  Implementation of the Class CsPpccControlKind
//  Created on:      28-Jan-2016 12:43:46
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_CC7107D3_9FFE_4b81_A3D9_4095DE5A9A3F__INCLUDED_)
#define EA_CC7107D3_9FFE_4b81_A3D9_4095DE5A9A3F__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * Active power control modes for HVDC line operating as Current Source Converter.
			 */
			enum class CsPpccControlKind
			{
				/**
				 * Active power control at AC side.
				 */
				activePower,
				/**
				 * DC voltage control.
				 */
				dcVoltage,
				/**
				 * DC current control
				 */
				dcCurrent
			};

		}

	}

}
#endif // !defined(EA_CC7107D3_9FFE_4b81_A3D9_4095DE5A9A3F__INCLUDED_)
