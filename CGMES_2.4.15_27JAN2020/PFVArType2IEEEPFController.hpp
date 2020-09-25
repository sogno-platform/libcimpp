#ifndef PFVArType2IEEEPFController_H
#define PFVArType2IEEEPFController_H

#include "PFVArControllerType2Dynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Boolean.hpp"

namespace CIMPP {


	/*
	The class represents IEEE PF Controller Type 2 which is a summing point type controller and makes up the outside loop of a two-loop system. This controller is implemented as a slow PI type controller. The voltage regulator forms the inner loop and is implemented as a fast controller.  Reference: IEEE Standard 421.5-2005 Section 11.4.
	*/
	class PFVArType2IEEEPFController: public PFVArControllerType2Dynamics
	{

	public:
					CIMPP::PU pfref; 	/* Power factor reference (). Default: nullptr */
					CIMPP::PU vref; 	/* Voltage regulator reference (). Default: nullptr */
					CIMPP::PU vclmt; 	/* Maximum output of the pf controller ().  Typical Value = 0.1. Default: nullptr */
					CIMPP::PU kp; 	/* Proportional gain of the pf controller ().  Typical Value = 1. Default: nullptr */
					CIMPP::PU ki; 	/* Integral gain of the pf controller ().  Typical Value = 1. Default: nullptr */
					CIMPP::Simple_Float vs; 	/* Generator sensing voltage (). Default: nullptr */
					CIMPP::Boolean exlon; 	/* Overexcitation or under excitation flag () true = 1 (not in the overexcitation or underexcitation state, integral action is active) false = 0 (in the overexcitation or underexcitation state, so integral action is disabled to allow the limiter to play its role). Default: false */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		PFVArType2IEEEPFController();
		virtual ~PFVArType2IEEEPFController();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PFVArType2IEEEPFController_factory();
}
#endif
