#ifndef WindTurbineType3or4IEC_H
#define WindTurbineType3or4IEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "WindTurbineType3or4Dynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

namespace CIMPP
{
	class WindContCurrLimIEC;
	class WindContQIEC;
	class WindProtectionIEC;

	/** \brief Parent class supporting relationships to IEC wind turbines Type 3 and 4 and wind plant including their control models. */
	class WindTurbineType3or4IEC : public WindTurbineType3or4Dynamics
	{
	public:
		/* constructor initialising all attributes to null */
		WindTurbineType3or4IEC();
		~WindTurbineType3or4IEC() override;

		/** \brief Wind control Q model associated with this wind turbine type 3 or 4 model. Default: 0 */
		CIMPP::WindContQIEC* WIndContQIEC;

		/** \brief Wind control current limitation model associated with this wind turbine type 3 or 4 model. Default: 0 */
		CIMPP::WindContCurrLimIEC* WindContCurrLimIEC;

		/** \brief Wind turbune protection model associated with this wind generator type 3 or 4 model. Default: 0 */
		CIMPP::WindProtectionIEC* WindProtectionIEC;

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

	BaseClass* WindTurbineType3or4IEC_factory();
}
#endif
