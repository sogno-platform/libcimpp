#ifndef PFVArType1IEEEVArController_H
#define PFVArType1IEEEVArController_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PFVArControllerType1Dynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief IEEE VAR controller type 1 which operates by moving the voltage reference directly. Reference: IEEE 421.5-2005, 11.3. */
	class PFVArType1IEEEVArController : public PFVArControllerType1Dynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PFVArType1IEEEVArController();
		~PFVArType1IEEEVArController() override;

		/** \brief Var controller time delay (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;VARC&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 5. Default: nullptr */
		CIMPP::Seconds tvarc;

		/** \brief Synchronous machine power factor (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;VAR&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU vvar;

		/** \brief Var controller deadband (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;VARC_BW&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,02. Default: 0.0 */
		CIMPP::Float vvarcbw;

		/** \brief Var controller reference (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;VARREF&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU vvarref;

		/** \brief Maximum machine terminal voltage needed for pf/VAr controller to be enabled (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;VTMAX&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; PVFArType1IEEEVArController.vvtmin). Default: nullptr */
		CIMPP::PU vvtmax;

		/** \brief Minimum machine terminal voltage needed to enable pf/var controller (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;VTMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; PVFArType1IEEEVArController.vvtmax). Default: nullptr */
		CIMPP::PU vvtmin;

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

	BaseClass* PFVArType1IEEEVArController_factory();
}
#endif
