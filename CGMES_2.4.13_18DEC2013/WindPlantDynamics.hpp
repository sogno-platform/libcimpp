#ifndef WindPlantDynamics_H
#define WindPlantDynamics_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "DynamicsFunctionBlock.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

namespace CIMPP
{
	class RemoteInputSignal;
	class WindTurbineType3or4Dynamics;

	/** \brief Parent class supporting relationships to wind turbines Type 3 and 4 and wind plant IEC and user defined wind plants including their control models. */
	class WindPlantDynamics : public DynamicsFunctionBlock
	{
	public:
		/* constructor initialising all attributes to null */
		WindPlantDynamics();
		~WindPlantDynamics() override;

		/** \brief The wind plant using the remote signal. Default: 0 */
		CIMPP::RemoteInputSignal* RemoteInputSignal;

		/** \brief The wind turbine type 3 or 4 associated with this wind plant. Default: 0 */
		std::list<CIMPP::WindTurbineType3or4Dynamics*> WindTurbineType3or4Dynamics;

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

	BaseClass* WindPlantDynamics_factory();
}
#endif
