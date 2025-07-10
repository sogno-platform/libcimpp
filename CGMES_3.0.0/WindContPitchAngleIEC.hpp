#ifndef WindContPitchAngleIEC_H
#define WindContPitchAngleIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "AngleDegrees.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class WindTurbineType3IEC;

	/** \brief Pitch angle control model. Reference: IEC 61400-27-1:2015, 5.6.5.2. */
	class WindContPitchAngleIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindContPitchAngleIEC();
		~WindContPitchAngleIEC() override;

		/** \brief Wind turbine type 3 model with which this pitch control model is associated. Default: 0 */
		CIMPP::WindTurbineType3IEC* WindTurbineType3IEC;

		/** \brief Maximum pitch positive ramp rate (&lt;i&gt;dtheta&lt;/i&gt;&lt;i&gt;&lt;sub&gt;max&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; WindContPitchAngleIEC.dthetamin). It is a type-dependent parameter. Unit = degrees / s. Default: 0.0 */
		CIMPP::Float dthetamax;

		/** \brief Maximum pitch negative ramp rate (&lt;i&gt;dtheta&lt;/i&gt;&lt;i&gt;&lt;sub&gt;min&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;)&lt;/i&gt; (&amp;lt; WindContPitchAngleIEC.dthetamax). It is a type-dependent parameter. Unit = degrees / s. Default: 0.0 */
		CIMPP::Float dthetamin;

		/** \brief Power PI controller integration gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;Ic&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU kic;

		/** \brief Speed PI controller integration gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;Iomega&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU kiomega;

		/** \brief Power PI controller proportional gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;Pc&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU kpc;

		/** \brief Speed PI controller proportional gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;Pomega&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU kpomega;

		/** \brief Pitch cross coupling gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;PX&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU kpx;

		/** \brief Maximum pitch angle (&lt;i&gt;theta&lt;/i&gt;&lt;i&gt;&lt;sub&gt;max&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; WindContPitchAngleIEC.thetamin). It is a type-dependent parameter. Default: nullptr */
		CIMPP::AngleDegrees thetamax;

		/** \brief Minimum pitch angle (&lt;i&gt;theta&lt;/i&gt;&lt;i&gt;&lt;sub&gt;min&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; WindContPitchAngleIEC.thetamax). It is a type-dependent parameter. Default: nullptr */
		CIMPP::AngleDegrees thetamin;

		/** \brief Pitch time constant (&lt;i&gt;ttheta&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds ttheta;

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

	BaseClass* WindContPitchAngleIEC_factory();
}
#endif
