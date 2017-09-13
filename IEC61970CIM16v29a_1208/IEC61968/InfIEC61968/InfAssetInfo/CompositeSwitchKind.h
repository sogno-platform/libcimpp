///////////////////////////////////////////////////////////
//  CompositeSwitchKind.h
//  Implementation of the Class CompositeSwitchKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef COMPOSITESWITCHKIND_H
#define COMPOSITESWITCHKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssetInfo
		{
			/**
			 * Kind of composite switch.
			 */
			enum class CompositeSwitchKind
			{
				throwOver,
				escoThrowOver,
				ral,
				gral,
				regulatorBypass,
				ugMultiSwitch,
				other
			};

		}

	}

}
#endif // COMPOSITESWITCHKIND_H
