#ifndef Pss1A_H
#define Pss1A_H
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
#include "Boolean.hpp"
#include "InputSignalKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Single input power system stabilizer. It is a modified version in order to allow representation of various vendors' implementations on PSS type 1A.
	*/
	class Pss1A : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		Pss1A();
		~Pss1A() override;

		CIMPP::PU a1;  /* Notch filter parameter (&lt;i&gt;A&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU a2;  /* Notch filter parameter (&lt;i&gt;A&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU a3;  /* Notch filter parameter (&lt;i&gt;A&lt;/i&gt;&lt;i&gt;&lt;sub&gt;3&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU a4;  /* Notch filter parameter (&lt;i&gt;A&lt;/i&gt;&lt;i&gt;&lt;sub&gt;4&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU a5;  /* Notch filter parameter (&lt;i&gt;A&lt;/i&gt;&lt;i&gt;&lt;sub&gt;5&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU a6;  /* Notch filter parameter (&lt;i&gt;A&lt;/i&gt;&lt;i&gt;&lt;sub&gt;6&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU a7;  /* Notch filter parameter (&lt;i&gt;A&lt;/i&gt;&lt;i&gt;&lt;sub&gt;7&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU a8;  /* Notch filter parameter (&lt;i&gt;A&lt;/i&gt;&lt;i&gt;&lt;sub&gt;8&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::InputSignalKind inputSignalType;  /* Type of input signal (rotorAngularFrequencyDeviation, busFrequencyDeviation, generatorElectricalPower, generatorAcceleratingPower, busVoltage, or busVoltageDerivative). Default: 0 */
		CIMPP::Boolean kd;  /* Selector (&lt;i&gt;Kd&lt;/i&gt;).  true = e&lt;sup&gt;-sTdelay&lt;/sup&gt; used false = e&lt;sup&gt;-sTdelay&lt;/sup&gt; not used. Default: false */
		CIMPP::PU ks;  /* Stabilizer gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;s&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::Seconds t1;  /* Lead/lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t2;  /* Lead/lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t3;  /* Lead/lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;3&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t4;  /* Lead/lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;4&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t5;  /* Washout time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;5&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t6;  /* Transducer time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;6&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds tdelay;  /* Time constant (&lt;i&gt;Tdelay&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::PU vcl;  /* Stabilizer input cutoff threshold (&lt;i&gt;Vcl&lt;/i&gt;). Default: nullptr */
		CIMPP::PU vcu;  /* Stabilizer input cutoff threshold (&lt;i&gt;Vcu&lt;/i&gt;). Default: nullptr */
		CIMPP::PU vrmax;  /* Maximum stabilizer output (&lt;i&gt;Vrmax&lt;/i&gt;) (&amp;gt; Pss1A.vrmin). Default: nullptr */
		CIMPP::PU vrmin;  /* Minimum stabilizer output (&lt;i&gt;Vrmin&lt;/i&gt;) (&amp;lt; Pss1A.vrmax). Default: nullptr */

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

	BaseClass* Pss1A_factory();
}
#endif
