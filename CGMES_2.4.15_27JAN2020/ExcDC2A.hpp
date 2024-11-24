#ifndef ExcDC2A_H
#define ExcDC2A_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/*
	Modified IEEE DC2A direct current commutator exciters with speed input, one more leg block in feedback loop and without underexcitation limiters (UEL) inputs.  DC type 2 excitation system model with added speed multiplier, added lead-lag, and voltage-dependent limits.
	*/
	class ExcDC2A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcDC2A();
		~ExcDC2A() override;

		CIMPP::PU efd1;  /* Exciter voltage at which exciter saturation is defined (Efd1).  Typical Value = 3.05. Default: nullptr */
		CIMPP::PU efd2;  /* Exciter voltage at which exciter saturation is defined (Efd2).  Typical Value = 2.29. Default: nullptr */
		CIMPP::Boolean exclim;  /* (exclim).  IEEE standard is ambiguous about lower limit on exciter output. true = a lower limit of zero is applied to integrator output false = a lower limit of zero is not applied to integrator output. Typical Value = true. Default: false */
		CIMPP::PU ka;  /* Voltage regulator gain (Ka).  Typical Value = 300. Default: nullptr */
		CIMPP::PU ke;  /* Exciter constant related to self-excited field (Ke).  If Ke is entered as zero, the model calculates an effective value of Ke such that the initial condition value of Vr is zero. The zero value of Ke is not changed.  If Ke is entered as non-zero, its value is used directly, without change.  Typical Value = 1. Default: nullptr */
		CIMPP::PU kf;  /* Excitation control system stabilizer gain (Kf).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU ks;  /* Coefficient to allow different usage of the model-speed coefficient (Ks).  Typical Value = 0. Default: nullptr */
		CIMPP::Simple_Float seefd1;  /* Exciter saturation function value at the corresponding exciter voltage, Efd1 (Se[Eefd1]).  Typical Value = 0.279. Default: nullptr */
		CIMPP::Simple_Float seefd2;  /* Exciter saturation function value at the corresponding exciter voltage, Efd2 (Se[Efd2]).  Typical Value = 0.117. Default: nullptr */
		CIMPP::Seconds ta;  /* Voltage regulator time constant (Ta).  Typical Value = 0.01. Default: nullptr */
		CIMPP::Seconds tb;  /* Voltage regulator time constant (Tb).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tc;  /* Voltage regulator time constant (Tc).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds te;  /* Exciter time constant, integration rate associated with exciter control (Te).  Typical Value = 1.33. Default: nullptr */
		CIMPP::Seconds tf;  /* Excitation control system stabilizer time constant (Tf).  Typical Value = 0.675. Default: nullptr */
		CIMPP::Seconds tf1;  /* Excitation control system stabilizer time constant (Tf1).  Typical Value = 0. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum voltage regulator output (Vrmax).  Typical Value = 4.95. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator output (Vrmin).  Typical Value = -4.9. Default: nullptr */
		CIMPP::Boolean vtlim;  /* (Vtlim). true = limiter at the block [Ka/(1+sTa)] is dependent on Vt  false = limiter at the block is not dependent on Vt. Typical Value = true. Default: false */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcDC2A_factory();
}
#endif
