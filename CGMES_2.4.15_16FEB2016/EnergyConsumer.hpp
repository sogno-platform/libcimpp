#ifndef EnergyConsumer_H
#define EnergyConsumer_H
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
#include "PerCent.hpp"
#include "ReactivePower.hpp"

namespace CIMPP
{
	class LoadDynamics;
	class LoadResponseCharacteristic;

	/** \brief Generic user of energy - a  point of consumption on the power system model. */
	class EnergyConsumer : public ConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		EnergyConsumer();
		~EnergyConsumer() override;

		/** \brief Load dynamics model used to describe dynamic behavior of this energy consumer. Default: 0 */
		CIMPP::LoadDynamics* LoadDynamics;

		/** \brief The load response characteristic of this load.  If missing, this load is assumed to be constant power. Default: 0 */
		CIMPP::LoadResponseCharacteristic* LoadResponse;

		/** \brief Active power of the load. Load sign convention is used, i.e. positive sign means flow out from a node. For voltage dependent loads the value is at rated voltage. Starting value for a steady state solution. Default: nullptr */
		CIMPP::ActivePower p;

		/** \brief Active power of the load that is a fixed quantity. Load sign convention is used, i.e. positive sign means flow out from a node. Default: nullptr */
		CIMPP::ActivePower pfixed;

		/** \brief Fixed active power as per cent of load group fixed active power. Load sign convention is used, i.e. positive sign means flow out from a node. Default: nullptr */
		CIMPP::PerCent pfixedPct;

		/** \brief Reactive power of the load. Load sign convention is used, i.e. positive sign means flow out from a node. For voltage dependent loads the value is at rated voltage. Starting value for a steady state solution. Default: nullptr */
		CIMPP::ReactivePower q;

		/** \brief Reactive power of the load that is a fixed quantity. Load sign convention is used, i.e. positive sign means flow out from a node. Default: nullptr */
		CIMPP::ReactivePower qfixed;

		/** \brief Fixed reactive power as per cent of load group fixed reactive power. Load sign convention is used, i.e. positive sign means flow out from a node. Default: nullptr */
		CIMPP::PerCent qfixedPct;

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

	BaseClass* EnergyConsumer_factory();
}
#endif
