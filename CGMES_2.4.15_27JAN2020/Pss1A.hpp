#ifndef Pss1A_H
#define Pss1A_H

#include "PowerSystemStabilizerDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "InputSignalKind.hpp"
#include "Boolean.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Single input power system stabilizer. It is a modified version in order to allow representation of various vendors' implementations on PSS type 1A.
	*/
	class Pss1A: public PowerSystemStabilizerDynamics
	{

	public:
					CIMPP::PU a1; 	/* Notch filter parameter (A1). Default: nullptr */
					CIMPP::PU a2; 	/* Notch filter parameter (A2). Default: nullptr */
					CIMPP::PU a3; 	/* Notch filter parameter (A3). Default: nullptr */
					CIMPP::PU a4; 	/* Notch filter parameter (A4). Default: nullptr */
					CIMPP::PU a5; 	/* Notch filter parameter (A5). Default: nullptr */
					CIMPP::PU a6; 	/* Notch filter parameter (A6). Default: nullptr */
					CIMPP::PU a7; 	/* Notch filter parameter (A7). Default: nullptr */
					CIMPP::PU a8; 	/* Notch filter parameter (A8). Default: nullptr */
					CIMPP::InputSignalKind inputSignalType; 	/* Type of input signal. Default: 0 */
					CIMPP::Boolean kd; 	/* Selector (Kd).  true = e used false = e not used. Default: false */
					CIMPP::PU ks; 	/* Stabilizer gain (Ks). Default: nullptr */
					CIMPP::Seconds t1; 	/* Lead/lag time constant (T1). Default: nullptr */
					CIMPP::Seconds t2; 	/* Lead/lag time constant (T2). Default: nullptr */
					CIMPP::Seconds t3; 	/* Lead/lag time constant (T3). Default: nullptr */
					CIMPP::Seconds t4; 	/* Lead/lag time constant (T4). Default: nullptr */
					CIMPP::Seconds t5; 	/* Washout time constant (T5). Default: nullptr */
					CIMPP::Seconds t6; 	/* Transducer time constant (T6). Default: nullptr */
					CIMPP::Seconds tdelay; 	/* Time constant (Tdelay). Default: nullptr */
					CIMPP::PU vcl; 	/* Stabilizer input cutoff threshold (Vcl). Default: nullptr */
					CIMPP::PU vcu; 	/* Stabilizer input cutoff threshold (Vcu). Default: nullptr */
					CIMPP::PU vrmax; 	/* Maximum stabilizer output (Vrmax). Default: nullptr */
					CIMPP::PU vrmin; 	/* Minimum stabilizer output (Vrmin). Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		Pss1A();
		virtual ~Pss1A();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* Pss1A_factory();
}
#endif
