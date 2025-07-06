#ifndef WindTurbineType3IEC_H
#define WindTurbineType3IEC_H
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

namespace CIMPP
{
	class WindAeroOneDimIEC;
	class WindAeroTwoDimIEC;
	class WindContPType3IEC;
	class WindContPitchAngleIEC;
	class WindGenType3IEC;
	class WindMechIEC;

	/** \brief Parent class supporting relationships to IEC wind turbines type 3 including their control models. */
	class WindTurbineType3IEC : public WindTurbineType3or4IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindTurbineType3IEC();
		~WindTurbineType3IEC() override;

		/** \brief Wind aerodynamic model associated with this wind generator type 3 model. Default: 0 */
		CIMPP::WindAeroOneDimIEC* WindAeroOneDimIEC;

		/** \brief Wind aerodynamic model associated with this wind turbine type 3 model. Default: 0 */
		CIMPP::WindAeroTwoDimIEC* WindAeroTwoDimIEC;

		/** \brief Wind control P type 3 model associated with this wind turbine type 3 model. Default: 0 */
		CIMPP::WindContPType3IEC* WindContPType3IEC;

		/** \brief Wind control pitch angle model associated with this wind turbine type 3. Default: 0 */
		CIMPP::WindContPitchAngleIEC* WindContPitchAngleIEC;

		/** \brief Wind generator type 3 model associated with this wind turbine type 3 model. Default: 0 */
		CIMPP::WindGenType3IEC* WindGenType3IEC;

		/** \brief Wind mechanical model associated with this wind turbine type 3 model. Default: 0 */
		CIMPP::WindMechIEC* WindMechIEC;

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

	BaseClass* WindTurbineType3IEC_factory();
}
#endif
