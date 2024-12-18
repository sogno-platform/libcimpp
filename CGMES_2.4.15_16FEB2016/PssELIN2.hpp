#ifndef PssELIN2_H
#define PssELIN2_H

#include "PowerSystemStabilizerDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Power system stabilizer typically associated with ExcELIN2 (though PssIEEE2B or Pss2B can also be used).
	*/
	class PssELIN2: public PowerSystemStabilizerDynamics
	{

	public:
					CIMPP::PU apss; 	/* Coefficient (a_PSS).  Typical Value = 0.1. Default: nullptr */
					CIMPP::PU ks1; 	/* Gain (Ks1).  Typical Value = 1. Default: nullptr */
					CIMPP::PU ks2; 	/* Gain (Ks2).  Typical Value = 0.1. Default: nullptr */
					CIMPP::PU ppss; 	/* Coefficient (p_PSS) (&gt;=0 and &lt;=4).  Typical Value = 0.1. Default: nullptr */
					CIMPP::PU psslim; 	/* PSS limiter (psslim).  Typical Value = 0.1. Default: nullptr */
					CIMPP::Seconds ts1; 	/* Time constant (Ts1).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds ts2; 	/* Time constant (Ts2).  Typical Value = 1. Default: nullptr */
					CIMPP::Seconds ts3; 	/* Time constant (Ts3).  Typical Value = 1. Default: nullptr */
					CIMPP::Seconds ts4; 	/* Time constant (Ts4).  Typical Value = 0.1. Default: nullptr */
					CIMPP::Seconds ts5; 	/* Time constant (Ts5).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds ts6; 	/* Time constant (Ts6).  Typical Value = 1. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		PssELIN2();
		virtual ~PssELIN2();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PssELIN2_factory();
}
#endif
