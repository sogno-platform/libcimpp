#ifndef WindContQLimIEC_H
#define WindContQLimIEC_H
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
	class WindTurbineType3or4IEC;

	/** \brief Constant Q limitation model. Reference: IEC 61400-27-1:2015, 5.6.5.9. */
	class WindContQLimIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindContQLimIEC();
		~WindContQLimIEC() override;

		/** \brief Wind generator type 3 or type 4 model with which this constant Q limitation model is associated. Default: 0 */
		CIMPP::WindTurbineType3or4IEC* WindTurbineType3or4IEC;

		/** \brief Maximum reactive power (&lt;i&gt;q&lt;/i&gt;&lt;i&gt;&lt;sub&gt;max&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; WindContQLimIEC.qmin). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU qmax;

		/** \brief Minimum reactive power (&lt;i&gt;q&lt;/i&gt;&lt;i&gt;&lt;sub&gt;min&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; WindContQLimIEC.qmax). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU qmin;

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

	BaseClass* WindContQLimIEC_factory();
}
#endif
