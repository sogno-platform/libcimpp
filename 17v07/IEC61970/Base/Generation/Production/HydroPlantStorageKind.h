///////////////////////////////////////////////////////////
//  HydroPlantStorageKind.h
//  Implementation of the Class HydroPlantStorageKind
///////////////////////////////////////////////////////////

#ifndef HYDROPLANTSTORAGEKIND_H
#define HYDROPLANTSTORAGEKIND_H

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * The type of hydro power plant.
				 */
				enum class HydroPlantStorageKind
				{
					/**
					 * Run of river.
					 */
					 _undef = -1, 	runOfRiver,
					/**
					 * Pumped storage.
					 */
					pumpedStorage,
					/**
					 * Storage.
					 */
					storage
				};

			}

		}

	}

}
#endif // HYDROPLANTSTORAGEKIND_H
