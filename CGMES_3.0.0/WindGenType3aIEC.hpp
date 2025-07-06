#ifndef WindGenType3aIEC_H
#define WindGenType3aIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "WindGenType3IEC.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Float.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class WindTurbineType4IEC;

	/** \brief IEC type 3A generator set model. Reference: IEC 61400-27-1:2015, 5.6.3.2. */
	class WindGenType3aIEC : public WindGenType3IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindGenType3aIEC();
		~WindGenType3aIEC() override;

		/** \brief Wind turbine type 4 model with which this wind generator type 3A model is associated. Default: 0 */
		CIMPP::WindTurbineType4IEC* WindTurbineType4IEC;

		/** \brief Current PI controller proportional gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;Pc&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::Float kpc;

		/** \brief Current PI controller integration time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;Ic&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds tic;

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

	BaseClass* WindGenType3aIEC_factory();
}
#endif
