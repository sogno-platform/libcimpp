///////////////////////////////////////////////////////////
//  JointFillKind.h
//  Implementation of the Class JointFillKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef JOINTFILLKIND_H
#define JOINTFILLKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Kind of fill for Joint.
			 */
			enum class JointFillKind
			{
				noFillPrefab,
				airNoFilling,
				petrolatum,
				asphaltic,
				oil,
				bluefill254,
				noVoid,
				epoxy,
				insoluseal,
				other
			};

		}

	}

}
#endif // JOINTFILLKIND_H
