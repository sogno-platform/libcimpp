#ifndef UnderexcLimIEEE1_H
#define UnderexcLimIEEE1_H

#include "UnderexcitationLimiterDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	The class represents the Type UEL1 model which has a circular limit boundary when plotted in terms of machine reactive power vs. real power output.  Reference: IEEE UEL1 421.5-2005 Section 10.1.
	*/
	class UnderexcLimIEEE1: public UnderexcitationLimiterDynamics
	{

	public:
					CIMPP::PU kur; 	/* UEL radius setting (K).  Typical Value = 1.95. Default: nullptr */
					CIMPP::PU kuc; 	/* UEL center setting (K).  Typical Value = 1.38. Default: nullptr */
					CIMPP::PU kuf; 	/* UEL excitation system stabilizer gain (K).  Typical Value = 3.3. Default: nullptr */
					CIMPP::PU vurmax; 	/* UEL maximum limit for radius phasor magnitude (V).  Typical Value = 5.8. Default: nullptr */
					CIMPP::PU vucmax; 	/* UEL maximum limit for operating point phasor magnitude (V).  Typical Value = 5.8. Default: nullptr */
					CIMPP::PU kui; 	/* UEL integral gain (K).  Typical Value = 0. Default: nullptr */
					CIMPP::PU kul; 	/* UEL proportional gain (K).  Typical Value = 100. Default: nullptr */
					CIMPP::PU vuimax; 	/* UEL integrator output maximum limit (V). Default: nullptr */
					CIMPP::PU vuimin; 	/* UEL integrator output minimum limit (V). Default: nullptr */
					CIMPP::Seconds tu1; 	/* UEL lead time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tu2; 	/* UEL lag time constant (T).  Typical Value = 0.05. Default: nullptr */
					CIMPP::Seconds tu3; 	/* UEL lead time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tu4; 	/* UEL lag time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::PU vulmax; 	/* UEL output maximum limit (V).  Typical Value = 18. Default: nullptr */
					CIMPP::PU vulmin; 	/* UEL output minimum limit (V).  Typical Value = -18. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		UnderexcLimIEEE1();
		virtual ~UnderexcLimIEEE1();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* UnderexcLimIEEE1_factory();
}
#endif
