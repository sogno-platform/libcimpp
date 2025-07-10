#ifndef ExcDC3A_H
#define ExcDC3A_H
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
#include "Boolean.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Modified IEEE DC3A direct current commutator exciter with speed input, and deadband.  DC old type 4. */
	class ExcDC3A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcDC3A();
		~ExcDC3A() override;

		/** \brief Exciter voltage at which exciter saturation is defined (&lt;i&gt;Efd&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 2,6. Default: nullptr */
		CIMPP::PU efd1;

		/** \brief Exciter voltage at which exciter saturation is defined (&lt;i&gt;Efd&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 3,45. Default: nullptr */
		CIMPP::PU efd2;

		/** \brief (&lt;i&gt;Efdlim&lt;/i&gt;). true = exciter output limiter is active false = exciter output limiter not active. Typical value = true. Default: false */
		CIMPP::Boolean efdlim;

		/** \brief Maximum voltage exciter output limiter (&lt;i&gt;Efdmax&lt;/i&gt;) (&amp;gt; ExcDC3A.efdmin).  Typical value = 99. Default: nullptr */
		CIMPP::PU efdmax;

		/** \brief Minimum voltage exciter output limiter (&lt;i&gt;Efdmin&lt;/i&gt;) (&amp;lt; ExcDC3A.efdmax).  Typical value = -99. Default: nullptr */
		CIMPP::PU efdmin;

		/** \brief (&lt;i&gt;exclim&lt;/i&gt;).  IEEE standard is ambiguous about lower limit on exciter output. true = a lower limit of zero is applied to integrator output false = a lower limit of zero not applied to integrator output. Typical value = true. Default: false */
		CIMPP::Boolean exclim;

		/** \brief Exciter constant related to self-excited field (&lt;i&gt;Ke&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Deadband (&lt;i&gt;Kr&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kr;

		/** \brief Coefficient to allow different usage of the model-speed coefficient (&lt;i&gt;Ks&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU ks;

		/** \brief Fast raise/lower contact setting (&lt;i&gt;Kv&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::PU kv;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, &lt;i&gt;Efd&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt; (&lt;i&gt;Se[Efd&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;]&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Float seefd1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, &lt;i&gt;Efd&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt; (&lt;i&gt;Se[Efd&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;]&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,35. Default: 0.0 */
		CIMPP::Float seefd2;

		/** \brief Exciter time constant, integration rate associated with exciter control (&lt;i&gt;Te&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1,83. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Rheostat travel time (&lt;i&gt;Trh&lt;/i&gt;) (&amp;gt; 0).  Typical value = 20. Default: nullptr */
		CIMPP::Seconds trh;

		/** \brief Maximum voltage regulator output (&lt;i&gt;Vrmax&lt;/i&gt;) (&amp;gt; 0).  Typical value = 5. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (&lt;i&gt;Vrmin&lt;/i&gt;) (&amp;lt;= 0).  Typical value = 0. Default: nullptr */
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

	BaseClass* ExcDC3A_factory();
}
#endif
