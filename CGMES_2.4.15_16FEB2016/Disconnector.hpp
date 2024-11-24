#ifndef Disconnector_H
#define Disconnector_H

#include "Switch.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


	/*
	A manually operated or motor operated mechanical switching device used for changing the connections in a circuit, or for isolating a circuit or equipment from a source of power. It is required to open or close circuits when negligible current is broken or made.
	*/
	class Disconnector: public Switch
	{

	public:
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		Disconnector();
		virtual ~Disconnector();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* Disconnector_factory();
}
#endif
