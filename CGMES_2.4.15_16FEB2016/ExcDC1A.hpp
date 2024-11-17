#ifndef ExcDC1A_H
#define ExcDC1A_H

#include "ExcitationSystemDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Boolean.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Modified IEEE DC1A direct current commutator exciter with speed input and without underexcitation limiters (UEL) inputs.
	*/
	class ExcDC1A: public ExcitationSystemDynamics
	{

	public:
					CIMPP::PU edfmax; 	/* Maximum voltage exciter output limiter (Efdmax).  Typical Value = 99. Default: nullptr */
					CIMPP::PU efd1; 	/* Exciter voltage at which exciter saturation is defined (Efd1).  Typical Value = 3.1. Default: nullptr */
					CIMPP::PU efd2; 	/* Exciter voltage at which exciter saturation is defined (Efd2).  Typical Value = 2.3. Default: nullptr */
					CIMPP::PU efdmin; 	/* Minimum voltage exciter output limiter (Efdmin).  Typical Value = -99. Default: nullptr */
					CIMPP::Boolean exclim; 	/* (exclim). IEEE standard is ambiguous about lower limit on exciter output.  true = a lower limit of zero is applied to integrator output false = a lower limit of zero is not applied to integrator output. Typical Value = true. Default: false */
					CIMPP::PU ka; 	/* Voltage regulator gain (Ka).  Typical Value = 46. Default: nullptr */
					CIMPP::PU ke; 	/* Exciter constant related to self-excited field (Ke).  Typical Value = 0. Default: nullptr */
					CIMPP::PU kf; 	/* Excitation control system stabilizer gain (Kf).  Typical Value = 0.1. Default: nullptr */
					CIMPP::PU ks; 	/* Coefficient to allow different usage of the model-speed coefficient (Ks).  Typical Value = 0. Default: nullptr */
					CIMPP::Simple_Float seefd1; 	/* Exciter saturation function value at the corresponding exciter voltage, Efd1 (Se[Eefd1]).  Typical Value = 0.33. Default: nullptr */
					CIMPP::Simple_Float seefd2; 	/* Exciter saturation function value at the corresponding exciter voltage, Efd1 (Se[Eefd1]).  Typical Value = 0.33. Default: nullptr */
					CIMPP::Seconds ta; 	/* Voltage regulator time constant (Ta).  Typical Value = 0.06. Default: nullptr */
					CIMPP::Seconds tb; 	/* Voltage regulator time constant (Tb).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tc; 	/* Voltage regulator time constant (Tc).  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds te; 	/* Exciter time constant, integration rate associated with exciter control (Te).  Typical Value = 0.46. Default: nullptr */
					CIMPP::Seconds tf; 	/* Excitation control system stabilizer time constant (Tf).  Typical Value = 1. Default: nullptr */
					CIMPP::PU vrmax; 	/* Maximum voltage regulator output (Vrmax).  Typical Value = 1. Default: nullptr */
					CIMPP::PU vrmin; 	/* Minimum voltage regulator output (Vrmin).  Typical Value = -0.9. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		ExcDC1A();
		virtual ~ExcDC1A();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ExcDC1A_factory();
}
#endif
