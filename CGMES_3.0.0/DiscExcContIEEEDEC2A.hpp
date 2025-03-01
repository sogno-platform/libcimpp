#ifndef DiscExcContIEEEDEC2A_H
#define DiscExcContIEEEDEC2A_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "DiscontinuousExcitationControlDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief IEEE type DEC2A model for discontinuous excitation control. This system provides transient excitation boosting via an open-loop control as initiated by a trigger signal generated remotely. Reference: IEEE 421.5-2005 12.3. */
	class DiscExcContIEEEDEC2A : public DiscontinuousExcitationControlDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		DiscExcContIEEEDEC2A();
		~DiscExcContIEEEDEC2A() override;

		/** \brief Discontinuous controller time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;D1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds td1;

		/** \brief Discontinuous controller washout time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;D2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds td2;

		/** \brief Limiter (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;DMAX&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; DiscExcContIEEEDEC2A.vdmin). Default: nullptr */
		CIMPP::PU vdmax;

		/** \brief Limiter (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;DMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; DiscExcContIEEEDEC2A.vdmax). Default: nullptr */
		CIMPP::PU vdmin;

		/** \brief Discontinuous controller input reference (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;K&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU vk;

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

	BaseClass* DiscExcContIEEEDEC2A_factory();
}
#endif
