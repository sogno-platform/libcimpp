#ifndef ExcIEEEDC2A_H
#define ExcIEEEDC2A_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Boolean.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief IEEE 421.5-2005 type DC2A model. This model represents field-controlled DC commutator exciters with continuously acting voltage regulators having supplies obtained from the generator or auxiliary bus.  It differs from the type DC1A model only in the voltage regulator output limits, which are now proportional to terminal voltage <i>V</i><i><sub>T</sub></i>. It is representative of solid-state replacements for various forms of older mechanical and rotating amplifier regulating equipment connected to DC commutator exciters. Reference: IEEE 421.5-2005, 5.2. */
	class ExcIEEEDC2A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEDC2A();
		~ExcIEEEDC2A() override;

		/** \brief Exciter voltage at which exciter saturation is defined (&lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FD1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 3,05. Default: nullptr */
		CIMPP::PU efd1;

		/** \brief Exciter voltage at which exciter saturation is defined (&lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FD2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 2,29. Default: nullptr */
		CIMPP::PU efd2;

		/** \brief (&lt;i&gt;exclim&lt;/i&gt;).  IEEE standard is ambiguous about lower limit on exciter output. Typical value = - 999  which means that there is no limit applied. Default: nullptr */
		CIMPP::PU exclim;

		/** \brief Voltage regulator gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;A&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 300. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Exciter constant related to self-excited field (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;E&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Excitation control system stabilizer gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;F&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU kf;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, &lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FD1&lt;/sub&gt;&lt;/i&gt; (&lt;i&gt;S&lt;/i&gt;&lt;i&gt;&lt;sub&gt;E&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;[E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FD1&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;]&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,279. Default: 0.0 */
		CIMPP::Float seefd1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, &lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FD2&lt;/sub&gt;&lt;/i&gt; (&lt;i&gt;S&lt;/i&gt;&lt;i&gt;&lt;sub&gt;E&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;[E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FD2&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;]&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,117. Default: 0.0 */
		CIMPP::Float seefd2;

		/** \brief Voltage regulator time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;A&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,01. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Voltage regulator time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;B&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;C&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Exciter time constant, integration rate associated with exciter control (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;E&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1,33. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Excitation control system stabilizer time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;F&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,675. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief UEL input (&lt;i&gt;uelin&lt;/i&gt;). true = input is connected to the HV gate false = input connects to the error signal. Typical value = true. Default: false */
		CIMPP::Boolean uelin;

		/** \brief Maximum voltage regulator output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RMAX&lt;/sub&gt;&lt;/i&gt;)(&amp;gt; ExcIEEEDC2A.vrmin).  Typical value = 4,95. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; 0 and &amp;lt; ExcIEEEDC2A.vrmax).  Typical value = -4,9. Default: nullptr */
		CIMPP::PU vrmin;

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

	BaseClass* ExcIEEEDC2A_factory();
}
#endif
