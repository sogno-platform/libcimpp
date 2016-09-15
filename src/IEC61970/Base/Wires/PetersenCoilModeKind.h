///////////////////////////////////////////////////////////
//  PetersenCoilModeKind.h
//  Implementation of the Class PetersenCoilModeKind
//  Created on:      28-Jan-2016 12:45:59
//  Original author: kdemaree
///////////////////////////////////////////////////////////

#if !defined(EA_5CEC8CB2_307A_4560_805B_53F26263E5F7__INCLUDED_)
#define EA_5CEC8CB2_307A_4560_805B_53F26263E5F7__INCLUDED_

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
#endif // !defined(EA_5CEC8CB2_307A_4560_805B_53F26263E5F7__INCLUDED_)
