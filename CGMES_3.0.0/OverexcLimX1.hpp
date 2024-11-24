#ifndef OverexcLimX1_H
#define OverexcLimX1_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "OverexcitationLimiterDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Field voltage over excitation limiter.
	*/
	class OverexcLimX1 : public OverexcitationLimiterDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		OverexcLimX1();
		~OverexcLimX1() override;

		CIMPP::PU efd1;  /* Low voltage point on the inverse time characteristic (&lt;i&gt;EFD&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,1. Default: nullptr */
		CIMPP::PU efd2;  /* Mid voltage point on the inverse time characteristic (&lt;i&gt;EFD&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,2. Default: nullptr */
		CIMPP::PU efd3;  /* High voltage point on the inverse time characteristic (&lt;i&gt;EFD&lt;/i&gt;&lt;i&gt;&lt;sub&gt;3&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,5. Default: nullptr */
		CIMPP::PU efddes;  /* Desired field voltage (&lt;i&gt;EFD&lt;/i&gt;&lt;i&gt;&lt;sub&gt;DES&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,9. Default: nullptr */
		CIMPP::PU efdrated;  /* Rated field voltage (&lt;i&gt;EFD&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RATED&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,05. Default: nullptr */
		CIMPP::PU kmx;  /* Gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;MX&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,01. Default: nullptr */
		CIMPP::Seconds t1;  /* Time to trip the exciter at the low voltage point on the inverse time characteristic (&lt;i&gt;TIME&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 120. Default: nullptr */
		CIMPP::Seconds t2;  /* Time to trip the exciter at the mid voltage point on the inverse time characteristic (&lt;i&gt;TIME&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 40. Default: nullptr */
		CIMPP::Seconds t3;  /* Time to trip the exciter at the high voltage point on the inverse time characteristic (&lt;i&gt;TIME&lt;/i&gt;&lt;i&gt;&lt;sub&gt;3&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 15. Default: nullptr */
		CIMPP::PU vlow;  /* Low voltage limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;LOW&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0). Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* OverexcLimX1_factory();
}
#endif
