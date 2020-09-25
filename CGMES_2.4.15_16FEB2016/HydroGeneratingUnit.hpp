#ifndef HydroGeneratingUnit_H
#define HydroGeneratingUnit_H

#include "GeneratingUnit.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "HydroEnergyConversionKind.hpp"

namespace CIMPP {


class HydroPowerPlant;
	/*
	A generating unit whose prime mover is a hydraulic turbine (e.g., Francis, Pelton, Kaplan).
	*/
	class HydroGeneratingUnit: public GeneratingUnit
	{

	public:
					CIMPP::HydroEnergyConversionKind energyConversionCapability; 	/* Energy conversion capability for generating. Default: 0 */
					CIMPP::HydroPowerPlant* HydroPowerPlant; 	/* The hydro generating unit belongs to a hydro power plant. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		HydroGeneratingUnit();
		virtual ~HydroGeneratingUnit();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* HydroGeneratingUnit_factory();
}
#endif
