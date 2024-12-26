#ifndef Pss1_H
#define Pss1_H

#include "PowerSystemStabilizerDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Simple_Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Boolean.hpp"

namespace CIMPP {


	/*
	Italian PSS - three input PSS (speed, frequency, power).
	*/
	class Pss1: public PowerSystemStabilizerDynamics
	{

	public:
					CIMPP::Simple_Float kf; 	/* Frequency power input gain (K).  Typical Value = 5. Default: nullptr */
					CIMPP::Simple_Float kpe; 	/* Electric power input gain (K).  Typical Value = 0.3. Default: nullptr */
					CIMPP::Simple_Float ks; 	/* PSS gain (K).  Typical Value = 1. Default: nullptr */
					CIMPP::Simple_Float kw; 	/* Shaft speed power input gain (K).  Typical Value = 0. Default: nullptr */
					CIMPP::PU pmin; 	/* Minimum power PSS enabling (P).  Typical Value = 0.25. Default: nullptr */
					CIMPP::Seconds t10; 	/* Lead/lag time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds t5; 	/* Washout (T).  Typical Value = 3.5. Default: nullptr */
					CIMPP::Seconds t6; 	/* Filter time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds t7; 	/* Lead/lag time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds t8; 	/* Lead/lag time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds t9; 	/* Lead/lag time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tpe; 	/* Electric power filter time constant (T).  Typical Value = 0.05. Default: nullptr */
					CIMPP::Boolean vadat; 	/*  Default: false */
					CIMPP::PU vsmn; 	/* Stabilizer output max limit (V).  Typical Value = -0.06. Default: nullptr */
					CIMPP::PU vsmx; 	/* Stabilizer output min limit (V).  Typical Value = 0.06. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		Pss1();
		virtual ~Pss1();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* Pss1_factory();
}
#endif
