#ifndef PssIEEE3B_H
#define PssIEEE3B_H

#include "PowerSystemStabilizerDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "InputSignalKind.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	The class represents IEEE Std 421.5-2005 type PSS3B power system stabilizer model. The PSS model PSS3B has dual inputs of electrical power and rotor angular frequency deviation. The signals are used to derive an equivalent mechanical power signal.  Reference: IEEE 3B 421.5-2005 Section 8.3.
	*/
	class PssIEEE3B: public PowerSystemStabilizerDynamics
	{

	public:
					CIMPP::PU a1; 	/* Notch filter parameter (A1).  Typical Value = 0.359. Default: nullptr */
					CIMPP::PU a2; 	/* Notch filter parameter (A2).  Typical Value = 0.586. Default: nullptr */
					CIMPP::PU a3; 	/* Notch filter parameter (A3).  Typical Value = 0.429. Default: nullptr */
					CIMPP::PU a4; 	/* Notch filter parameter (A4).  Typical Value = 0.564. Default: nullptr */
					CIMPP::PU a5; 	/* Notch filter parameter (A5).  Typical Value = 0.001. Default: nullptr */
					CIMPP::PU a6; 	/* Notch filter parameter (A6).  Typical Value = 0. Default: nullptr */
					CIMPP::PU a7; 	/* Notch filter parameter (A7).  Typical Value = 0.031. Default: nullptr */
					CIMPP::PU a8; 	/* Notch filter parameter (A8).  Typical Value = 0. Default: nullptr */
					CIMPP::InputSignalKind inputSignal1Type; 	/* Type of input signal #1.  Typical Value = generatorElectricalPower. Default: 0 */
					CIMPP::InputSignalKind inputSignal2Type; 	/* Type of input signal #2.  Typical Value = rotorSpeed. Default: 0 */
					CIMPP::PU ks1; 	/* Gain on signal # 1 (Ks1).  Typical Value = -0.602. Default: nullptr */
					CIMPP::PU ks2; 	/* Gain on signal # 2 (Ks2).  Typical Value = 30.12. Default: nullptr */
					CIMPP::Seconds t1; 	/* Transducer time constant (T1).  Typical Value = 0.012. Default: nullptr */
					CIMPP::Seconds t2; 	/* Transducer time constant (T2).  Typical Value = 0.012. Default: nullptr */
					CIMPP::Seconds tw1; 	/* Washout time constant (Tw1).  Typical Value = 0.3. Default: nullptr */
					CIMPP::Seconds tw2; 	/* Washout time constant (Tw2).  Typical Value = 0.3. Default: nullptr */
					CIMPP::Seconds tw3; 	/* Washout time constant (Tw3).  Typical Value = 0.6. Default: nullptr */
					CIMPP::PU vstmax; 	/* Stabilizer output max limit (Vstmax).  Typical Value = 0.1. Default: nullptr */
					CIMPP::PU vstmin; 	/* Stabilizer output min limit (Vstmin).  Typical Value = -0.1. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		PssIEEE3B();
		virtual ~PssIEEE3B();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PssIEEE3B_factory();
}
#endif
