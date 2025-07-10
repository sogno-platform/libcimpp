#ifndef WindGeneratingUnit_H
#define WindGeneratingUnit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "GeneratingUnit.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "WindGenUnitKind.hpp"

namespace CIMPP
{
	class WindPowerPlant;

	/** \brief A wind driven generating unit, connected to the grid by means of a rotating machine.  May be used to represent a single turbine or an aggregation. */
	class WindGeneratingUnit : public GeneratingUnit
	{
	public:
		/* constructor initialising all attributes to null */
		WindGeneratingUnit();
		~WindGeneratingUnit() override;

		/** \brief A wind power plant may have wind generating units. Default: 0 */
		CIMPP::WindPowerPlant* WindPowerPlant;

		/** \brief The kind of wind generating unit. Default: 0 */
		CIMPP::WindGenUnitKind windGenUnitType;

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

	BaseClass* WindGeneratingUnit_factory();
}
#endif
