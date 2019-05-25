///////////////////////////////////////////////////////////
//  TowerConstructionKind.h
//  Implementation of the Class TowerConstructionKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef TOWERCONSTRUCTIONKIND_H
#define TOWERCONSTRUCTIONKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Kind of tower construction.
			 */
			enum class TowerConstructionKind
			{
				 _undef = -1, 	suspension,
				tension
			};

		}

	}

}
#endif // TOWERCONSTRUCTIONKIND_H
