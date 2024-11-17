#ifndef ExcELIN1_H
#define ExcELIN1_H

#include "ExcitationSystemDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Static PI transformer fed excitation system: ELIN (VATECH) - simplified model.  This model represents an all-static excitation system. A PI voltage controller establishes a desired field current set point for a proportional current controller. The integrator of the PI controller has a follow-up input to match its signal to the present field current.  A power system stabilizer with power input is included in the model.
	*/
	class ExcELIN1: public ExcitationSystemDynamics
	{

	public:
					CIMPP::PU dpnf; 	/* Controller follow up dead band (Dpnf).  Typical Value = 0. Default: nullptr */
					CIMPP::PU efmax; 	/* Maximum open circuit excitation voltage (Efmax).  Typical Value = 5. Default: nullptr */
					CIMPP::PU efmin; 	/* Minimum open circuit excitation voltage (Efmin).  Typical Value = -5. Default: nullptr */
					CIMPP::PU ks1; 	/* Stabilizer Gain 1 (Ks1).  Typical Value = 0. Default: nullptr */
					CIMPP::PU ks2; 	/* Stabilizer Gain 2 (Ks2).  Typical Value = 0. Default: nullptr */
					CIMPP::PU smax; 	/* Stabilizer Limit Output (smax).  Typical Value = 0.1. Default: nullptr */
					CIMPP::Seconds tfi; 	/* Current transducer time constant (Tfi).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tnu; 	/* Controller reset time constant (Tnu).  Typical Value = 2. Default: nullptr */
					CIMPP::Seconds ts1; 	/* Stabilizer Phase Lag Time Constant (Ts1).  Typical Value = 1. Default: nullptr */
					CIMPP::Seconds ts2; 	/* Stabilizer Filter Time Constant (Ts2).  Typical Value = 1. Default: nullptr */
					CIMPP::Seconds tsw; 	/* Stabilizer parameters (Tsw).  Typical Value = 3. Default: nullptr */
					CIMPP::PU vpi; 	/* Current controller gain (Vpi).  Typical Value = 12.45. Default: nullptr */
					CIMPP::PU vpnf; 	/* Controller follow up gain (Vpnf).  Typical Value = 2. Default: nullptr */
					CIMPP::PU vpu; 	/* Voltage controller proportional gain (Vpu).  Typical Value = 34.5. Default: nullptr */
					CIMPP::PU xe; 	/* Excitation transformer effective reactance (Xe) (&gt;=0).  Xe represents the regulation of the transformer/rectifier unit.  Typical Value = 0.06. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		ExcELIN1();
		virtual ~ExcELIN1();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ExcELIN1_factory();
}
#endif
