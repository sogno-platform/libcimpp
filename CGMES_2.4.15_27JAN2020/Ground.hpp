#ifndef Ground_H
#define Ground_H

#include "ConductingEquipment.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


	/*
	A point where the system is grounded used for connecting conducting equipment to ground. The power system model can have any number of grounds.
	*/
	class Ground: public ConductingEquipment
	{

	public:
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		Ground();
		virtual ~Ground();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* Ground_factory();
}
#endif
