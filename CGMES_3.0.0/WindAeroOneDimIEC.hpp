#ifndef WindAeroOneDimIEC_H
#define WindAeroOneDimIEC_H
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

namespace CIMPP
{
	class WindTurbineType3IEC;

	/** \brief One-dimensional aerodynamic model.   Reference: IEC 61400-27-1:2015, 5.6.1.2. */
	class WindAeroOneDimIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindAeroOneDimIEC();
		~WindAeroOneDimIEC() override;

		/** \brief Wind turbine type 3 model with which this wind aerodynamic model is associated. Default: 0 */
		CIMPP::WindTurbineType3IEC* WindTurbineType3IEC;

		/** \brief Aerodynamic gain (&lt;i&gt;k&lt;/i&gt;&lt;i&gt;&lt;sub&gt;a&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::Float ka;

		/** \brief Initial pitch angle (&lt;i&gt;theta&lt;/i&gt;&lt;i&gt;&lt;sub&gt;omega0&lt;/sub&gt;&lt;/i&gt;). It is a case-dependent parameter. Default: nullptr */
		CIMPP::AngleDegrees thetaomega;

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

	BaseClass* WindAeroOneDimIEC_factory();
}
#endif
