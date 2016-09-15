///////////////////////////////////////////////////////////
//  HydroPlantStorageKind.h
//  Implementation of the Class HydroPlantStorageKind
//  Created on:      28-Jan-2016 12:45:20
///////////////////////////////////////////////////////////

#if !defined(EA_532FE9F0_A265_46ae_8933_B4F960E54E46__INCLUDED_)
#define EA_532FE9F0_A265_46ae_8933_B4F960E54E46__INCLUDED_

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
					runOfRiver,
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
#endif // !defined(EA_532FE9F0_A265_46ae_8933_B4F960E54E46__INCLUDED_)
