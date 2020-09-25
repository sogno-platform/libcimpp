#ifndef PssIEEE4B_H
#define PssIEEE4B_H

#include "PowerSystemStabilizerDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Simple_Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	The class represents IEEE Std 421.5-2005 type PSS2B power system stabilizer model. The PSS4B model represents a structure based on multiple working frequency bands. Three separate bands, respectively dedicated to the low-, intermediate- and high-frequency modes of oscillations, are used in this delta-omega (speed input) PSS.  Reference: IEEE 4B 421.5-2005 Section 8.4.
	*/
	class PssIEEE4B: public PowerSystemStabilizerDynamics
	{

	public:
					CIMPP::Simple_Float bwh1; 	/* Notch filter 1 (high-frequency band): Three dB bandwidth (B). Default: nullptr */
					CIMPP::Simple_Float bwh2; 	/* Notch filter 2 (high-frequency band): Three dB bandwidth (B). Default: nullptr */
					CIMPP::Simple_Float bwl1; 	/* Notch filter 1 (low-frequency band): Three dB bandwidth (B). Default: nullptr */
					CIMPP::Simple_Float bwl2; 	/* Notch filter 2 (low-frequency band): Three dB bandwidth (B). Default: nullptr */
					CIMPP::PU kh; 	/* High band gain (K).  Typical Value = 120. Default: nullptr */
					CIMPP::PU kh1; 	/* High band differential filter gain (K).  Typical Value = 66. Default: nullptr */
					CIMPP::PU kh11; 	/* High band first lead-lag blocks coefficient (K).  Typical Value = 1. Default: nullptr */
					CIMPP::PU kh17; 	/* High band first lead-lag blocks coefficient (K).  Typical Value = 1. Default: nullptr */
					CIMPP::PU kh2; 	/* High band differential filter gain (K).  Typical Value = 66. Default: nullptr */
					CIMPP::PU ki; 	/* Intermediate band gain (K).  Typical Value = 30. Default: nullptr */
					CIMPP::PU ki1; 	/* Intermediate band differential filter gain (K).  Typical Value = 66. Default: nullptr */
					CIMPP::PU ki11; 	/* Intermediate band first lead-lag blocks coefficient (K).  Typical Value = 1. Default: nullptr */
					CIMPP::PU ki17; 	/* Intermediate band first lead-lag blocks coefficient (K).  Typical Value = 1. Default: nullptr */
					CIMPP::PU ki2; 	/* Intermediate band differential filter gain (K).  Typical Value = 66. Default: nullptr */
					CIMPP::PU kl; 	/* Low band gain (K).  Typical Value = 7.5. Default: nullptr */
					CIMPP::PU kl1; 	/* Low band differential filter gain (K).  Typical Value = 66. Default: nullptr */
					CIMPP::PU kl11; 	/* Low band first lead-lag blocks coefficient (K).  Typical Value = 1. Default: nullptr */
					CIMPP::PU kl17; 	/* Low band first lead-lag blocks coefficient (K).  Typical Value = 1. Default: nullptr */
					CIMPP::PU kl2; 	/* Low band differential filter gain (K).  Typical Value = 66. Default: nullptr */
					CIMPP::Simple_Float omeganh1; 	/* Notch filter 1 (high-frequency band): filter frequency (omega). Default: nullptr */
					CIMPP::Simple_Float omeganh2; 	/* Notch filter 2 (high-frequency band): filter frequency (omega). Default: nullptr */
					CIMPP::Simple_Float omeganl1; 	/* Notch filter 1 (low-frequency band): filter frequency (omega). Default: nullptr */
					CIMPP::Simple_Float omeganl2; 	/* Notch filter 2 (low-frequency band): filter frequency (omega). Default: nullptr */
					CIMPP::Seconds th1; 	/* High band time constant (T).  Typical Value = 0.01513. Default: nullptr */
					CIMPP::Seconds th10; 	/* High band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds th11; 	/* High band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds th12; 	/* High band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds th2; 	/* High band time constant (T).  Typical Value = 0.01816. Default: nullptr */
					CIMPP::Seconds th3; 	/* High band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds th4; 	/* High band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds th5; 	/* High band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds th6; 	/* High band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds th7; 	/* High band time constant (T).  Typical Value = 0.01816. Default: nullptr */
					CIMPP::Seconds th8; 	/* High band time constant (T).  Typical Value = 0.02179. Default: nullptr */
					CIMPP::Seconds th9; 	/* High band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds ti1; 	/* Intermediate band time constant (T).  Typical Value = 0.173. Default: nullptr */
					CIMPP::Seconds ti10; 	/* Intermediate band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds ti11; 	/* Intermediate band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds ti12; 	/* Intermediate band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds ti2; 	/* Intermediate band time constant (T).  Typical Value = 0.2075. Default: nullptr */
					CIMPP::Seconds ti3; 	/* Intermediate band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds ti4; 	/* Intermediate band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds ti5; 	/* Intermediate band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds ti6; 	/* Intermediate band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds ti7; 	/* Intermediate band time constant (T).  Typical Value = 0.2075. Default: nullptr */
					CIMPP::Seconds ti8; 	/* Intermediate band time constant (T).  Typical Value = 0.2491. Default: nullptr */
					CIMPP::Seconds ti9; 	/* Intermediate band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tl1; 	/* Low band time constant (T).  Typical Value = 1.73. Default: nullptr */
					CIMPP::Seconds tl10; 	/* Low band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tl11; 	/* Low band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tl12; 	/* Low band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tl2; 	/* Low band time constant (T).  Typical Value = 2.075. Default: nullptr */
					CIMPP::Seconds tl3; 	/* Low band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tl4; 	/* Low band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tl5; 	/* Low band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tl6; 	/* Low band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tl7; 	/* Low band time constant (T).  Typical Value = 2.075. Default: nullptr */
					CIMPP::Seconds tl8; 	/* Low band time constant (T).  Typical Value = 2.491. Default: nullptr */
					CIMPP::Seconds tl9; 	/* Low band time constant (T).  Typical Value = 0. Default: nullptr */
					CIMPP::PU vhmax; 	/* High band output maximum limit (V).  Typical Value = 0.6. Default: nullptr */
					CIMPP::PU vhmin; 	/* High band output minimum limit (V).  Typical Value = -0.6. Default: nullptr */
					CIMPP::PU vimax; 	/* Intermediate band output maximum limit (V).  Typical Value = 0.6. Default: nullptr */
					CIMPP::PU vimin; 	/* Intermediate band output minimum limit (V).  Typical Value = -0.6. Default: nullptr */
					CIMPP::PU vlmax; 	/* Low band output maximum limit (V).  Typical Value = 0.075. Default: nullptr */
					CIMPP::PU vlmin; 	/* Low band output minimum limit (V).  Typical Value = -0.075. Default: nullptr */
					CIMPP::PU vstmax; 	/* PSS output maximum limit (V).  Typical Value = 0.15. Default: nullptr */
					CIMPP::PU vstmin; 	/* PSS output minimum limit (V).  Typical Value = -0.15. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		PssIEEE4B();
		virtual ~PssIEEE4B();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PssIEEE4B_factory();
}
#endif
