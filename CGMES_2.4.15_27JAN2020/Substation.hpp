#ifndef Substation_H
#define Substation_H

#include "EquipmentContainer.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class DCConverterUnit;
class SubGeographicalRegion;
class VoltageLevel;
	/*
	A collection of equipment for purposes other than generation or utilization, through which electric energy in bulk is passed for the purposes of switching or modifying its characteristics.
	*/
	class Substation: public EquipmentContainer
	{

	public:
					std::list<CIMPP::DCConverterUnit*> DCConverterUnit; 	/*  Default: 0 */
					CIMPP::SubGeographicalRegion* Region; 	/* The SubGeographicalRegion containing the substation. Default: 0 */
					std::list<CIMPP::VoltageLevel*> VoltageLevels; 	/* The voltage levels within this substation. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		Substation();
		virtual ~Substation();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* Substation_factory();
}
#endif
