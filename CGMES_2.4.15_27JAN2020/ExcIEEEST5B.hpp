#ifndef ExcIEEEST5B_H
#define ExcIEEEST5B_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	The class represents IEEE Std 421.5-2005 type ST5B model. The Type ST5B excitation system is a variation of the Type ST1A model, with alternative overexcitation and underexcitation inputs and additional limits.  Reference: IEEE Standard 421.5-2005 Section 7.5.   Note: the block diagram in the IEEE 421.5 standard has input signal Vc and does not indicate the summation point with Vref. The implementation of the ExcIEEEST5B shall consider summation point with Vref.
	*/
	class ExcIEEEST5B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEST5B();
		~ExcIEEEST5B() override;

		CIMPP::PU kc;  /* Rectifier regulation factor (K).  Typical Value = 0.004. Default: nullptr */
		CIMPP::PU kr;  /* Regulator gain (K).  Typical Value = 200. Default: nullptr */
		CIMPP::Seconds t1;  /* Firing circuit time constant (T1).  Typical Value = 0.004. Default: nullptr */
		CIMPP::Seconds tb1;  /* Regulator lag time constant (T).  Typical Value = 6. Default: nullptr */
		CIMPP::Seconds tb2;  /* Regulator lag time constant (T).  Typical Value = 0.01. Default: nullptr */
		CIMPP::Seconds tc1;  /* Regulator lead time constant (T).  Typical Value = 0.8. Default: nullptr */
		CIMPP::Seconds tc2;  /* Regulator lead time constant (T).  Typical Value = 0.08. Default: nullptr */
		CIMPP::Seconds tob1;  /* OEL lag time constant (T).  Typical Value = 2. Default: nullptr */
		CIMPP::Seconds tob2;  /* OEL lag time constant (T).  Typical Value = 0.08. Default: nullptr */
		CIMPP::Seconds toc1;  /* OEL lead time constant (T).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds toc2;  /* OEL lead time constant (T).  Typical Value = 0.08. Default: nullptr */
		CIMPP::Seconds tub1;  /* UEL lag time constant (T).  Typical Value = 10. Default: nullptr */
		CIMPP::Seconds tub2;  /* UEL lag time constant (T).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Seconds tuc1;  /* UEL lead time constant (T).  Typical Value = 2. Default: nullptr */
		CIMPP::Seconds tuc2;  /* UEL lead time constant (T).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum voltage regulator output (V).  Typical Value = 5. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum voltage regulator output (V).  Typical Value = -4. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcIEEEST5B_factory();
}
#endif
