#ifndef PssSH_H
#define PssSH_H

#include "PowerSystemStabilizerDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Model for Siemens "H infinity" power system stabilizer with generator electrical power input.
	*/
	class PssSH: public PowerSystemStabilizerDynamics
	{

	public:
					CIMPP::PU k; 	/* Main gain (K).  Typical Value = 1. Default: nullptr */
					CIMPP::PU k0; 	/* Gain 0 (K0).  Typical Value = 0.012. Default: nullptr */
					CIMPP::PU k1; 	/* Gain 1 (K1).  Typical Value = 0.488. Default: nullptr */
					CIMPP::PU k2; 	/* Gain 2 (K2).  Typical Value = 0.064. Default: nullptr */
					CIMPP::PU k3; 	/* Gain 3 (K3).  Typical Value = 0.224. Default: nullptr */
					CIMPP::PU k4; 	/* Gain 4 (K4).  Typical Value = 0.1. Default: nullptr */
					CIMPP::Seconds t1; 	/* Time constant 1 (T1).  Typical Value = 0.076. Default: nullptr */
					CIMPP::Seconds t2; 	/* Time constant 2 (T2).  Typical Value = 0.086. Default: nullptr */
					CIMPP::Seconds t3; 	/* Time constant 3 (T3).   Typical Value = 1.068. Default: nullptr */
					CIMPP::Seconds t4; 	/* Time constant 4 (T4).  Typical Value = 1.913. Default: nullptr */
					CIMPP::Seconds td; 	/* Input time constant (Td).  Typical Value = 10. Default: nullptr */
					CIMPP::PU vsmax; 	/* Output maximum limit (Vsmax).  Typical Value = 0.1. Default: nullptr */
					CIMPP::PU vsmin; 	/* Output minimum limit (Vsmin).  Typical Value = -0.1. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		PssSH();
		virtual ~PssSH();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PssSH_factory();
}
#endif
