#ifndef WindContQIEC_H
#define WindContQIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "WindQcontrolModeKind.hpp"
#include "WindUVRTQcontrolModeKind.hpp"

namespace CIMPP
{
	class WindTurbineType3or4IEC;

	/*
	Q control model. Reference: IEC 61400-27-1:2015, 5.6.5.7.
	*/
	class WindContQIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindContQIEC();
		~WindContQIEC() override;

		CIMPP::WindTurbineType3or4IEC* WindTurbineType3or4IEC;  /* Wind turbine type 3 or type 4 model with which this reactive control model is associated. Default: 0 */
		CIMPP::PU iqh1;  /* Maximum reactive current injection during dip (&lt;i&gt;i&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qh1&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU iqmax;  /* Maximum reactive current injection (&lt;i&gt;i&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qmax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; WindContQIEC.iqmin). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU iqmin;  /* Minimum reactive current injection (&lt;i&gt;i&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qmin&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; WindContQIEC.iqmax). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU iqpost;  /* Post fault reactive current injection (&lt;i&gt;i&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qpost&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU kiq;  /* Reactive power PI controller integration gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I,q&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU kiu;  /* Voltage PI controller integration gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I,u&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU kpq;  /* Reactive power PI controller proportional gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;P,q&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU kpu;  /* Voltage PI controller proportional gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;P,u&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU kqv;  /* Voltage scaling factor for UVRT current (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qv&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU rdroop;  /* Resistive component of voltage drop impedance (&lt;i&gt;r&lt;/i&gt;&lt;i&gt;&lt;sub&gt;droop&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Seconds tpfiltq;  /* Power measurement filter time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;pfiltq&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds tpost;  /* Length of time period where post fault reactive power is injected (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;post&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Seconds tqord;  /* Time constant in reactive power order lag (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qord&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds tufiltq;  /* Voltage measurement filter time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ufiltq&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU udb1;  /* Voltage deadband lower limit (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;db1&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU udb2;  /* Voltage deadband upper limit (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;db2&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU umax;  /* Maximum voltage in voltage PI controller integral term (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;max&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; WindContQIEC.umin). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU umin;  /* Minimum voltage in voltage PI controller integral term (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;min&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; WindContQIEC.umax). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU uqdip;  /* Voltage threshold for UVRT detection in Q control (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qdip&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU uref0;  /* User-defined bias in voltage reference (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ref0&lt;/sub&gt;&lt;/i&gt;). It is a case-dependent parameter. Default: nullptr */
		CIMPP::WindQcontrolModeKind windQcontrolModesType;  /* Types of general wind turbine Q control modes (&lt;i&gt;M&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qG&lt;/sub&gt;&lt;/i&gt;).  It is a project-dependent parameter. Default: 0 */
		CIMPP::WindUVRTQcontrolModeKind windUVRTQcontrolModesType;  /* Types of UVRT Q control modes (&lt;i&gt;M&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qUVRT&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: 0 */
		CIMPP::PU xdroop;  /* Inductive component of voltage drop impedance (&lt;i&gt;x&lt;/i&gt;&lt;i&gt;&lt;sub&gt;droop&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a project-dependent parameter. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindContQIEC_factory();
}
#endif
