#ifndef LoadGenericNonLinear_H
#define LoadGenericNonLinear_H
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
#include "GenericNonLinearLoadModelKind.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Generic non-linear dynamic (GNLD) load. This model can be used in mid-term and long-term voltage stability simulations (i.e., to study voltage collapse), as it can replace a more detailed representation of aggregate load, including induction motors, thermostatically controlled and static loads. */
	class LoadGenericNonLinear : public LoadDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		LoadGenericNonLinear();
		~LoadGenericNonLinear() override;

		/** \brief Steady state voltage index for reactive power (&lt;i&gt;BS&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float bs;

		/** \brief Transient voltage index for reactive power (&lt;i&gt;BT&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float bt;

		/** \brief Type of generic non-linear load model. Default: 0 */
		CIMPP::GenericNonLinearLoadModelKind genericNonLinearLoadModelType;

		/** \brief Steady state voltage index for active power (&lt;i&gt;LS&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float ls;

		/** \brief Transient voltage index for active power (&lt;i&gt;LT&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float lt;

		/** \brief Time constant of lag function of active power (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;P&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0). Default: nullptr */
		CIMPP::Seconds tp;

		/** \brief Time constant of lag function of reactive power (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;Q&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0). Default: nullptr */
		CIMPP::Seconds tq;

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

	BaseClass* LoadGenericNonLinear_factory();
}
#endif
