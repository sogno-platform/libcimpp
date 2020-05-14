#ifndef DiscExcContIEEEDEC1A_H
#define DiscExcContIEEEDEC1A_H

#include "DiscontinuousExcitationControlDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	The class represents IEEE Type DEC1A discontinuous excitation control model that boosts generator excitation to a level higher than that demanded by the voltage regulator and stabilizer immediately following a system fault.  Reference: IEEE Standard 421.5-2005 Section 12.2.
	*/
	class DiscExcContIEEEDEC1A: public DiscontinuousExcitationControlDynamics
	{

	public:
					CIMPP::PU vtlmt; 	/* Voltage reference ().  Typical Value = 1.1. Default: nullptr */
					CIMPP::PU vomax; 	/* Limiter ().  Typical Value = 0.3. Default: nullptr */
					CIMPP::PU vomin; 	/* Limiter ().  Typical Value = 0.1. Default: nullptr */
					CIMPP::PU ketl; 	/* Terminal voltage limiter gain ().  Typical Value = 47. Default: nullptr */
					CIMPP::PU vtc; 	/* Terminal voltage level reference ().  Typical Value = 0.95. Default: nullptr */
					CIMPP::PU val; 	/* Regulator voltage reference ().  Typical Value = 5.5. Default: nullptr */
					CIMPP::PU esc; 	/* Speed change reference ().  Typical Value = 0.0015. Default: nullptr */
					CIMPP::PU kan; 	/* Discontinuous controller gain ().  Typical Value = 400. Default: nullptr */
					CIMPP::Seconds tan; 	/* Discontinuous controller time constant ().  Typical Value = 0.08. Default: nullptr */
					CIMPP::Seconds tw5; 	/* DEC washout time constant ().  Typical Value = 5. Default: nullptr */
					CIMPP::PU vsmax; 	/* Limiter ().  Typical Value = 0.2. Default: nullptr */
					CIMPP::PU vsmin; 	/* Limiter ().  Typical Value = -0.066. Default: nullptr */
					CIMPP::Seconds td; 	/* Time constant ().  Typical Value = 0.03. Default: nullptr */
					CIMPP::Seconds tl1; 	/* Time constant ().  Typical Value = 0.025. Default: nullptr */
					CIMPP::Seconds tl2; 	/* Time constant ().  Typical Value = 1.25. Default: nullptr */
					CIMPP::PU vtm; 	/* Voltage limits ().  Typical Value = 1.13. Default: nullptr */
					CIMPP::PU vtn; 	/* Voltage limits ().  Typical Value = 1.12. Default: nullptr */
					CIMPP::PU vanmax; 	/* Limiter for Van (). Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		DiscExcContIEEEDEC1A();
		virtual ~DiscExcContIEEEDEC1A();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DiscExcContIEEEDEC1A_factory();
}
#endif
