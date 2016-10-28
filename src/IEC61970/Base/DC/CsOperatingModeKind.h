///////////////////////////////////////////////////////////
//  CsOperatingModeKind.h
//  Implementation of the Class CsOperatingModeKind
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef CSOPERATINGMODEKIND_H
#define CSOPERATINGMODEKIND_H

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * Operating mode for HVDC line operating as Current Source Converter.
			 */
			enum class CsOperatingModeKind
			{
				/**
				 * Operating as inverter
				 */
				inverter,
				/**
				 * Operating as rectifier.
				 */
				rectifier
			};

		}

	}

}
#endif // CSOPERATINGMODEKIND_H
