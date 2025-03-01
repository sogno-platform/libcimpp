#ifndef UnderexcLimX2_H
#define UnderexcLimX2_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "UnderexcitationLimiterDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief <font color="#0f0f0f">Westinghouse minimum excitation limiter.</font> */
	class UnderexcLimX2 : public UnderexcitationLimiterDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		UnderexcLimX2();
		~UnderexcLimX2() override;

		/** \brief Differential gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;F2&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU kf2;

		/** \brief Minimum excitation limit gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;M&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU km;

		/** \brief Minimum excitation limit value (&lt;i&gt;MELMAX&lt;/i&gt;). Default: nullptr */
		CIMPP::PU melmax;

		/** \brief Excitation centre setting (&lt;i&gt;Q&lt;/i&gt;&lt;i&gt;&lt;sub&gt;O&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU qo;

		/** \brief Excitation radius (&lt;i&gt;R&lt;/i&gt;). Default: nullptr */
		CIMPP::PU r;

		/** \brief Differential time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;F2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds tf2;

		/** \brief Minimum excitation limit time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;M&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds tm;

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

	BaseClass* UnderexcLimX2_factory();
}
#endif
