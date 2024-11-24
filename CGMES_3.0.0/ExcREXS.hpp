#ifndef ExcREXS_H
#define ExcREXS_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "ExcREXSFeedbackSignalKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	General purpose rotating excitation system.  This model can be used to represent a wide range of excitation systems whose DC power source is an AC or DC generator. It encompasses IEEE type AC1, AC2, DC1, and DC2 excitation system models.
	*/
	class ExcREXS : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcREXS();
		~ExcREXS() override;

		CIMPP::PU e1;  /* Field voltage value 1 (&lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;).  Typical value = 3. Default: nullptr */
		CIMPP::PU e2;  /* Field voltage value 2 (&lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;).  Typical value = 4. Default: nullptr */
		CIMPP::ExcREXSFeedbackSignalKind fbf;  /* Rate feedback signal flag (&lt;i&gt;fbf&lt;/i&gt;). Typical value = fieldCurrent. Default: 0 */
		CIMPP::PU flimf;  /* Limit type flag (&lt;i&gt;Flimf&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kc;  /* Rectifier regulation factor (&lt;i&gt;Kc&lt;/i&gt;).  Typical value = 0,05. Default: nullptr */
		CIMPP::PU kd;  /* Exciter regulation factor (&lt;i&gt;Kd&lt;/i&gt;).  Typical value = 2. Default: nullptr */
		CIMPP::PU ke;  /* Exciter field proportional constant (&lt;i&gt;Ke&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU kefd;  /* Field voltage feedback gain (&lt;i&gt;Kefd&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds kf;  /* Rate feedback gain (&lt;i&gt;Kf&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::PU kh;  /* Field voltage controller feedback gain (&lt;i&gt;Kh&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kii;  /* Field current regulator integral gain (&lt;i&gt;Kii&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kip;  /* Field current regulator proportional gain (&lt;i&gt;Kip&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU ks;  /* Coefficient to allow different usage of the model-speed coefficient (&lt;i&gt;Ks&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kvi;  /* Voltage regulator integral gain (&lt;i&gt;Kvi&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kvp;  /* Voltage regulator proportional gain (&lt;i&gt;Kvp&lt;/i&gt;).  Typical value = 2800. Default: nullptr */
		CIMPP::PU kvphz;  /* V/Hz limiter gain (&lt;i&gt;Kvphz&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU nvphz;  /* Pickup speed of V/Hz limiter (&lt;i&gt;Nvphz&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU se1;  /* Saturation factor at &lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;&lt;i&gt; &lt;/i&gt;(&lt;i&gt;Se&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,0001. Default: nullptr */
		CIMPP::PU se2;  /* Saturation factor at &lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt; (&lt;i&gt;Se&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,001. Default: nullptr */
		CIMPP::Seconds ta;  /* Voltage regulator time constant (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt;= 0).  If = 0, block is bypassed.  Typical value = 0,01. Default: nullptr */
		CIMPP::Seconds tb1;  /* Lag time constant (&lt;i&gt;Tb1&lt;/i&gt;) (&amp;gt;= 0).  If = 0, block is bypassed.  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tb2;  /* Lag time constant (&lt;i&gt;Tb2&lt;/i&gt;) (&amp;gt;= 0).  If = 0, block is bypassed.  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tc1;  /* Lead time constant (&lt;i&gt;Tc1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tc2;  /* Lead time constant (&lt;i&gt;Tc2&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds te;  /* Exciter field time constant (&lt;i&gt;Te&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1,2. Default: nullptr */
		CIMPP::Seconds tf;  /* Rate feedback time constant (&lt;i&gt;Tf&lt;/i&gt;) (&amp;gt;= 0).  If = 0, the feedback path is not used.  Typical value = 1. Default: nullptr */
		CIMPP::Seconds tf1;  /* Feedback lead time constant (&lt;i&gt;Tf1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tf2;  /* Feedback lag time constant (&lt;i&gt;Tf2&lt;/i&gt;) (&amp;gt;= 0).  If = 0, block is bypassed.  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tp;  /* Field current bridge time constant (&lt;i&gt;Tp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::PU vcmax;  /* Maximum compounding voltage (&lt;i&gt;Vcmax&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU vfmax;  /* Maximum exciter field current (&lt;i&gt;Vfmax&lt;/i&gt;) (&amp;gt; ExcREXS.vfmin).  Typical value = 47. Default: nullptr */
		CIMPP::PU vfmin;  /* Minimum exciter field current (&lt;i&gt;Vfmin&lt;/i&gt;) (&amp;lt; ExcREXS.vfmax).  Typical value = -20. Default: nullptr */
		CIMPP::PU vimax;  /* Voltage regulator input limit (&lt;i&gt;Vimax&lt;/i&gt;).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum controller output (V&lt;i&gt;rmax&lt;/i&gt;) (&amp;gt; ExcREXS.vrmin).  Typical value = 47. Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum controller output (&lt;i&gt;Vrmin&lt;/i&gt;) (&amp;lt; ExcREXS.vrmax).  Typical value = -20. Default: nullptr */
		CIMPP::PU xc;  /* Exciter compounding reactance (&lt;i&gt;Xc&lt;/i&gt;).  Typical value = 0. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcREXS_factory();
}
#endif
