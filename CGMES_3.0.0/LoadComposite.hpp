#ifndef LoadComposite_H
#define LoadComposite_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "LoadDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Float.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Combined static load and induction motor load effects. The dynamics of the motor are simplified by linearizing the induction machine equations. */
	class LoadComposite : public LoadDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		LoadComposite();
		~LoadComposite() override;

		/** \brief Active load-frequency dependence index (dynamic) (&lt;i&gt;Epfd&lt;/i&gt;).  Typical value = 1,5. Default: 0.0 */
		CIMPP::Float epfd;

		/** \brief Active load-frequency dependence index (static) (&lt;i&gt;Epfs&lt;/i&gt;).  Typical value = 1,5. Default: 0.0 */
		CIMPP::Float epfs;

		/** \brief Active load-voltage dependence index (dynamic) (&lt;i&gt;Epvd&lt;/i&gt;).  Typical value = 0,7. Default: 0.0 */
		CIMPP::Float epvd;

		/** \brief Active load-voltage dependence index (static) (&lt;i&gt;Epvs&lt;/i&gt;).  Typical value = 0,7. Default: 0.0 */
		CIMPP::Float epvs;

		/** \brief Reactive load-frequency dependence index (dynamic) (&lt;i&gt;Eqfd&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::Float eqfd;

		/** \brief Reactive load-frequency dependence index (static) (&lt;i&gt;Eqfs&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::Float eqfs;

		/** \brief Reactive load-voltage dependence index (dynamic) (&lt;i&gt;Eqvd&lt;/i&gt;).  Typical value = 2. Default: 0.0 */
		CIMPP::Float eqvd;

		/** \brief Reactive load-voltage dependence index (static) (&lt;i&gt;Eqvs&lt;/i&gt;).  Typical value = 2. Default: 0.0 */
		CIMPP::Float eqvs;

		/** \brief Inertia constant (&lt;i&gt;H&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 2,5. Default: nullptr */
		CIMPP::Seconds h;

		/** \brief Loading factor (&lt;i&gt;L&lt;/i&gt;&lt;i&gt;&lt;sub&gt;fac&lt;/sub&gt;&lt;/i&gt;). The ratio of initial &lt;i&gt;P&lt;/i&gt; to motor MVA base.  Typical value = 0,8. Default: 0.0 */
		CIMPP::Float lfac;

		/** \brief Fraction of constant-power load to be represented by this motor model (&lt;i&gt;P&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FRAC&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0,0 and &amp;lt;= 1,0).  Typical value = 0,5. Default: 0.0 */
		CIMPP::Float pfrac;

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

	BaseClass* LoadComposite_factory();
}
#endif
