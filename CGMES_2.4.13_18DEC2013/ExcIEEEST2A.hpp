#ifndef ExcIEEEST2A_H
#define ExcIEEEST2A_H

#include "ExcitationSystemDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Seconds.hpp"
#include "Boolean.hpp"

namespace CIMPP {


	/*
	The class represents IEEE Std 421.5-2005 type ST2A model. Some static systems utilize both current and voltage sources (generator terminal quantities) to comprise the power source.  The regulator controls the exciter output through controlled saturation of the power transformer components.  These compound-source rectifier excitation systems are designated Type ST2A and are represented by ExcIEEEST2A.  Reference: IEEE Standard 421.5-2005 Section 7.2.
	*/
	class ExcIEEEST2A: public ExcitationSystemDynamics
	{

	public:
					CIMPP::PU ka; 	/* Voltage regulator gain (K).  Typical Value = 120. Default: nullptr */
					CIMPP::Seconds ta; 	/* Voltage regulator time constant (T).  Typical Value = 0.15. Default: nullptr */
					CIMPP::PU vrmax; 	/* Maximum voltage regulator outputs (V).  Typical Value = 1. Default: nullptr */
					CIMPP::PU vrmin; 	/* Minimum voltage regulator outputs (V).  Typical Value = 0. Default: nullptr */
					CIMPP::PU ke; 	/* Exciter constant related to self-excited field (K).  Typical Value = 1. Default: nullptr */
					CIMPP::Seconds te; 	/* Exciter time constant, integration rate associated with exciter control (T).  Typical Value = 0.5. Default: nullptr */
					CIMPP::PU kf; 	/* Excitation control system stabilizer gains (K).  Typical Value = 0.05. Default: nullptr */
					CIMPP::Seconds tf; 	/* Excitation control system stabilizer time constant (T).  Typical Value = 1. Default: nullptr */
					CIMPP::PU kp; 	/* Potential circuit gain coefficient (K).  Typical Value = 4.88. Default: nullptr */
					CIMPP::PU ki; 	/* Potential circuit gain coefficient (K).  Typical Value = 8. Default: nullptr */
					CIMPP::PU kc; 	/* Rectifier loading factor proportional to commutating reactance (K). Typical Value = 1.82. Default: nullptr */
					CIMPP::PU efdmax; 	/* Maximum field voltage (E).  Typical Value = 99. Default: nullptr */
					CIMPP::Boolean uelin; 	/* UEL input (UELin). true = HV gate false = add to error signal. Typical Value = true. Default: false */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		ExcIEEEST2A();
		virtual ~ExcIEEEST2A();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ExcIEEEST2A_factory();
}
#endif
