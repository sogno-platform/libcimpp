#ifndef ExcELIN2_H
#define ExcELIN2_H
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
#include "CimClassDetails.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Detailed excitation system ELIN (VATECH).  This model represents an all-static excitation system. A PI voltage controller establishes a desired field current set point for a proportional current controller. The integrator of the PI controller has a follow-up input to match its signal to the present field current.  Power system stabilizer models used in conjunction with this excitation system model: PssELIN2, PssIEEE2B, Pss2B. */
	class ExcELIN2 : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcELIN2();
		~ExcELIN2() override;

		/** \brief Gain (&lt;i&gt;Efdbas&lt;/i&gt;).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU efdbas;

		/** \brief Limiter (&lt;i&gt;I&lt;/i&gt;&lt;i&gt;&lt;sub&gt;efmax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; ExcELIN2.iefmin).  Typical value = 1. Default: nullptr */
		CIMPP::PU iefmax;

		/** \brief Minimum open circuit excitation voltage (&lt;i&gt;I&lt;/i&gt;&lt;i&gt;&lt;sub&gt;efmax2&lt;/sub&gt;&lt;/i&gt;).  Typical value = -5. Default: nullptr */
		CIMPP::PU iefmax2;

		/** \brief Limiter (&lt;i&gt;I&lt;/i&gt;&lt;i&gt;&lt;sub&gt;efmin&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; ExcELIN2.iefmax).  Typical value = 1. Default: nullptr */
		CIMPP::PU iefmin;

		/** \brief Voltage regulator input gain (&lt;i&gt;K1&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU k1;

		/** \brief Voltage regulator input limit (&lt;i&gt;K1ec&lt;/i&gt;).  Typical value = 2. Default: nullptr */
		CIMPP::PU k1ec;

		/** \brief Gain (&lt;i&gt;K2&lt;/i&gt;).  Typical value = 5. Default: nullptr */
		CIMPP::PU k2;

		/** \brief Gain (&lt;i&gt;K3&lt;/i&gt;).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU k3;

		/** \brief Gain (&lt;i&gt;K4&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU k4;

		/** \brief Voltage controller derivative gain (&lt;i&gt;Kd1&lt;/i&gt;).  Typical value = 34,5. Default: nullptr */
		CIMPP::PU kd1;

		/** \brief Gain (&lt;i&gt;Ke2&lt;/i&gt;).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU ke2;

		/** \brief Gain (&lt;i&gt;Ketb&lt;/i&gt;).  Typical value = 0,06. Default: nullptr */
		CIMPP::PU ketb;

		/** \brief Controller follow up gain (&lt;i&gt;PID1max&lt;/i&gt;).  Typical value = 2. Default: nullptr */
		CIMPP::PU pid1max;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, &lt;i&gt;Ve&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;, back of commutating reactance (&lt;i&gt;Se[Ve&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;]&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::PU seve1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, &lt;i&gt;Ve&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;, back of commutating reactance (&lt;i&gt;Se[Ve&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;]&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::PU seve2;

		/** \brief Voltage controller derivative washout time constant (&lt;i&gt;Tb1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 12,45. Default: nullptr */
		CIMPP::Seconds tb1;

		/** \brief Time constant (&lt;i&gt;Te&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Time Constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;e2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds te2;

		/** \brief Controller follow up deadband (&lt;i&gt;Ti1&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU ti1;

		/** \brief Time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;i3&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 3. Default: nullptr */
		CIMPP::Seconds ti3;

		/** \brief Time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;i4&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds ti4;

		/** \brief Time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;r4&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds tr4;

		/** \brief Limiter (&lt;i&gt;Upmax&lt;/i&gt;) (&amp;gt; ExcELIN2.upmin).  Typical value = 3. Default: nullptr */
		CIMPP::PU upmax;

		/** \brief Limiter (&lt;i&gt;Upmin&lt;/i&gt;) (&amp;lt; ExcELIN2.upmax).  Typical value = 0. Default: nullptr */
		CIMPP::PU upmin;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (&lt;i&gt;Ve&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 3. Default: nullptr */
		CIMPP::PU ve1;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (&lt;i&gt;Ve&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0. Default: nullptr */
		CIMPP::PU ve2;

		/** \brief Excitation transformer effective reactance (&lt;i&gt;Xp&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU xp;

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

	BaseClass* ExcELIN2_factory();
}
#endif
