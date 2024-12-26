#ifndef DCLine_H
#define DCLine_H

#include "DCEquipmentContainer.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class SubGeographicalRegion;
	/*
	Overhead lines and/or cables connecting two or more HVDC substations.
	*/
	class DCLine: public DCEquipmentContainer
	{

	public:
					CIMPP::SubGeographicalRegion* Region; 	/*  Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		DCLine();
		virtual ~DCLine();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DCLine_factory();
}
#endif
