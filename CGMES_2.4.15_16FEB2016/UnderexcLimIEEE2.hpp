#ifndef UnderexcLimIEEE2_H
#define UnderexcLimIEEE2_H

#include "UnderexcitationLimiterDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Simple_Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	The class represents the Type UEL2 which has either a straight-line or multi-segment characteristic when plotted in terms of machine reactive power output vs. real power output.  Reference: IEEE UEL2 421.5-2005 Section 10.2.  (Limit characteristic lookup table shown in Figure 10.4 (p 32) of the standard).
	*/
	class UnderexcLimIEEE2: public UnderexcitationLimiterDynamics
	{

	public:
					CIMPP::Simple_Float k1; 	/* UEL terminal voltage exponent applied to real power input to UEL limit look-up table (k1).  Typical Value = 2. Default: nullptr */
					CIMPP::Simple_Float k2; 	/* UEL terminal voltage exponent applied to reactive power output from UEL limit look-up table (k2).  Typical Value = 2. Default: nullptr */
					CIMPP::PU kfb; 	/* Gain associated with optional integrator feedback input signal to UEL (K).  Typical Value = 0. Default: nullptr */
					CIMPP::PU kuf; 	/* UEL excitation system stabilizer gain (K).  Typical Value = 0. Default: nullptr */
					CIMPP::PU kui; 	/* UEL integral gain (K).  Typical Value = 0.5. Default: nullptr */
					CIMPP::PU kul; 	/* UEL proportional gain (K).  Typical Value = 0.8. Default: nullptr */
					CIMPP::PU p0; 	/* Real power values for endpoints (P).  Typical Value = 0. Default: nullptr */
					CIMPP::PU p1; 	/* Real power values for endpoints (P).  Typical Value = 0.3. Default: nullptr */
					CIMPP::PU p10; 	/* Real power values for endpoints (P). Default: nullptr */
					CIMPP::PU p2; 	/* Real power values for endpoints (P).  Typical Value = 0.6. Default: nullptr */
					CIMPP::PU p3; 	/* Real power values for endpoints (P).  Typical Value = 0.9. Default: nullptr */
					CIMPP::PU p4; 	/* Real power values for endpoints (P).  Typical Value = 1.02. Default: nullptr */
					CIMPP::PU p5; 	/* Real power values for endpoints (P). Default: nullptr */
					CIMPP::PU p6; 	/* Real power values for endpoints (P). Default: nullptr */
					CIMPP::PU p7; 	/* Real power values for endpoints (P). Default: nullptr */
					CIMPP::PU p8; 	/* Real power values for endpoints (P). Default: nullptr */
					CIMPP::PU p9; 	/* Real power values for endpoints (P). Default: nullptr */
					CIMPP::PU q0; 	/* Reactive power values for endpoints (Q).  Typical Value = -0.31. Default: nullptr */
					CIMPP::PU q1; 	/* Reactive power values for endpoints (Q).  Typical Value = -0.31. Default: nullptr */
					CIMPP::PU q10; 	/* Reactive power values for endpoints (Q). Default: nullptr */
					CIMPP::PU q2; 	/* Reactive power values for endpoints (Q).  Typical Value = -0.28. Default: nullptr */
					CIMPP::PU q3; 	/* Reactive power values for endpoints (Q).  Typical Value = -0.21. Default: nullptr */
					CIMPP::PU q4; 	/* Reactive power values for endpoints (Q).  Typical Value = 0. Default: nullptr */
					CIMPP::PU q5; 	/* Reactive power values for endpoints (Q). Default: nullptr */
					CIMPP::PU q6; 	/* Reactive power values for endpoints (Q). Default: nullptr */
					CIMPP::PU q7; 	/* Reactive power values for endpoints (Q). Default: nullptr */
					CIMPP::PU q8; 	/* Reactive power values for endpoints (Q). Default: nullptr */
					CIMPP::PU q9; 	/* Reactive power values for endpoints (Q). Default: nullptr */
					CIMPP::Seconds tu1; 	/* UEL lead time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tu2; 	/* UEL lag time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tu3; 	/* UEL lead time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tu4; 	/* UEL lag time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tul; 	/* Time constant associated with optional integrator feedback input signal to UEL (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tup; 	/* Real power filter time constant (T).  Typical Value = 5. Default: nullptr */
					CIMPP::Seconds tuq; 	/* Reactive power filter time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tuv; 	/* Voltage filter time constant (T).  Typical Value = 5. Default: nullptr */
					CIMPP::PU vuimax; 	/* UEL integrator output maximum limit (V).  Typical Value = 0.25. Default: nullptr */
					CIMPP::PU vuimin; 	/* UEL integrator output minimum limit (V).  Typical Value = 0. Default: nullptr */
					CIMPP::PU vulmax; 	/* UEL output maximum limit (V).  Typical Value = 0.25. Default: nullptr */
					CIMPP::PU vulmin; 	/* UEL output minimum limit (V).  Typical Value = 0. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		UnderexcLimIEEE2();
		virtual ~UnderexcLimIEEE2();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* UnderexcLimIEEE2_factory();
}
#endif
