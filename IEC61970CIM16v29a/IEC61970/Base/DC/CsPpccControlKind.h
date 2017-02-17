///////////////////////////////////////////////////////////
//  CsPpccControlKind.h
//  Implementation of the Class CsPpccControlKind
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef CSPPCCCONTROLKIND_H
#define CSPPCCCONTROLKIND_H

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
#endif // CSPPCCCONTROLKIND_H
