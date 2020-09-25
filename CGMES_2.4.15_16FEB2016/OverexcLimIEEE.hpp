#ifndef OverexcLimIEEE_H
#define OverexcLimIEEE_H

#include "OverexcitationLimiterDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Simple_Float.hpp"

namespace CIMPP {


	/*
	The over excitation limiter model is intended to represent the significant features of OELs necessary for some large-scale system studies. It is the result of a pragmatic approach to obtain a model that can be widely applied with attainable data from generator owners. An attempt to include all variations in the functionality of OELs and duplicate how they interact with the rest of the excitation systems would likely result in a level of application insufficient for the studies for which they are intended.  Reference: IEEE OEL 421.5-2005 Section 9.
	*/
	class OverexcLimIEEE: public OverexcitationLimiterDynamics
	{

	public:
					CIMPP::PU itfpu; 	/* OEL timed field current limiter pickup level (I).  Typical Value = 1.05. Default: nullptr */
					CIMPP::PU ifdmax; 	/* OEL instantaneous field current limit (I).  Typical Value = 1.5. Default: nullptr */
					CIMPP::PU ifdlim; 	/* OEL timed field current limit (I).  Typical Value = 1.05. Default: nullptr */
					CIMPP::PU hyst; 	/* OEL pickup/drop-out hysteresis (HYST).  Typical Value = 0.03. Default: nullptr */
					CIMPP::PU kcd; 	/* OEL cooldown gain (K).  Typical Value = 1. Default: nullptr */
					CIMPP::Simple_Float kramp; 	/* OEL ramped limit rate (K).  Unit = PU/sec.  Typical Value = 10. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		OverexcLimIEEE();
		virtual ~OverexcLimIEEE();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* OverexcLimIEEE_factory();
}
#endif
