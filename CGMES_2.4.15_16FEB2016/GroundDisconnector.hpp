#ifndef GroundDisconnector_H
#define GroundDisconnector_H

#include "Switch.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


	/*
	A manually operated or motor operated mechanical switching device used for isolating a circuit or equipment from ground.
	*/
	class GroundDisconnector: public Switch
	{

	public:
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		GroundDisconnector();
		virtual ~GroundDisconnector();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* GroundDisconnector_factory();
}
#endif
