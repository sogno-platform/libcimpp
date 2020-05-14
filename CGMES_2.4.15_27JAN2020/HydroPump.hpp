#ifndef HydroPump_H
#define HydroPump_H

#include "Equipment.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class HydroPowerPlant;
class RotatingMachine;
	/*
	A synchronous motor-driven pump, typically associated with a pumped storage plant.
	*/
	class HydroPump: public Equipment
	{

	public:
					CIMPP::HydroPowerPlant* HydroPowerPlant; 	/* The hydro pump may be a member of a pumped storage plant or a pump for distributing water. Default: 0 */
					CIMPP::RotatingMachine* RotatingMachine; 	/* The synchronous machine drives the turbine which moves the water from a low elevation to a higher elevation. The direction of machine rotation for pumping may or may not be the same as for generating. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		HydroPump();
		virtual ~HydroPump();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* HydroPump_factory();
}
#endif
