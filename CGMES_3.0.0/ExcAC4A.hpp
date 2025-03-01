#ifndef ExcAC4A_H
#define ExcAC4A_H
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
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Modified IEEE AC4A alternator-supplied rectifier excitation system with different minimum controller output. */
	class ExcAC4A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAC4A();
		~ExcAC4A() override;

		/** \brief Voltage regulator gain (&lt;i&gt;Ka&lt;/i&gt;) (&amp;gt; 0).  Typical value = 200. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Rectifier loading factor proportional to commutating reactance (&lt;i&gt;Kc&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Voltage regulator time constant (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,015. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Voltage regulator time constant (&lt;i&gt;Tb&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 10. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (&lt;i&gt;Tc&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Maximum voltage regulator input limit (&lt;i&gt;Vimax&lt;/i&gt;)  (&amp;gt; 0).  Typical value = 10. Default: nullptr */
		CIMPP::PU vimax;

		/** \brief Minimum voltage regulator input limit (&lt;i&gt;Vimin&lt;/i&gt;) (&amp;lt; 0).  Typical value = -10. Default: nullptr */
		CIMPP::PU vimin;

		/** \brief Maximum voltage regulator output (&lt;i&gt;Vrmax&lt;/i&gt;) (&amp;gt; 0).  Typical value = 5,64. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (&lt;i&gt;Vrmin&lt;/i&gt;) (&amp;lt; 0).  Typical value = -4,53. Default: nullptr */
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

	BaseClass* ExcAC4A_factory();
}
#endif
