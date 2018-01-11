///////////////////////////////////////////////////////////
//  CoolantType.h
//  Implementation of the Class CoolantType
///////////////////////////////////////////////////////////

#ifndef COOLANTTYPE_H
#define COOLANTTYPE_H

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Method of cooling a machine.
			 */
			enum class CoolantType
			{
				/**
				 * Air.
				 */
				 _undef = -1, 	air,
				/**
				 * Hydrogen gas.
				 */
				hydrogenGas,
				/**
				 * Water.
				 */
				water
			};

		}

	}

}
#endif // COOLANTTYPE_H
