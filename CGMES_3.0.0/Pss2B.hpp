#ifndef Pss2B_H
#define Pss2B_H
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
#include "CimClassDetails.hpp"
#include "Float.hpp"
#include "Integer.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Modified IEEE PSS2B.  Extra lead/lag (or rate) block added at end (up to 4 lead/lags total). */
	class Pss2B : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		Pss2B();
		~Pss2B() override;

		/** \brief Numerator constant (&lt;i&gt;a&lt;/i&gt;).  Typical value = 1. Default: 0.0 */
		CIMPP::Float a;

		/** \brief Stabilizer gain (&lt;i&gt;Ks1&lt;/i&gt;).  Typical value = 12. Default: nullptr */
		CIMPP::PU ks1;

		/** \brief Gain on signal #2 (&lt;i&gt;Ks2&lt;/i&gt;).  Typical value = 0,2. Default: nullptr */
		CIMPP::PU ks2;

		/** \brief Gain on signal #2 input before ramp-tracking filter (&lt;i&gt;Ks3&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU ks3;

		/** \brief Gain on signal #2 input after ramp-tracking filter (&lt;i&gt;Ks4&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU ks4;

		/** \brief Denominator order of ramp tracking filter (&lt;i&gt;m&lt;/i&gt;).  Typical value = 5. Default: 0 */
		CIMPP::Integer m;

		/** \brief Order of ramp tracking filter (&lt;i&gt;n&lt;/i&gt;).  Typical value = 1. Default: 0 */
		CIMPP::Integer n;

		/** \brief Lead/lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,12. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Lead/lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;10&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t10;

		/** \brief Lead/lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;11&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t11;

		/** \brief Lead/lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,02. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Lead/lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;3&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,3. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Lead/lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;4&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,02. Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Time constant on signal #1 (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;6&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds t6;

		/** \brief Time constant on signal #2 (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;7&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 2. Default: nullptr */
		CIMPP::Seconds t7;

		/** \brief Lead of ramp tracking filter (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;8&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,2. Default: nullptr */
		CIMPP::Seconds t8;

		/** \brief Lag of ramp tracking filter (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;9&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds t9;

		/** \brief Lead constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;a&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;b&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief First washout on signal #1 (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;w1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 2. Default: nullptr */
		CIMPP::Seconds tw1;

		/** \brief Second washout on signal #1 (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;w2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 2. Default: nullptr */
		CIMPP::Seconds tw2;

		/** \brief First washout on signal #2 (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;w3&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 2. Default: nullptr */
		CIMPP::Seconds tw3;

		/** \brief Second washout on signal #2 (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;w4&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tw4;

		/** \brief Input signal #1 maximum limit (&lt;i&gt;Vsi1max&lt;/i&gt;) (&amp;gt; Pss2B.vsi1min).  Typical value = 2. Default: nullptr */
		CIMPP::PU vsi1max;

		/** \brief Input signal #1 minimum limit (&lt;i&gt;Vsi1min&lt;/i&gt;) (&amp;lt; Pss2B.vsi1max).  Typical value = -2. Default: nullptr */
		CIMPP::PU vsi1min;

		/** \brief Input signal #2 maximum limit (&lt;i&gt;Vsi2max&lt;/i&gt;) (&amp;gt; Pss2B.vsi2min).  Typical value = 2. Default: nullptr */
		CIMPP::PU vsi2max;

		/** \brief Input signal #2 minimum limit (&lt;i&gt;Vsi2min&lt;/i&gt;) (&amp;lt; Pss2B.vsi2max).  Typical value = -2. Default: nullptr */
		CIMPP::PU vsi2min;

		/** \brief Stabilizer output maximum limit (&lt;i&gt;Vstmax&lt;/i&gt;) (&amp;gt; Pss2B.vstmin).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU vstmax;

		/** \brief Stabilizer output minimum limit (&lt;i&gt;Vstmin&lt;/i&gt;) (&amp;lt; Pss2B.vstmax).  Typical value = -0,1. Default: nullptr */
		CIMPP::PU vstmin;

		static const char debugName[];
		const char* debugString() const override;

		const std::list<std::string>& getAttributeNames() const override;

		const std::string& getClassNamespaceUrl() const override;
		const std::string& getAttributeNamespaceUrl(const std::string& attrName) const override;

		const std::list<CGMESProfile>& getPossibleProfiles() const override;
		const CGMESProfile& getRecommendedProfile() const override;
		const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const override;
		const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;

		bool isAssignableFrom(BaseClass* otherObject) const override;
		static const BaseClassDefiner declare();

	protected:
		std::map<std::string, AttrDetails> allAttrDetailsMap() const override;
	};

	BaseClass* Pss2B_factory();
}
#endif
