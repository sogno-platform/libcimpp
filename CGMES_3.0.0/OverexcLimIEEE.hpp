#ifndef OverexcLimIEEE_H
#define OverexcLimIEEE_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "OverexcitationLimiterDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Float.hpp"
#include "PU.hpp"

namespace CIMPP
{

	/*
	The over excitation limiter model is intended to represent the significant features of OELs necessary for some large-scale system studies. It is the result of a pragmatic approach to obtain a model that can be widely applied with attainable data from generator owners. An attempt to include all variations in the functionality of OELs and duplicate how they interact with the rest of the excitation systems would likely result in a level of application insufficient for the studies for which they are intended. Reference: IEEE OEL 421.5-2005, 9.
	*/
	class OverexcLimIEEE : public OverexcitationLimiterDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		OverexcLimIEEE();
		~OverexcLimIEEE() override;

		CIMPP::PU hyst;  /* OEL pickup/drop-out hysteresis (&lt;i&gt;HYST&lt;/i&gt;).  Typical value = 0,03. Default: nullptr */
		CIMPP::PU ifdlim;  /* OEL timed field current limit (&lt;i&gt;I&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FDLIM&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,05. Default: nullptr */
		CIMPP::PU ifdmax;  /* OEL instantaneous field current limit (&lt;i&gt;I&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FDMAX&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,5. Default: nullptr */
		CIMPP::PU itfpu;  /* OEL timed field current limiter pickup level (&lt;i&gt;I&lt;/i&gt;&lt;i&gt;&lt;sub&gt;TFPU&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,05. Default: nullptr */
		CIMPP::PU kcd;  /* OEL cooldown gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;CD&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::Float kramp;  /* OEL ramped limit rate (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RAMP&lt;/sub&gt;&lt;/i&gt;).  Unit = PU / s.  Typical value = 10. Default: 0.0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* OverexcLimIEEE_factory();
}
#endif
