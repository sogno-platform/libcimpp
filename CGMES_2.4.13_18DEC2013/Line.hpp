#ifndef Line_H
#define Line_H

#include "EquipmentContainer.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class SubGeographicalRegion;
	/*
	Contains equipment beyond a substation belonging to a power transmission line.
	*/
	class Line: public EquipmentContainer
	{

	public:
					CIMPP::SubGeographicalRegion* Region; 	/* The lines within the sub-geographical region. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		Line();
		virtual ~Line();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* Line_factory();
}
#endif
