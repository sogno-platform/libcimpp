#ifndef HydroPowerPlant_H
#define HydroPowerPlant_H

#include "PowerSystemResource.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "HydroPlantStorageKind.hpp"

namespace CIMPP {


class HydroGeneratingUnit;
class HydroPump;
	/*
	A hydro power station which can generate or pump. When generating, the generator turbines receive water from an upper reservoir. When pumping, the pumps receive their water from a lower reservoir.
	*/
	class HydroPowerPlant: public PowerSystemResource
	{

	public:
					std::list<CIMPP::HydroGeneratingUnit*> HydroGeneratingUnits; 	/* The hydro generating unit belongs to a hydro power plant. Default: 0 */
					std::list<CIMPP::HydroPump*> HydroPumps; 	/* The hydro pump may be a member of a pumped storage plant or a pump for distributing water. Default: 0 */
					CIMPP::HydroPlantStorageKind hydroPlantStorageType; 	/* The type of hydro power plant water storage. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		HydroPowerPlant();
		virtual ~HydroPowerPlant();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* HydroPowerPlant_factory();
}
#endif
