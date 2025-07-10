#ifndef Measurement_H
#define Measurement_H
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
#include "PhaseCode.hpp"
#include "String.hpp"
#include "UnitMultiplier.hpp"
#include "UnitSymbol.hpp"

namespace CIMPP
{
	class ACDCTerminal;
	class PowerSystemResource;

	/** \brief A Measurement represents any measured, calculated or non-measured non-calculated quantity. Any piece of equipment may contain Measurements, e.g. a substation may have temperature measurements and door open indications, a transformer may have oil temperature and tank pressure measurements, a bay may contain a number of power flow measurements and a Breaker may contain a switch status measurement.  The PSR - Measurement association is intended to capture this use of Measurement and is included in the naming hierarchy based on EquipmentContainer. The naming hierarchy typically has Measurements as leaves, e.g. Substation-VoltageLevel-Bay-Switch-Measurement. Some Measurements represent quantities related to a particular sensor location in the network, e.g. a voltage transformer (VT) or potential transformer (PT) at a busbar or a current transformer (CT) at the bar between a breaker and an isolator. The sensing position is not captured in the PSR - Measurement association. Instead it is captured by the Measurement - Terminal association that is used to define the sensing location in the network topology. The location is defined by the connection of the Terminal to ConductingEquipment.  If both a Terminal and PSR are associated, and the PSR is of type ConductingEquipment, the associated Terminal should belong to that ConductingEquipment instance. When the sensor location is needed both Measurement-PSR and Measurement-Terminal are used. The Measurement-Terminal association is never used alone. */
	class Measurement : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		Measurement();
		~Measurement() override;

		/** \brief The power system resource that contains the measurement. Default: 0 */
		CIMPP::PowerSystemResource* PowerSystemResource;

		/** \brief One or more measurements may be associated with a terminal in the network. Default: 0 */
		CIMPP::ACDCTerminal* Terminal;

		/** \brief Specifies the type of measurement.  For example, this specifies if the measurement represents an indoor temperature, outdoor temperature, bus voltage, line flow, etc. When the measurementType is set to `Specialization`, the type of Measurement is defined in more detail by the specialized class which inherits from Measurement. Default: '' */
		CIMPP::String measurementType;

		/** \brief Indicates to which phases the measurement applies and avoids the need to use `measurementType` to also encode phase information (which would explode the types). The phase information in Measurement, along with `measurementType` and `phases` uniquely defines a Measurement for a device, based on normal network phase. Their meaning will not change when the computed energizing phasing is changed due to jumpers or other reasons. If the attribute is missing three phases (ABC) shall be assumed. Default: 0 */
		CIMPP::PhaseCode phases;

		/** \brief The unit multiplier of the measured quantity. Default: 0 */
		CIMPP::UnitMultiplier unitMultiplier;

		/** \brief The unit of measure of the measured quantity. Default: 0 */
		CIMPP::UnitSymbol unitSymbol;

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

	BaseClass* Measurement_factory();
}
#endif
