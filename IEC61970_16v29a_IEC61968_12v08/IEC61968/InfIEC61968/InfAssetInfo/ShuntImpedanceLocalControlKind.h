///////////////////////////////////////////////////////////
//  ShuntImpedanceLocalControlKind.h
//  Implementation of the Class ShuntImpedanceLocalControlKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SHUNTIMPEDANCELOCALCONTROLKIND_H
#define SHUNTIMPEDANCELOCALCONTROLKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssetInfo
		{
			/**
			 * Kind of local control for shunt impedance.
			 */
			enum class ShuntImpedanceLocalControlKind
			{
				 _undef = -1, 	none,
				powerFactor,
				time,
				temperature,
				reactivePower,
				current,
				voltage
			};

		}

	}

}
#endif // SHUNTIMPEDANCELOCALCONTROLKIND_H
