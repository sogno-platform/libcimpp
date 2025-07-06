#ifndef WindProtectionIEC_H
#define WindProtectionIEC_H
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
	class WindTurbineType1or2IEC;
	class WindTurbineType3or4IEC;

	/** \brief The grid protection model includes protection against over and under voltage, and against over and under frequency.  Reference: IEC Standard 614000-27-1 Section 6.6.6. */
	class WindProtectionIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindProtectionIEC();
		~WindProtectionIEC() override;

		/** \brief Wind generator type 1 or 2 model with which this wind turbine protection model is associated. Default: 0 */
		CIMPP::WindTurbineType1or2IEC* WindTurbineType1or2IEC;

		/** \brief Wind generator type 3 or 4 model with which this wind turbine protection model is associated. Default: 0 */
		CIMPP::WindTurbineType3or4IEC* WindTurbineType3or4IEC;

		/** \brief Set of wind turbine over frequency protection levels (). It is project dependent parameter. Default: nullptr */
		CIMPP::PU fover;

		/** \brief Set of wind turbine under frequency protection levels (). It is project dependent parameter. Default: nullptr */
		CIMPP::PU funder;

		/** \brief Set of corresponding wind turbine over frequency protection disconnection times (). It is project dependent parameter. Default: nullptr */
		CIMPP::Seconds tfover;

		/** \brief Set of corresponding wind turbine under frequency protection disconnection times (). It is project dependent parameter. Default: nullptr */
		CIMPP::Seconds tfunder;

		/** \brief Set of corresponding wind turbine over voltage protection disconnection times (). It is project dependent parameter. Default: nullptr */
		CIMPP::Seconds tuover;

		/** \brief Set of corresponding wind turbine under voltage protection disconnection times (). It is project dependent parameter. Default: nullptr */
		CIMPP::Seconds tuunder;

		/** \brief Set of wind turbine over voltage protection levels (). It is project dependent parameter. Default: nullptr */
		CIMPP::PU uover;

		/** \brief Set of wind turbine under voltage protection levels (). It is project dependent parameter. Default: nullptr */
		CIMPP::PU uunder;

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

	BaseClass* WindProtectionIEC_factory();
}
#endif
