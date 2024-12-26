#ifndef OverexcLimX2_H
#define OverexcLimX2_H

#include "OverexcitationLimiterDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Boolean.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Field Voltage or Current overexcitation limiter designed to protect the generator field of an AC machine with automatic excitation control from overheating due to prolonged overexcitation.
	*/
	class OverexcLimX2: public OverexcitationLimiterDynamics
	{

	public:
					CIMPP::PU efd1; 	/* Low voltage or current point on the inverse time characteristic (EFD).  Typical Value = 1.1. Default: nullptr */
					CIMPP::PU efd2; 	/* Mid voltage or current point on the inverse time characteristic (EFD).  Typical Value = 1.2. Default: nullptr */
					CIMPP::PU efd3; 	/* High voltage or current point on the inverse time characteristic (EFD).  Typical Value = 1.5. Default: nullptr */
					CIMPP::PU efddes; 	/* Desired field voltage if m=F or field current if m=T (EFD).  Typical Value = 1. Default: nullptr */
					CIMPP::PU efdrated; 	/* Rated field voltage if m=F or field current if m=T (EFD).  Typical Value = 1.05. Default: nullptr */
					CIMPP::PU kmx; 	/* Gain (K).  Typical Value = 0.002. Default: nullptr */
					CIMPP::Boolean m; 	/* (m). true = IFD limiting false = EFD limiting. Default: false */
					CIMPP::Seconds t1; 	/* Time to trip the exciter at the low voltage or current point on the inverse time characteristic (TIME).  Typical Value = 120. Default: nullptr */
					CIMPP::Seconds t2; 	/* Time to trip the exciter at the mid voltage or current point on the inverse time characteristic (TIME).  Typical Value = 40. Default: nullptr */
					CIMPP::Seconds t3; 	/* Time to trip the exciter at the high voltage or current point on the inverse time characteristic (TIME).  Typical Value = 15. Default: nullptr */
					CIMPP::PU vlow; 	/* Low voltage limit (V) (&gt;0). Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		OverexcLimX2();
		virtual ~OverexcLimX2();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* OverexcLimX2_factory();
}
#endif
