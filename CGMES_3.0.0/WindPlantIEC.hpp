#ifndef WindPlantIEC_H
#define WindPlantIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "WindPlantDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

namespace CIMPP
{
	class WindPlantFreqPcontrolIEC;
	class WindPlantReactiveControlIEC;

	/** \brief Simplified IEC type plant level model.  Reference: IEC 61400-27-1:2015, Annex D. */
	class WindPlantIEC : public WindPlantDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		WindPlantIEC();
		~WindPlantIEC() override;

		/** \brief Wind plant frequency and active power control model associated with this wind plant. Default: 0 */
		CIMPP::WindPlantFreqPcontrolIEC* WindPlantFreqPcontrolIEC;

		/** \brief Wind plant model with which this wind reactive control is associated. Default: 0 */
		CIMPP::WindPlantReactiveControlIEC* WindPlantReactiveControlIEC;

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

	BaseClass* WindPlantIEC_factory();
}
#endif
