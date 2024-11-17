#ifndef ExcOEX3T_H
#define ExcOEX3T_H

#include "ExcitationSystemDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Modified IEEE Type ST1 Excitation System with semi-continuous and acting terminal voltage limiter.
	*/
	class ExcOEX3T: public ExcitationSystemDynamics
	{

	public:
					CIMPP::PU e1; 	/* Saturation parameter (E). Default: nullptr */
					CIMPP::PU e2; 	/* Saturation parameter (E). Default: nullptr */
					CIMPP::PU ka; 	/* Gain (K). Default: nullptr */
					CIMPP::PU kc; 	/* Gain (K). Default: nullptr */
					CIMPP::PU kd; 	/* Gain (K). Default: nullptr */
					CIMPP::PU ke; 	/* Gain (K). Default: nullptr */
					CIMPP::PU kf; 	/* Gain (K). Default: nullptr */
					CIMPP::PU see1; 	/* Saturation parameter (S(E)). Default: nullptr */
					CIMPP::PU see2; 	/* Saturation parameter (S(E)). Default: nullptr */
					CIMPP::Seconds t1; 	/* Time constant (T). Default: nullptr */
					CIMPP::Seconds t2; 	/* Time constant (T). Default: nullptr */
					CIMPP::Seconds t3; 	/* Time constant (T). Default: nullptr */
					CIMPP::Seconds t4; 	/* Time constant (T). Default: nullptr */
					CIMPP::Seconds t5; 	/* Time constant (T). Default: nullptr */
					CIMPP::Seconds t6; 	/* Time constant (T). Default: nullptr */
					CIMPP::Seconds te; 	/* Time constant (T). Default: nullptr */
					CIMPP::Seconds tf; 	/* Time constant (T). Default: nullptr */
					CIMPP::PU vrmax; 	/* Limiter (V). Default: nullptr */
					CIMPP::PU vrmin; 	/* Limiter (V). Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		ExcOEX3T();
		virtual ~ExcOEX3T();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ExcOEX3T_factory();
}
#endif
