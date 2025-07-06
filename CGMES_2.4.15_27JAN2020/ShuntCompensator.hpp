#ifndef ShuntCompensator_H
#define ShuntCompensator_H
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
#include "Boolean.hpp"
#include "DateTime.hpp"
#include "Integer.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "Voltage.hpp"
#include "VoltagePerReactivePower.hpp"

namespace CIMPP
{
	class SvShuntCompensatorSections;

	/** \brief A shunt capacitor or reactor or switchable bank of shunt capacitors or reactors. A section of a shunt compensator is an individual capacitor or reactor.  A negative value for reactivePerSection indicates that the compensator is a reactor. ShuntCompensator is a single terminal device.  Ground is implied. */
	class ShuntCompensator : public RegulatingCondEq
	{
	public:
		/* constructor initialising all attributes to null */
		ShuntCompensator();
		~ShuntCompensator() override;

		/** \brief The state for the number of shunt compensator sections in service. Default: 0 */
		CIMPP::SvShuntCompensatorSections* SvShuntCompensatorSections;

		/** \brief Time delay required for the device to be connected or disconnected by automatic voltage regulation (AVR). Default: nullptr */
		CIMPP::Seconds aVRDelay;

		/** \brief Used for Yn and Zn connections. True if the neutral is solidly grounded. Default: false */
		CIMPP::Boolean grounded;

		/** \brief The maximum number of sections that may be switched in. Default: 0 */
		CIMPP::Integer maximumSections;

		/** \brief The voltage at which the nominal reactive power may be calculated. This should normally be within 10% of the voltage at which the capacitor is connected to the network. Default: nullptr */
		CIMPP::Voltage nomU;

		/** \brief The normal number of sections switched in. Default: 0 */
		CIMPP::Integer normalSections;

		/** \brief Shunt compensator sections in use. Starting value for steady state solution. Non integer values are allowed to support continuous variables. The reasons for continuous value are to support study cases where no discrete shunt compensators has yet been designed, a solutions where a narrow voltage band force the sections to oscillate or accommodate for a continuous solution as input. Default: nullptr */
		CIMPP::Simple_Float sections;

		/** \brief The switch on count since the capacitor count was last reset or initialized. Default: 0 */
		CIMPP::Integer switchOnCount;

		/** \brief The date and time when the capacitor bank was last switched on. Default: '' */
		CIMPP::DateTime switchOnDate;

		/** \brief Voltage sensitivity required for the device to regulate the bus voltage, in voltage/reactive power. Default: nullptr */
		CIMPP::VoltagePerReactivePower voltageSensitivity;

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

	BaseClass* ShuntCompensator_factory();
}
#endif
