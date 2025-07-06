#ifndef ExcREXS_H
#define ExcREXS_H
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
#include "ExcREXSFeedbackSignalKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief General purpose rotating excitation system.  This model can be used to represent a wide range of excitation systems whose DC power source is an AC or DC generator. It encompasses IEEE type AC1, AC2, DC1, and DC2 excitation system models. */
	class ExcREXS : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcREXS();
		~ExcREXS() override;

		/** \brief Field voltage value 1 (&lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;).  Typical value = 3. Default: nullptr */
		CIMPP::PU e1;

		/** \brief Field voltage value 2 (&lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;).  Typical value = 4. Default: nullptr */
		CIMPP::PU e2;

		/** \brief Rate feedback signal flag (&lt;i&gt;fbf&lt;/i&gt;). Typical value = fieldCurrent. Default: 0 */
		CIMPP::ExcREXSFeedbackSignalKind fbf;

		/** \brief Limit type flag (&lt;i&gt;Flimf&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU flimf;

		/** \brief Rectifier regulation factor (&lt;i&gt;Kc&lt;/i&gt;).  Typical value = 0,05. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Exciter regulation factor (&lt;i&gt;Kd&lt;/i&gt;).  Typical value = 2. Default: nullptr */
		CIMPP::PU kd;

		/** \brief Exciter field proportional constant (&lt;i&gt;Ke&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Field voltage feedback gain (&lt;i&gt;Kefd&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kefd;

		/** \brief Rate feedback gain (&lt;i&gt;Kf&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds kf;

		/** \brief Field voltage controller feedback gain (&lt;i&gt;Kh&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kh;

		/** \brief Field current regulator integral gain (&lt;i&gt;Kii&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kii;

		/** \brief Field current regulator proportional gain (&lt;i&gt;Kip&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU kip;

		/** \brief Coefficient to allow different usage of the model-speed coefficient (&lt;i&gt;Ks&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU ks;

		/** \brief Voltage regulator integral gain (&lt;i&gt;Kvi&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kvi;

		/** \brief Voltage regulator proportional gain (&lt;i&gt;Kvp&lt;/i&gt;).  Typical value = 2800. Default: nullptr */
		CIMPP::PU kvp;

		/** \brief V/Hz limiter gain (&lt;i&gt;Kvphz&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kvphz;

		/** \brief Pickup speed of V/Hz limiter (&lt;i&gt;Nvphz&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU nvphz;

		/** \brief Saturation factor at &lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;&lt;i&gt; &lt;/i&gt;(&lt;i&gt;Se&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,0001. Default: nullptr */
		CIMPP::PU se1;

		/** \brief Saturation factor at &lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt; (&lt;i&gt;Se&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,001. Default: nullptr */
		CIMPP::PU se2;

		/** \brief Voltage regulator time constant (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt;= 0).  If = 0, block is bypassed.  Typical value = 0,01. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Lag time constant (&lt;i&gt;Tb1&lt;/i&gt;) (&amp;gt;= 0).  If = 0, block is bypassed.  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tb1;

		/** \brief Lag time constant (&lt;i&gt;Tb2&lt;/i&gt;) (&amp;gt;= 0).  If = 0, block is bypassed.  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tb2;

		/** \brief Lead time constant (&lt;i&gt;Tc1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tc1;

		/** \brief Lead time constant (&lt;i&gt;Tc2&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tc2;

		/** \brief Exciter field time constant (&lt;i&gt;Te&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1,2. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Rate feedback time constant (&lt;i&gt;Tf&lt;/i&gt;) (&amp;gt;= 0).  If = 0, the feedback path is not used.  Typical value = 1. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief Feedback lead time constant (&lt;i&gt;Tf1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tf1;

		/** \brief Feedback lag time constant (&lt;i&gt;Tf2&lt;/i&gt;) (&amp;gt;= 0).  If = 0, block is bypassed.  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tf2;

		/** \brief Field current bridge time constant (&lt;i&gt;Tp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tp;

		/** \brief Maximum compounding voltage (&lt;i&gt;Vcmax&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU vcmax;

		/** \brief Maximum exciter field current (&lt;i&gt;Vfmax&lt;/i&gt;) (&amp;gt; ExcREXS.vfmin).  Typical value = 47. Default: nullptr */
		CIMPP::PU vfmax;

		/** \brief Minimum exciter field current (&lt;i&gt;Vfmin&lt;/i&gt;) (&amp;lt; ExcREXS.vfmax).  Typical value = -20. Default: nullptr */
		CIMPP::PU vfmin;

		/** \brief Voltage regulator input limit (&lt;i&gt;Vimax&lt;/i&gt;).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU vimax;

		/** \brief Maximum controller output (V&lt;i&gt;rmax&lt;/i&gt;) (&amp;gt; ExcREXS.vrmin).  Typical value = 47. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum controller output (&lt;i&gt;Vrmin&lt;/i&gt;) (&amp;lt; ExcREXS.vrmax).  Typical value = -20. Default: nullptr */
		CIMPP::PU vrmin;

		/** \brief Exciter compounding reactance (&lt;i&gt;Xc&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU xc;

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

	BaseClass* ExcREXS_factory();
}
#endif
