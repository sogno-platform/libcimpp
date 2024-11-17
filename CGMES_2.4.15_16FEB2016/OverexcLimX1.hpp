#ifndef OverexcLimX1_H
#define OverexcLimX1_H

#include "OverexcitationLimiterDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Field voltage over excitation limiter.
	*/
	class OverexcLimX1: public OverexcitationLimiterDynamics
	{

	public:
					CIMPP::PU efd1; 	/* Low voltage point on the inverse time characteristic (EFD).  Typical Value = 1.1. Default: nullptr */
					CIMPP::PU efd2; 	/* Mid voltage point on the inverse time characteristic (EFD).  Typical Value = 1.2. Default: nullptr */
					CIMPP::PU efd3; 	/* High voltage point on the inverse time characteristic (EFD).  Typical Value = 1.5. Default: nullptr */
					CIMPP::PU efddes; 	/* Desired field voltage (EFD).  Typical Value = 0.9. Default: nullptr */
					CIMPP::PU efdrated; 	/* Rated field voltage (EFD).  Typical Value = 1.05. Default: nullptr */
					CIMPP::PU kmx; 	/* Gain (K).  Typical Value = 0.01. Default: nullptr */
					CIMPP::Seconds t1; 	/* Time to trip the exciter at the low voltage point on the inverse time characteristic (TIME).  Typical Value = 120. Default: nullptr */
					CIMPP::Seconds t2; 	/* Time to trip the exciter at the mid voltage point on the inverse time characteristic (TIME).  Typical Value = 40. Default: nullptr */
					CIMPP::Seconds t3; 	/* Time to trip the exciter at the high voltage point on the inverse time characteristic (TIME).  Typical Value = 15. Default: nullptr */
					CIMPP::PU vlow; 	/* Low voltage limit (V) (&gt;0). Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		OverexcLimX1();
		virtual ~OverexcLimX1();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* OverexcLimX1_factory();
}
#endif
