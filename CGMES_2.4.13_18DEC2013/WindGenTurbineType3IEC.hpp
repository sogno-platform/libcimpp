#ifndef WindGenTurbineType3IEC_H
#define WindGenTurbineType3IEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "WindTurbineType3or4IEC.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "PU.hpp"

namespace CIMPP
{
	class WindAeroLinearIEC;
	class WindContPType3IEC;
	class WindContPitchAngleIEC;
	class WindMechIEC;

	/** \brief Generator model for wind turbines of IEC type 3A and 3B. */
	class WindGenTurbineType3IEC : public WindTurbineType3or4IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindGenTurbineType3IEC();
		~WindGenTurbineType3IEC() override;

		/** \brief Wind aerodynamic model associated with this wind generator type 3 model. Default: 0 */
		CIMPP::WindAeroLinearIEC* WindAeroLinearIEC;

		/** \brief Wind control P type 3 model associated with this wind turbine type 3 model. Default: 0 */
		CIMPP::WindContPType3IEC* WindContPType3IEC;

		/** \brief Wind control pitch angle model associated with this wind turbine type 3. Default: 0 */
		CIMPP::WindContPitchAngleIEC* WindContPitchAngleIEC;

		/** \brief Wind mechanical model associated with this wind turbine Type 3 model. Default: 0 */
		CIMPP::WindMechIEC* WindMechIEC;

		/** \brief Maximum active current ramp rate (di). It is project dependent parameter. Default: nullptr */
		CIMPP::PU dipmax;

		/** \brief Maximum reactive current ramp rate (di). It is project dependent parameter. Default: nullptr */
		CIMPP::PU diqmax;

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

	BaseClass* WindGenTurbineType3IEC_factory();
}
#endif
