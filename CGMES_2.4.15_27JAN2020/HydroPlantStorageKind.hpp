#ifndef HydroPlantStorageKind_H
#define HydroPlantStorageKind_H

namespace CIMPP {
	/*
	The type of hydro power plant.
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
		storage,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::HydroPlantStorageKind& rop);
}
#endif
