#ifndef PFVArType1IEEEPFController_H
#define PFVArType1IEEEPFController_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "PFVArControllerType1Dynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	IEEE PF controller type 1 which operates by moving the voltage reference directly. Reference: IEEE 421.5-2005, 11.2.
	*/
	class PFVArType1IEEEPFController : public PFVArControllerType1Dynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PFVArType1IEEEPFController();
		~PFVArType1IEEEPFController() override;

		CIMPP::Boolean ovex;  /* Overexcitation Flag (&lt;i&gt;OVEX&lt;/i&gt;) true = overexcited false = underexcited. Default: false */
		CIMPP::Seconds tpfc;  /* PF controller time delay (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;PFC&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 5. Default: nullptr */
		CIMPP::PU vitmin;  /* Minimum machine terminal current needed to enable pf/var controller (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ITMIN&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU vpf;  /* Synchronous machine power factor (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;PF&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::Float vpfcbw;  /* PF controller deadband (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;PFC_BW&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,05. Default: 0.0 */
		CIMPP::PU vpfref;  /* PF controller reference (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;PFREF&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU vvtmax;  /* Maximum machine terminal voltage needed for pf/var controller to be enabled (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;VTMAX&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; PFVArType1IEEEPFController.vvtmin). Default: nullptr */
		CIMPP::PU vvtmin;  /* Minimum machine terminal voltage needed to enable pf/var controller (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;VTMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; PFVArType1IEEEPFController.vvtmax). Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PFVArType1IEEEPFController_factory();
}
#endif
