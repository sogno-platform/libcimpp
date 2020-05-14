#ifndef MechLoad1_H
#define MechLoad1_H

#include "MechanicalLoadDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Simple_Float.hpp"

namespace CIMPP {


	/*
	Mechanical load model type 1.
	*/
	class MechLoad1: public MechanicalLoadDynamics
	{

	public:
					CIMPP::Simple_Float a; 	/* Speed squared coefficient (a). Default: nullptr */
					CIMPP::Simple_Float b; 	/* Speed coefficient (b). Default: nullptr */
					CIMPP::Simple_Float d; 	/* Speed to the exponent coefficient (d). Default: nullptr */
					CIMPP::Simple_Float e; 	/* Exponent (e). Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		MechLoad1();
		virtual ~MechLoad1();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* MechLoad1_factory();
}
#endif
