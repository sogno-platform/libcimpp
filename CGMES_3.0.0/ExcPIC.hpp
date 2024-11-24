#ifndef ExcPIC_H
#define ExcPIC_H
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
	Proportional/integral regulator excitation system.  This model can be used to represent excitation systems with a proportional-integral (PI) voltage regulator controller.
	*/
	class ExcPIC : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcPIC();
		~ExcPIC() override;

		CIMPP::PU e1;  /* Field voltage value 1 (&lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU e2;  /* Field voltage value 2 (&lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU efdmax;  /* Exciter maximum limit (&lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;fdmax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; ExcPIC.efdmin).  Typical value = 8. Default: nullptr */
		CIMPP::PU efdmin;  /* Exciter minimum limit (&lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;fdmin&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; ExcPIC.efdmax).  Typical value = -0,87. Default: nullptr */
		CIMPP::PU ka;  /* PI controller gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;a&lt;/sub&gt;&lt;/i&gt;).  Typical value = 3,15. Default: nullptr */
		CIMPP::PU kc;  /* Exciter regulation factor (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;c&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,08. Default: nullptr */
		CIMPP::PU ke;  /* Exciter constant (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;e&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kf;  /* Rate feedback gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;f&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU ki;  /* Current source gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;i&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kp;  /* Potential source gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;p&lt;/sub&gt;&lt;/i&gt;).  Typical value = 6,5. Default: nullptr */
		CIMPP::PU se1;  /* Saturation factor at &lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt; (&lt;i&gt;Se&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU se2;  /* Saturation factor at &lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt; (&lt;i&gt;Se&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds ta1;  /* PI controller time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;a1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds ta2;  /* Voltage regulator time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;a2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,01. Default: nullptr */
		CIMPP::Seconds ta3;  /* Lead time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;a3&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds ta4;  /* Lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;a4&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds te;  /* Exciter time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;e&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tf1;  /* Rate feedback time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;f1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tf2;  /* Rate feedback lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;f2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::PU vr1;  /* PI maximum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;r1&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU vr2;  /* PI minimum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;r2&lt;/sub&gt;&lt;/i&gt;).  Typical value = -0,87. Default: nullptr */
		CIMPP::PU vrmax;  /* Voltage regulator maximum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;rmax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; ExcPIC.vrmin).  Typical value = 1. Default: nullptr */
		CIMPP::PU vrmin;  /* Voltage regulator minimum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;rmin&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; ExcPIC.vrmax).  Typical value = -0,87. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcPIC_factory();
}
#endif
