#ifndef OverexcLimX2_H
#define OverexcLimX2_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "OverexcitationLimiterDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Field voltage or current overexcitation limiter designed to protect the generator field of an AC machine with automatic excitation control from overheating due to prolonged overexcitation.
	*/
	class OverexcLimX2 : public OverexcitationLimiterDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		OverexcLimX2();
		~OverexcLimX2() override;

		CIMPP::PU efd1;  /* Low voltage or current point on the inverse time characteristic (&lt;i&gt;EFD&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,1. Default: nullptr */
		CIMPP::PU efd2;  /* Mid voltage or current point on the inverse time characteristic (&lt;i&gt;EFD&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,2. Default: nullptr */
		CIMPP::PU efd3;  /* High voltage or current point on the inverse time characteristic (&lt;i&gt;EFD&lt;/i&gt;&lt;i&gt;&lt;sub&gt;3&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,5. Default: nullptr */
		CIMPP::PU efddes;  /* Desired field voltage if &lt;i&gt;m&lt;/i&gt; = false or desired field current if &lt;i&gt;m &lt;/i&gt;= true (&lt;i&gt;EFD&lt;/i&gt;&lt;i&gt;&lt;sub&gt;DES&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU efdrated;  /* Rated field voltage if m = false or rated field current if m = true (&lt;i&gt;EFD&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RATED&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,05. Default: nullptr */
		CIMPP::PU kmx;  /* Gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;MX&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,002. Default: nullptr */
		CIMPP::Boolean m;  /* (&lt;i&gt;m&lt;/i&gt;). true = IFD limiting false = EFD limiting. Default: false */
		CIMPP::Seconds t1;  /* Time to trip the exciter at the low voltage or current point on the inverse time characteristic (&lt;i&gt;TIME&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 120. Default: nullptr */
		CIMPP::Seconds t2;  /* Time to trip the exciter at the mid voltage or current point on the inverse time characteristic (&lt;i&gt;TIME&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 40. Default: nullptr */
		CIMPP::Seconds t3;  /* Time to trip the exciter at the high voltage or current point on the inverse time characteristic (&lt;i&gt;TIME&lt;/i&gt;&lt;i&gt;&lt;sub&gt;3&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 15. Default: nullptr */
		CIMPP::PU vlow;  /* Low voltage limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;LOW&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0). Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* OverexcLimX2_factory();
}
#endif
