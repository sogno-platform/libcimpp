#ifndef HydroPowerPlant_H
#define HydroPowerPlant_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PowerSystemResource.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "HydroPlantStorageKind.hpp"

namespace CIMPP
{
	class HydroGeneratingUnit;
	class HydroPump;

	/** \brief A hydro power station which can generate or pump. When generating, the generator turbines receive water from an upper reservoir. When pumping, the pumps receive their water from a lower reservoir. */
	class HydroPowerPlant : public PowerSystemResource
	{
	public:
		/* constructor initialising all attributes to null */
		HydroPowerPlant();
		~HydroPowerPlant() override;

		/** \brief The hydro generating unit belongs to a hydro power plant. Default: 0 */
		std::list<CIMPP::HydroGeneratingUnit*> HydroGeneratingUnits;

		/** \brief The hydro pump may be a member of a pumped storage plant or a pump for distributing water. Default: 0 */
		std::list<CIMPP::HydroPump*> HydroPumps;

		/** \brief The type of hydro power plant water storage. Default: 0 */
		CIMPP::HydroPlantStorageKind hydroPlantStorageType;

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

	BaseClass* HydroPowerPlant_factory();
}
#endif
