#ifndef ExcPIC_H
#define ExcPIC_H
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

	/** \brief Proportional/integral regulator excitation system.  This model can be used to represent excitation systems with a proportional-integral (PI) voltage regulator controller. */
	class ExcPIC : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcPIC();
		~ExcPIC() override;

		/** \brief Field voltage value 1 (&lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU e1;

		/** \brief Field voltage value 2 (&lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU e2;

		/** \brief Exciter maximum limit (&lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;fdmax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; ExcPIC.efdmin).  Typical value = 8. Default: nullptr */
		CIMPP::PU efdmax;

		/** \brief Exciter minimum limit (&lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;fdmin&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; ExcPIC.efdmax).  Typical value = -0,87. Default: nullptr */
		CIMPP::PU efdmin;

		/** \brief PI controller gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;a&lt;/sub&gt;&lt;/i&gt;).  Typical value = 3,15. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Exciter regulation factor (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;c&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,08. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Exciter constant (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;e&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Rate feedback gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;f&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kf;

		/** \brief Current source gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;i&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU ki;

		/** \brief Potential source gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;p&lt;/sub&gt;&lt;/i&gt;).  Typical value = 6,5. Default: nullptr */
		CIMPP::PU kp;

		/** \brief Saturation factor at &lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt; (&lt;i&gt;Se&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU se1;

		/** \brief Saturation factor at &lt;i&gt;E&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt; (&lt;i&gt;Se&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU se2;

		/** \brief PI controller time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;a1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds ta1;

		/** \brief Voltage regulator time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;a2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,01. Default: nullptr */
		CIMPP::Seconds ta2;

		/** \brief Lead time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;a3&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds ta3;

		/** \brief Lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;a4&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds ta4;

		/** \brief Exciter time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;e&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Rate feedback time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;f1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tf1;

		/** \brief Rate feedback lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;f2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tf2;

		/** \brief PI maximum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;r1&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU vr1;

		/** \brief PI minimum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;r2&lt;/sub&gt;&lt;/i&gt;).  Typical value = -0,87. Default: nullptr */
		CIMPP::PU vr2;

		/** \brief Voltage regulator maximum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;rmax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; ExcPIC.vrmin).  Typical value = 1. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Voltage regulator minimum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;rmin&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; ExcPIC.vrmax).  Typical value = -0,87. Default: nullptr */
		CIMPP::PU vrmin;

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

	BaseClass* ExcPIC_factory();
}
#endif
