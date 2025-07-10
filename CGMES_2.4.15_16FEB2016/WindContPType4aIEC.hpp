#ifndef WindContPType4aIEC_H
#define WindContPType4aIEC_H
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
#include "Seconds.hpp"

namespace CIMPP
{
	class WindTurbineType4aIEC;

	/** \brief P control model Type 4A.  Reference: IEC Standard 61400-27-1 Section 6.6.5.4. */
	class WindContPType4aIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindContPType4aIEC();
		~WindContPType4aIEC() override;

		/** \brief Wind turbine type 4A model with which this wind control P type 4A model is associated. Default: 0 */
		CIMPP::WindTurbineType4aIEC* WindTurbineType4aIEC;

		/** \brief Maximum wind turbine power ramp rate (). It is project dependent parameter. Default: nullptr */
		CIMPP::PU dpmax;

		/** \brief Time constant in power order lag (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds tpord;

		/** \brief Voltage measurement filter time constant (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds tufilt;

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

	BaseClass* WindContPType4aIEC_factory();
}
#endif
