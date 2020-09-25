#ifndef PFVArType1IEEEPFController_H
#define PFVArType1IEEEPFController_H

#include "PFVArControllerType1Dynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Boolean.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"

namespace CIMPP {


	/*
	The class represents IEEE PF Controller Type 1 which operates by moving the voltage reference directly.  Reference: IEEE Standard 421.5-2005 Section 11.2.
	*/
	class PFVArType1IEEEPFController: public PFVArControllerType1Dynamics
	{

	public:
					CIMPP::Boolean ovex; 	/* Overexcitation Flag () true = overexcited false = underexcited. Default: false */
					CIMPP::Seconds tpfc; 	/* PF controller time delay ().  Typical Value = 5. Default: nullptr */
					CIMPP::PU vitmin; 	/* Minimum machine terminal current needed to enable pf/var controller (). Default: nullptr */
					CIMPP::PU vpf; 	/* Synchronous machine power factor (). Default: nullptr */
					CIMPP::Simple_Float vpfcbw; 	/* PF controller dead band ().  Typical Value = 0.05. Default: nullptr */
					CIMPP::PU vpfref; 	/* PF controller reference (). Default: nullptr */
					CIMPP::PU vvtmax; 	/* Maximum machine terminal voltage needed for pf/var controller to be enabled (). Default: nullptr */
					CIMPP::PU vvtmin; 	/* Minimum machine terminal voltage needed to enable pf/var controller (). Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		PFVArType1IEEEPFController();
		virtual ~PFVArType1IEEEPFController();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PFVArType1IEEEPFController_factory();
}
#endif
