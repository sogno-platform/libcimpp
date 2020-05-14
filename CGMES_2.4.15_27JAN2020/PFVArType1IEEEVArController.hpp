#ifndef PFVArType1IEEEVArController_H
#define PFVArType1IEEEVArController_H

#include "PFVArControllerType1Dynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Seconds.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"

namespace CIMPP {


	/*
	The class represents IEEE VAR Controller Type 1 which operates by moving the voltage reference directly.  Reference: IEEE Standard 421.5-2005 Section 11.3.
	*/
	class PFVArType1IEEEVArController: public PFVArControllerType1Dynamics
	{

	public:
					CIMPP::Seconds tvarc; 	/* Var controller time delay ().  Typical Value = 5. Default: nullptr */
					CIMPP::PU vvar; 	/* Synchronous machine power factor (). Default: nullptr */
					CIMPP::Simple_Float vvarcbw; 	/* Var controller dead band ().  Typical Value = 0.02. Default: nullptr */
					CIMPP::PU vvarref; 	/* Var controller reference (). Default: nullptr */
					CIMPP::PU vvtmax; 	/* Maximum machine terminal voltage needed for pf/var controller to be enabled (). Default: nullptr */
					CIMPP::PU vvtmin; 	/* Minimum machine terminal voltage needed to enable pf/var controller (). Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		PFVArType1IEEEVArController();
		virtual ~PFVArType1IEEEVArController();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PFVArType1IEEEVArController_factory();
}
#endif
