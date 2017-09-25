///////////////////////////////////////////////////////////
//  Tower.h
//  Implementation of the Class Tower
///////////////////////////////////////////////////////////

#ifndef TOWER_H
#define TOWER_H

#include "IEC61968/InfIEC61968/InfAssets/TowerConstructionKind.h"
#include "IEC61968/InfIEC61968/InfAssets/Structure.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Tower asset. Dimensions of the Tower are specified in associated DimensionsInfo
			 * class.
			 * When used for planning purposes, a transmission tower carrying two 3-phase
			 * circuits will have 2 instances of Connection, each of which will have 3
			 * MountingPoint instances, one for each phase all with coordinates relative to a
			 * common origin on the tower. (It may also have a 3rd Connection with a single
			 * MountingPoint for the Neutral line).
			 */
			class Tower : public IEC61968::InfIEC61968::InfAssets::Structure
			{

			public:
				Tower();
				virtual ~Tower();
				/**
				 * Construction structure on the tower.
				 */
				IEC61968::InfIEC61968::InfAssets::TowerConstructionKind constructionKind;

			};

		}

	}

}
#endif // TOWER_H
