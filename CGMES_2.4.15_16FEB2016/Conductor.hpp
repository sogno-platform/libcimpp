#ifndef Conductor_H
#define Conductor_H

#include "ConductingEquipment.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Length.hpp"

namespace CIMPP {


	/*
	Combination of conducting material with consistent electrical characteristics, building a single electrical system, used to carry current between points in the power system.
	*/
	class Conductor: public ConductingEquipment
	{

	public:
					CIMPP::Length length; 	/* Segment length for calculating line section capabilities Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		Conductor();
		virtual ~Conductor();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* Conductor_factory();
}
#endif
