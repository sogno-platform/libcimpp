#ifndef HydroPlantStorageKind_H
#define HydroPlantStorageKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief The type of hydro power plant. */
	class HydroPlantStorageKind
	{
	public:
		enum HydroPlantStorageKind_ENUM
		{
			/** Run of river. */
			runOfRiver,
			/** Pumped storage. */
			pumpedStorage,
			/** Storage. */
			storage,
		};

		HydroPlantStorageKind() : value(), initialized(false) {}
		HydroPlantStorageKind(HydroPlantStorageKind_ENUM value) : value(value), initialized(true) {}

		HydroPlantStorageKind& operator=(HydroPlantStorageKind_ENUM rop);
		operator HydroPlantStorageKind_ENUM() const;

		HydroPlantStorageKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, HydroPlantStorageKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const HydroPlantStorageKind& obj);
	};
}
#endif
