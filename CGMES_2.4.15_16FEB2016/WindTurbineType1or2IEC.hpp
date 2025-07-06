#ifndef WindTurbineType1or2IEC_H
#define WindTurbineType1or2IEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "WindTurbineType1or2Dynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

namespace CIMPP
{
	class WindMechIEC;
	class WindProtectionIEC;

	/** \brief Generator model for wind turbine of IEC Type 1 or Type 2 is a standard asynchronous generator model.  Reference: IEC Standard 614000-27-1 Section 6.6.3.1. */
	class WindTurbineType1or2IEC : public WindTurbineType1or2Dynamics
	{
	public:
		/* constructor initialising all attributes to null */
		WindTurbineType1or2IEC();
		~WindTurbineType1or2IEC() override;

		/** \brief Wind mechanical model associated with this wind generator type 1 or 2 model. Default: 0 */
		CIMPP::WindMechIEC* WindMechIEC;

		/** \brief Wind turbune protection model associated with this wind generator type 1 or 2 model. Default: 0 */
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

	BaseClass* WindTurbineType1or2IEC_factory();
}
#endif
