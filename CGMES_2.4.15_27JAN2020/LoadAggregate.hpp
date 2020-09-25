#ifndef LoadAggregate_H
#define LoadAggregate_H

#include "LoadDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class LoadStatic;
class LoadMotor;
	/*
	Standard aggregate load model comprised of static and/or dynamic components.  A static load model represents the sensitivity of the real and reactive power consumed by the load to the amplitude and frequency of the bus voltage. A dynamic load model can used to represent the aggregate response of the motor components of the load.
	*/
	class LoadAggregate: public LoadDynamics
	{

	public:
					CIMPP::LoadStatic* LoadStatic; 	/* Aggregate static load associated with this aggregate load. Default: 0 */
					CIMPP::LoadMotor* LoadMotor; 	/* Aggregate motor (dynamic) load associated with this aggregate load. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		LoadAggregate();
		virtual ~LoadAggregate();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* LoadAggregate_factory();
}
#endif
