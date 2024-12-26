#ifndef ExcIEEEDC1A_H
#define ExcIEEEDC1A_H
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
	The class represents IEEE Std 421.5-2005 type DC1A model. This model represents field-controlled dc commutator exciters with continuously acting voltage regulators (especially the direct-acting rheostatic, rotating amplifier, and magnetic amplifier types).  Because this model has been widely implemented by the industry, it is sometimes used to represent other types of systems when detailed data for them are not available or when a simplified model is required.   Reference: IEEE Standard 421.5-2005 Section 5.1.
	*/
	class ExcIEEEDC1A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEDC1A();
		~ExcIEEEDC1A() override;

		CIMPP::PU efd1;  /* Exciter voltage at which exciter saturation is defined (E).  Typical Value = 3.1. Default: nullptr */
		CIMPP::PU efd2;  /* Exciter voltage at which exciter saturation is defined (E).  Typical Value = 2.3. Default: nullptr */
		CIMPP::Boolean exclim;  /* (exclim).  IEEE standard is ambiguous about lower limit on exciter output. true = a lower limit of zero is applied to integrator output false = a lower limit of zero is not applied to integrator output. Typical Value = true. Default: false */
		CIMPP::PU ka;  /* Voltage regulator gain (K).  Typical Value = 46. Default: nullptr */
		CIMPP::PU ke;  /* Exciter constant related to self-excited field (K).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kf;  /* Excitation control system stabilizer gain (K).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Simple_Float seefd1;  /* Exciter saturation function value at the corresponding exciter voltage, E (S[E]).  Typical Value = 0.33. Default: nullptr */
		CIMPP::Simple_Float seefd2;  /* Exciter saturation function value at the corresponding exciter voltage, E (S[E]).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds ta;  /* Voltage regulator time constant (T).  Typical Value = 0.06. Default: nullptr */
		CIMPP::Seconds tb;  /* Voltage regulator time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tc;  /* Voltage regulator time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds te;  /* Exciter time constant, integration rate associated with exciter control (T).  Typical Value = 0.46. Default: nullptr */
		CIMPP::Seconds tf;  /* Excitation control system stabilizer time constant (T).  Typical Value = 1. Default: nullptr */
		CIMPP::Boolean uelin;  /* UEL input (uelin). true = input is connected to the HV gate false = input connects to the error signal. Typical Value = true. Default: false */
		CIMPP::PU vrmax;  /* Maximum voltage regulator output (V).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator output (V).  Typical Value = -0.9. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcIEEEDC1A_factory();
}
#endif
