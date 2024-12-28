#ifndef PssIEEE2B_H
#define PssIEEE2B_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "InputSignalKind.hpp"
#include "Integer.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	IEEE 421.5-2005 type PSS2B power system stabilizer model. This stabilizer model is designed to represent a variety of dual-input stabilizers, which normally use combinations of power and speed or frequency to derive the stabilizing signal. Reference: IEEE 2B 421.5-2005, 8.2.
	*/
	class PssIEEE2B : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssIEEE2B();
		~PssIEEE2B() override;

		CIMPP::InputSignalKind inputSignal1Type;  /* Type of input signal #1 (rotorAngularFrequencyDeviation, busFrequencyDeviation).  Typical value = rotorAngularFrequencyDeviation. Default: 0 */
		CIMPP::InputSignalKind inputSignal2Type;  /* Type of input signal #2 (generatorElectricalPower).  Typical value = generatorElectricalPower. Default: 0 */
		CIMPP::PU ks1;  /* Stabilizer gain (&lt;i&gt;Ks1&lt;/i&gt;).  Typical value = 12. Default: nullptr */
		CIMPP::PU ks2;  /* Gain on signal #2 (&lt;i&gt;Ks2&lt;/i&gt;).  Typical value = 0,2. Default: nullptr */
		CIMPP::PU ks3;  /* Gain on signal #2 input before ramp-tracking filter (&lt;i&gt;Ks3&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::Integer m;  /* Denominator order of ramp tracking filter (&lt;i&gt;M&lt;/i&gt;).  Typical value = 5. Default: 0 */
		CIMPP::Integer n;  /* Order of ramp tracking filter (&lt;i&gt;N&lt;/i&gt;).  Typical value = 1. Default: 0 */
		CIMPP::Seconds t1;  /* Lead/lag time constant (&lt;i&gt;T1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,12. Default: nullptr */
		CIMPP::Seconds t10;  /* Lead/lag time constant (&lt;i&gt;T10&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t11;  /* Lead/lag time constant (&lt;i&gt;T11&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t2;  /* Lead/lag time constant (&lt;i&gt;T2&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,02. Default: nullptr */
		CIMPP::Seconds t3;  /* Lead/lag time constant (&lt;i&gt;T3&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,3. Default: nullptr */
		CIMPP::Seconds t4;  /* Lead/lag time constant (&lt;i&gt;T4&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,02. Default: nullptr */
		CIMPP::Seconds t6;  /* Time constant on signal #1 (&lt;i&gt;T6&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t7;  /* Time constant on signal #2 (&lt;i&gt;T7&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 2. Default: nullptr */
		CIMPP::Seconds t8;  /* Lead of ramp tracking filter (&lt;i&gt;T8&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,2. Default: nullptr */
		CIMPP::Seconds t9;  /* Lag of ramp tracking filter (&lt;i&gt;T9&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds tw1;  /* First washout on signal #1 (&lt;i&gt;Tw1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 2. Default: nullptr */
		CIMPP::Seconds tw2;  /* Second washout on signal #1 (&lt;i&gt;Tw2&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 2. Default: nullptr */
		CIMPP::Seconds tw3;  /* First washout on signal #2 (&lt;i&gt;Tw3&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 2. Default: nullptr */
		CIMPP::Seconds tw4;  /* Second washout on signal #2 (&lt;i&gt;Tw4&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::PU vsi1max;  /* Input signal #1 maximum limit (&lt;i&gt;Vsi1max&lt;/i&gt;) (&amp;gt; PssIEEE2B.vsi1min).  Typical value = 2. Default: nullptr */
		CIMPP::PU vsi1min;  /* Input signal #1 minimum limit (&lt;i&gt;Vsi1min&lt;/i&gt;) (&amp;lt; PssIEEE2B.vsi1max).  Typical value = -2. Default: nullptr */
		CIMPP::PU vsi2max;  /* Input signal #2 maximum limit (&lt;i&gt;Vsi2max&lt;/i&gt;) (&amp;gt; PssIEEE2B.vsi2min).  Typical value = 2. Default: nullptr */
		CIMPP::PU vsi2min;  /* Input signal #2 minimum limit (&lt;i&gt;Vsi2min&lt;/i&gt;) (&amp;lt; PssIEEE2B.vsi2max).  Typical value = -2. Default: nullptr */
		CIMPP::PU vstmax;  /* Stabilizer output maximum limit (&lt;i&gt;Vstmax&lt;/i&gt;) (&amp;gt; PssIEEE2B.vstmin).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU vstmin;  /* Stabilizer output minimum limit (&lt;i&gt;Vstmin&lt;/i&gt;) (&amp;lt; PssIEEE2B.vstmax).  Typical value = -0,1. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* PssIEEE2B_factory();
}
#endif
