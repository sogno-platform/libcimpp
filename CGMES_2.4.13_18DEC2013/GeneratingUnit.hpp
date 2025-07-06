#ifndef GeneratingUnit_H
#define GeneratingUnit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "Equipment.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "ActivePower.hpp"
#include "GeneratorControlSource.hpp"
#include "Money.hpp"
#include "PerCent.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{
	class ControlAreaGeneratingUnit;
	class GrossToNetActivePowerCurve;
	class RotatingMachine;

	/** \brief A single or set of synchronous machines for converting mechanical power into alternating-current power. For example, individual machines within a set may be defined for scheduling purposes while a single control signal is derived for the set. In this case there would be a GeneratingUnit for each member of the set and an additional GeneratingUnit corresponding to the set. */
	class GeneratingUnit : public Equipment
	{
	public:
		/* constructor initialising all attributes to null */
		GeneratingUnit();
		~GeneratingUnit() override;

		/** \brief ControlArea specifications for this generating unit. Default: 0 */
		std::list<CIMPP::ControlAreaGeneratingUnit*> ControlAreaGeneratingUnit;

		/** \brief A generating unit may have a gross active power to net active power curve, describing the losses and auxiliary power requirements of the unit. Default: 0 */
		std::list<CIMPP::GrossToNetActivePowerCurve*> GrossToNetActivePowerCurves;

		/** \brief A synchronous machine may operate as a generator and as such becomes a member of a generating unit. Default: 0 */
		std::list<CIMPP::RotatingMachine*> RotatingMachine;

		/** \brief The source of controls for a generating unit. Default: 0 */
		CIMPP::GeneratorControlSource genControlSource;

		/** \brief Governor Speed Changer Droop.   This is the change in generator power output divided by the change in frequency normalized by the nominal power of the generator and the nominal frequency and expressed in percent and negated. A positive value of speed change droop provides additional generator output upon a drop in frequency. Default: nullptr */
		CIMPP::PerCent governorSCD;

		/** \brief Default initial active power  which is used to store a powerflow result for the initial active power for this unit in this network configuration. Default: nullptr */
		CIMPP::ActivePower initialP;

		/** \brief Generating unit long term economic participation factor. Default: nullptr */
		CIMPP::Simple_Float longPF;

		/** \brief This is the maximum operating active power limit the dispatcher can enter for this unit. Default: nullptr */
		CIMPP::ActivePower maxOperatingP;

		/** \brief Maximum allowable spinning reserve. Spinning reserve will never be considered greater than this value regardless of the current operating point. Default: nullptr */
		CIMPP::ActivePower maximumAllowableSpinningReserve;

		/** \brief This is the minimum operating active power limit the dispatcher can enter for this unit. Default: nullptr */
		CIMPP::ActivePower minOperatingP;

		/** \brief The nominal power of the generating unit.  Used to give precise meaning to percentage based attributes such as the governor speed change droop (governorSCD attribute). The attribute shall be a positive value equal or less than RotatingMachine.ratedS. Default: nullptr */
		CIMPP::ActivePower nominalP;

		/** \brief Generating unit economic participation factor. Default: nullptr */
		CIMPP::Simple_Float normalPF;

		/** \brief The unit`s gross rated maximum capacity (book value). Default: nullptr */
		CIMPP::ActivePower ratedGrossMaxP;

		/** \brief The gross rated minimum generation level which the unit can safely operate at while delivering power to the transmission grid. Default: nullptr */
		CIMPP::ActivePower ratedGrossMinP;

		/** \brief The net rated maximum capacity determined by subtracting the auxiliary power used to operate the internal plant machinery from the rated gross maximum capacity. Default: nullptr */
		CIMPP::ActivePower ratedNetMaxP;

		/** \brief Generating unit short term economic participation factor. Default: nullptr */
		CIMPP::Simple_Float shortPF;

		/** \brief The initial startup cost incurred for each start of the GeneratingUnit. Default: nullptr */
		CIMPP::Money startupCost;

		/** \brief The efficiency of the unit in converting the fuel into electrical energy. Default: nullptr */
		CIMPP::PerCent totalEfficiency;

		/** \brief The variable cost component of production per unit of ActivePower. Default: nullptr */
		CIMPP::Money variableCost;

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

	BaseClass* GeneratingUnit_factory();
}
#endif
