#ifndef ExcST1A_H
#define ExcST1A_H

#include "ExcitationSystemDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Modification of an old IEEE ST1A static excitation system without overexcitation limiter (OEL) and underexcitation limiter (UEL).
	*/
	class ExcST1A: public ExcitationSystemDynamics
	{

	public:
					CIMPP::PU ilr; 	/* Exciter output current limit reference (Ilr).  Typical Value = 0. Default: nullptr */
					CIMPP::PU ka; 	/* Voltage regulator gain (Ka).  Typical Value = 190. Default: nullptr */
					CIMPP::PU kc; 	/* Rectifier loading factor proportional to commutating reactance (Kc). Typical Value = 0.05. Default: nullptr */
					CIMPP::PU kf; 	/* Excitation control system stabilizer gains (Kf).  Typical Value = 0. Default: nullptr */
					CIMPP::PU klr; 	/* Exciter output current limiter gain (Klr).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds ta; 	/* Voltage regulator time constant (Ta).  Typical Value = 0.02. Default: nullptr */
					CIMPP::Seconds tb; 	/* Voltage regulator time constant (Tb).  Typical Value = 10. Default: nullptr */
					CIMPP::Seconds tb1; 	/* Voltage regulator time constant (Tb).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tc; 	/* Voltage regulator time constant (Tc).  Typical Value = 1. Default: nullptr */
					CIMPP::Seconds tc1; 	/* Voltage regulator time constant (Tc).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tf; 	/* Excitation control system stabilizer time constant (Tf).  Typical Value = 1. Default: nullptr */
					CIMPP::PU vamax; 	/* Maximum voltage regulator output (Vamax).  Typical Value = 999. Default: nullptr */
					CIMPP::PU vamin; 	/* Minimum voltage regulator output (Vamin).  Typical Value = -999. Default: nullptr */
					CIMPP::PU vimax; 	/* Maximum voltage regulator input limit (Vimax).  Typical Value = 999. Default: nullptr */
					CIMPP::PU vimin; 	/* Minimum voltage regulator input limit (Vimin).  Typical Value = -999. Default: nullptr */
					CIMPP::PU vrmax; 	/* Maximum voltage regulator outputs (Vrmax).  Typical Value = 7.8. Default: nullptr */
					CIMPP::PU vrmin; 	/* Minimum voltage regulator outputs (Vrmin).  Typical Value = -6.7. Default: nullptr */
					CIMPP::PU xe; 	/* Excitation xfmr effective reactance (Xe).  Typical Value = 0.04. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		ExcST1A();
		virtual ~ExcST1A();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ExcST1A_factory();
}
#endif
