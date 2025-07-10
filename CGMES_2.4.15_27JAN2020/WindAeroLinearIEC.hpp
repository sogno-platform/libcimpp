#ifndef WindAeroLinearIEC_H
#define WindAeroLinearIEC_H
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
#include "AngleDegrees.hpp"
#include "PU.hpp"

namespace CIMPP
{
	class WindGenTurbineType3IEC;

	/** \brief The linearised aerodynamic model.    Reference: IEC Standard 614000-27-1 Section 6.6.1.2. */
	class WindAeroLinearIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindAeroLinearIEC();
		~WindAeroLinearIEC() override;

		/** \brief Wind generator type 3 model with which this wind aerodynamic model is associated. Default: 0 */
		CIMPP::WindGenTurbineType3IEC* WindGenTurbineType3IEC;

		/** \brief Partial derivative of aerodynamic power with respect to changes in WTR speed (). It is case dependent parameter. Default: nullptr */
		CIMPP::PU dpomega;

		/** \brief Partial derivative of aerodynamic power with respect to changes in pitch angle (). It is case dependent parameter. Default: nullptr */
		CIMPP::PU dptheta;

		/** \brief Rotor speed if the wind turbine is not derated (). It is case dependent parameter. Default: nullptr */
		CIMPP::PU omegazero;

		/** \brief Available aerodynamic power (). It is case dependent parameter. Default: nullptr */
		CIMPP::PU pavail;

		/** \brief Pitch angle if the wind turbine is not derated (). It is case dependent parameter. Default: nullptr */
		CIMPP::AngleDegrees thetazero;

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

	BaseClass* WindAeroLinearIEC_factory();
}
#endif
