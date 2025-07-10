#ifndef EnergySource_H
#define EnergySource_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ConductingEquipment.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "ActivePower.hpp"
#include "AngleRadians.hpp"
#include "Reactance.hpp"
#include "ReactivePower.hpp"
#include "Resistance.hpp"
#include "Voltage.hpp"

namespace CIMPP
{
	class EnergySchedulingType;
	class WindTurbineType3or4Dynamics;

	/** \brief A generic equivalent for an energy supplier on a transmission or distribution voltage level. */
	class EnergySource : public ConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		EnergySource();
		~EnergySource() override;

		/** \brief Energy Source of a particular Energy Scheduling Type Default: 0 */
		CIMPP::EnergySchedulingType* EnergySchedulingType;

		/** \brief Wind generator Type 3 or 4 dynamics model associated with this energy source. Default: 0 */
		CIMPP::WindTurbineType3or4Dynamics* WindTurbineType3or4Dynamics;

		/** \brief High voltage source active injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for steady state solutions. Default: nullptr */
		CIMPP::ActivePower activePower;

		/** \brief Phase-to-phase nominal voltage. Default: nullptr */
		CIMPP::Voltage nominalVoltage;

		/** \brief Positive sequence Thevenin resistance. Default: nullptr */
		CIMPP::Resistance r;

		/** \brief Zero sequence Thevenin resistance. Default: nullptr */
		CIMPP::Resistance r0;

		/** \brief High voltage source reactive injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for steady state solutions. Default: nullptr */
		CIMPP::ReactivePower reactivePower;

		/** \brief Negative sequence Thevenin resistance. Default: nullptr */
		CIMPP::Resistance rn;

		/** \brief Phase angle of a-phase open circuit. Default: nullptr */
		CIMPP::AngleRadians voltageAngle;

		/** \brief Phase-to-phase open circuit voltage magnitude. Default: nullptr */
		CIMPP::Voltage voltageMagnitude;

		/** \brief Positive sequence Thevenin reactance. Default: nullptr */
		CIMPP::Reactance x;

		/** \brief Zero sequence Thevenin reactance. Default: nullptr */
		CIMPP::Reactance x0;

		/** \brief Negative sequence Thevenin reactance. Default: nullptr */
		CIMPP::Reactance xn;

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

	BaseClass* EnergySource_factory();
}
#endif
