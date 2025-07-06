#ifndef WindAeroTwoDimIEC_H
#define WindAeroTwoDimIEC_H
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
#include "PU.hpp"

namespace CIMPP
{
	class WindTurbineType3IEC;

	/** \brief Two-dimensional aerodynamic model.   Reference: IEC 61400-27-1:2015, 5.6.1.3. */
	class WindAeroTwoDimIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindAeroTwoDimIEC();
		~WindAeroTwoDimIEC() override;

		/** \brief Wind turbine type 3 model with which this wind aerodynamic model is associated. Default: 0 */
		CIMPP::WindTurbineType3IEC* WindTurbineType3IEC;

		/** \brief Partial derivative of aerodynamic power with respect to changes in WTR speed (&lt;i&gt;dp&lt;/i&gt;&lt;i&gt;&lt;sub&gt;omega&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU dpomega;

		/** \brief Partial derivative of aerodynamic power with respect to changes in pitch angle (&lt;i&gt;dp&lt;/i&gt;&lt;i&gt;&lt;sub&gt;theta&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU dptheta;

		/** \brief Partial derivative (&lt;i&gt;dp&lt;/i&gt;&lt;i&gt;&lt;sub&gt;v1&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU dpv1;

		/** \brief Rotor speed if the wind turbine is not derated (&lt;i&gt;omega&lt;/i&gt;&lt;i&gt;&lt;sub&gt;0&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU omegazero;

		/** \brief Available aerodynamic power (&lt;i&gt;p&lt;/i&gt;&lt;i&gt;&lt;sub&gt;avail&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;)&lt;/i&gt;. It is a case-dependent parameter. Default: nullptr */
		CIMPP::PU pavail;

		/** \brief Blade angle at twice rated wind speed (&lt;i&gt;theta&lt;/i&gt;&lt;i&gt;&lt;sub&gt;v2&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::AngleDegrees thetav2;

		/** \brief Pitch angle if the wind turbine is not derated (&lt;i&gt;theta&lt;/i&gt;&lt;i&gt;&lt;sub&gt;0&lt;/sub&gt;&lt;/i&gt;). It is a case-dependent parameter. Default: nullptr */
		CIMPP::AngleDegrees thetazero;

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

	BaseClass* WindAeroTwoDimIEC_factory();
}
#endif
