#ifndef ExcST3A_H
#define ExcST3A_H
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
#include "AngleDegrees.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Modified IEEE ST3A static excitation system with added speed multiplier. */
	class ExcST3A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcST3A();
		~ExcST3A() override;

		/** \brief Maximum AVR output (&lt;i&gt;Efdmax&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 6,9. Default: nullptr */
		CIMPP::PU efdmax;

		/** \brief Rectifier loading factor proportional to commutating reactance (&lt;i&gt;Kc&lt;/i&gt;) (&amp;gt;= 0). Typical value = 1,1. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Feedback gain constant of the inner loop field regulator (&lt;i&gt;Kg&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::PU kg;

		/** \brief Potential circuit gain coefficient (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;i&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 4,83. Default: nullptr */
		CIMPP::PU ki;

		/** \brief AVR gain (&lt;i&gt;Kj&lt;/i&gt;) (&amp;gt; 0).  Typical value = 200. Default: nullptr */
		CIMPP::PU kj;

		/** \brief Forward gain constant of the inner loop field regulator (&lt;i&gt;Km&lt;/i&gt;) (&amp;gt; 0).  Typical value = 7,04. Default: nullptr */
		CIMPP::PU km;

		/** \brief Potential source gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;p&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 4,37. Default: nullptr */
		CIMPP::PU kp;

		/** \brief Coefficient to allow different usage of the model-speed coefficient (&lt;i&gt;Ks&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU ks;

		/** \brief Coefficient to allow different usage of the model-speed coefficient (&lt;i&gt;Ks1&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU ks1;

		/** \brief Voltage regulator time constant (&lt;i&gt;Tb&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 6,67. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (&lt;i&gt;Tc&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Potential circuit phase angle (&lt;i&gt;theta&lt;/i&gt;&lt;i&gt;&lt;sub&gt;p&lt;/sub&gt;&lt;/i&gt;).  Typical value = 20. Default: nullptr */
		CIMPP::AngleDegrees thetap;

		/** \brief Forward time constant of inner loop field regulator (&lt;i&gt;Tm&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds tm;

		/** \brief Maximum excitation voltage (&lt;i&gt;Vbmax&lt;/i&gt;) (&amp;gt; 0).  Typical value = 8,63. Default: nullptr */
		CIMPP::PU vbmax;

		/** \brief Maximum inner loop feedback voltage (&lt;i&gt;Vgmax&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 6,53. Default: nullptr */
		CIMPP::PU vgmax;

		/** \brief Maximum voltage regulator input limit (&lt;i&gt;Vimax&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,2. Default: nullptr */
		CIMPP::PU vimax;

		/** \brief Minimum voltage regulator input limit (&lt;i&gt;Vimin&lt;/i&gt;) (&amp;lt; 0).  Typical value = -0,2. Default: nullptr */
		CIMPP::PU vimin;

		/** \brief Maximum voltage regulator output (&lt;i&gt;Vrmax&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (&lt;i&gt;Vrmin&lt;/i&gt;) (&amp;lt; 0).  Typical value = -1. Default: nullptr */
		CIMPP::PU vrmin;

		/** \brief Reactance associated with potential source (&lt;i&gt;Xl&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,09. Default: nullptr */
		CIMPP::PU xl;

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

	BaseClass* ExcST3A_factory();
}
#endif
