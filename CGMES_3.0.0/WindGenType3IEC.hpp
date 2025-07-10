#ifndef WindGenType3IEC_H
#define WindGenType3IEC_H
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
#include "PU.hpp"

namespace CIMPP
{
	class WindTurbineType3IEC;

	/** \brief Parent class supporting relationships to IEC wind turbines type 3 generator models of IEC type 3A and 3B. */
	class WindGenType3IEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindGenType3IEC();
		~WindGenType3IEC() override;

		/** \brief Wind turbine type 3 model with which this wind generator type 3 is associated. Default: 0 */
		CIMPP::WindTurbineType3IEC* WindTurbineType3IEC;

		/** \brief Maximum active current ramp rate (&lt;i&gt;di&lt;/i&gt;&lt;i&gt;&lt;sub&gt;pmax&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU dipmax;

		/** \brief Maximum reactive current ramp rate (&lt;i&gt;di&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qmax&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU diqmax;

		/** \brief Electromagnetic transient reactance (&lt;i&gt;x&lt;/i&gt;&lt;i&gt;&lt;sub&gt;S&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU xs;

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

	BaseClass* WindGenType3IEC_factory();
}
#endif
