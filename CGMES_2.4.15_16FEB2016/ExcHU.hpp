#ifndef ExcHU_H
#define ExcHU_H

#include "ExcitationSystemDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Hungarian Excitation System Model, with built-in voltage transducer.
	*/
	class ExcHU: public ExcitationSystemDynamics
	{

	public:
					CIMPP::PU ae; 	/* Major loop PI tag gain factor (Ae).  Typical Value = 3. Default: nullptr */
					CIMPP::PU ai; 	/* Minor loop PI tag gain factor (Ai).  Typical Value = 22. Default: nullptr */
					CIMPP::PU atr; 	/* AVR constant (Atr).  Typical Value = 2.19. Default: nullptr */
					CIMPP::PU emax; 	/* Field voltage control signal upper limit on AVR base (Emax).  Typical Value = 0.996. Default: nullptr */
					CIMPP::PU emin; 	/* Field voltage control signal lower limit on AVR base (Emin).  Typical Value = -0.866. Default: nullptr */
					CIMPP::PU imax; 	/* Major loop PI tag output signal upper limit (Imax).  Typical Value = 2.19. Default: nullptr */
					CIMPP::PU imin; 	/* Major loop PI tag output signal lower limit (Imin).  Typical Value = 0.1. Default: nullptr */
					CIMPP::Simple_Float ke; 	/* Voltage base conversion constant (Ke).  Typical Value = 4.666. Default: nullptr */
					CIMPP::Simple_Float ki; 	/* Current base conversion constant (Ki).  Typical Value = 0.21428. Default: nullptr */
					CIMPP::Seconds te; 	/* Major loop PI tag integration time constant (Te).  Typical Value = 0.154. Default: nullptr */
					CIMPP::Seconds ti; 	/* Minor loop PI control tag integration time constant (Ti).  Typical Value = 0.01333. Default: nullptr */
					CIMPP::Seconds tr; 	/* Filter time constant (Tr). If a voltage compensator is used in conjunction with this excitation system model, Tr should be set to 0.  Typical Value = 0.01. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		ExcHU();
		virtual ~ExcHU();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ExcHU_factory();
}
#endif
