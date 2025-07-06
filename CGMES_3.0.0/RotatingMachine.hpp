#ifndef RotatingMachine_H
#define RotatingMachine_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "RegulatingCondEq.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "ActivePower.hpp"
#include "ApparentPower.hpp"
#include "Float.hpp"
#include "ReactivePower.hpp"
#include "Voltage.hpp"

namespace CIMPP
{
	class GeneratingUnit;
	class HydroPump;

	/** \brief A rotating machine which may be used as a generator or motor. */
	class RotatingMachine : public RegulatingCondEq
	{
	public:
		/* constructor initialising all attributes to null */
		RotatingMachine();
		~RotatingMachine() override;

		/** \brief A synchronous machine may operate as a generator and as such becomes a member of a generating unit. Default: 0 */
		CIMPP::GeneratingUnit* GeneratingUnit;

		/** \brief The synchronous machine drives the turbine which moves the water from a low elevation to a higher elevation. The direction of machine rotation for pumping may or may not be the same as for generating. Default: 0 */
		CIMPP::HydroPump* HydroPump;

		/** \brief Active power injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for a steady state solution. Default: nullptr */
		CIMPP::ActivePower p;

		/** \brief Reactive power injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for a steady state solution. Default: nullptr */
		CIMPP::ReactivePower q;

		/** \brief Power factor (nameplate data). It is primarily used for short circuit data exchange according to IEC 60909. The attribute cannot be a negative value. Default: 0.0 */
		CIMPP::Float ratedPowerFactor;

		/** \brief Nameplate apparent power rating for the unit. The attribute shall have a positive value. Default: nullptr */
		CIMPP::ApparentPower ratedS;

		/** \brief Rated voltage (nameplate data, Ur in IEC 60909-0). It is primarily used for short circuit data exchange according to IEC 60909. The attribute shall be a positive value. Default: nullptr */
		CIMPP::Voltage ratedU;

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

	BaseClass* RotatingMachine_factory();
}
#endif
