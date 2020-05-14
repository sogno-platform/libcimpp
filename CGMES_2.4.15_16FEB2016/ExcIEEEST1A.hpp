#ifndef ExcIEEEST1A_H
#define ExcIEEEST1A_H

#include "ExcitationSystemDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Boolean.hpp"
#include "Seconds.hpp"
#include "ExcIEEEST1AUELselectorKind.hpp"

namespace CIMPP {


	/*
	The class represents IEEE Std 421.5-2005 type ST1A model. This model represents systems in which excitation power is supplied through a transformer from the generator terminals (or the unit's auxiliary bus) and is regulated by a controlled rectifier.  The maximum exciter voltage available from such systems is directly related to the generator terminal voltage.  Reference: IEEE Standard 421.5-2005 Section 7.1.
	*/
	class ExcIEEEST1A: public ExcitationSystemDynamics
	{

	public:
					CIMPP::PU ilr; 	/* Exciter output current limit reference (I).  Typical Value = 0. Default: nullptr */
					CIMPP::PU ka; 	/* Voltage regulator gain (K).  Typical Value = 190. Default: nullptr */
					CIMPP::PU kc; 	/* Rectifier loading factor proportional to commutating reactance (K). Typical Value = 0.08. Default: nullptr */
					CIMPP::PU kf; 	/* Excitation control system stabilizer gains (K).  Typical Value = 0. Default: nullptr */
					CIMPP::PU klr; 	/* Exciter output current limiter gain (K).  Typical Value = 0. Default: nullptr */
					CIMPP::Boolean pssin; 	/* Selector of the Power System Stabilizer (PSS) input (PSSin). true = PSS input (Vs) added to error signal false = PSS input (Vs) added to voltage regulator output. Typical Value = true. Default: false */
					CIMPP::Seconds ta; 	/* Voltage regulator time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tb; 	/* Voltage regulator time constant (T).  Typical Value = 10. Default: nullptr */
					CIMPP::Seconds tb1; 	/* Voltage regulator time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tc; 	/* Voltage regulator time constant (T).  Typical Value = 1. Default: nullptr */
					CIMPP::Seconds tc1; 	/* Voltage regulator time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tf; 	/* Excitation control system stabilizer time constant (T).  Typical Value = 1. Default: nullptr */
					CIMPP::ExcIEEEST1AUELselectorKind uelin; 	/* Selector of the connection of the UEL input (UELin). Typical Value = ignoreUELsignal. Default: 0 */
					CIMPP::PU vamax; 	/* Maximum voltage regulator output (V).  Typical Value = 14.5. Default: nullptr */
					CIMPP::PU vamin; 	/* Minimum voltage regulator output (V).  Typical Value = -14.5. Default: nullptr */
					CIMPP::PU vimax; 	/* Maximum voltage regulator input limit (V).  Typical Value = 999. Default: nullptr */
					CIMPP::PU vimin; 	/* Minimum voltage regulator input limit (V).  Typical Value = -999. Default: nullptr */
					CIMPP::PU vrmax; 	/* Maximum voltage regulator outputs (V).  Typical Value = 7.8. Default: nullptr */
					CIMPP::PU vrmin; 	/* Minimum voltage regulator outputs (V).  Typical Value = -6.7. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		ExcIEEEST1A();
		virtual ~ExcIEEEST1A();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ExcIEEEST1A_factory();
}
#endif
