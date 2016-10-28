///////////////////////////////////////////////////////////
//  PetersenCoilModeKind.h
//  Implementation of the Class PetersenCoilModeKind
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#ifndef PETERSENCOILMODEKIND_H
#define PETERSENCOILMODEKIND_H

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * The mode of operation for a Petersen coil.
			 */
			enum class PetersenCoilModeKind
			{
				/**
				 * Fixed position.
				 */
				fixed,
				/**
				 * Manual positioning.
				 */
				manual,
				/**
				 * Automatic positioning.
				 */
				automaticPositioning
			};

		}

	}

}
#endif // PETERSENCOILMODEKIND_H
