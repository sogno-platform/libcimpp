///////////////////////////////////////////////////////////
//  ShuntImpedanceControlKind.h
//  Implementation of the Class ShuntImpedanceControlKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SHUNTIMPEDANCECONTROLKIND_H
#define SHUNTIMPEDANCECONTROLKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssetInfo
		{
			/**
			 * Kind of control for shunt impedance.
			 */
			enum class ShuntImpedanceControlKind
			{
				fixed,
				localOnly,
				remoteOnly,
				remoteWithLocalOverride
			};

		}

	}

}
#endif // SHUNTIMPEDANCECONTROLKIND_H
