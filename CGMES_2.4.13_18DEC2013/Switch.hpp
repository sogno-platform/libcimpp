#ifndef Switch_H
#define Switch_H
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
#include "Boolean.hpp"
#include "CurrentFlow.hpp"

namespace CIMPP
{
	class SwitchSchedule;

	/** \brief A generic device designed to close, or open, or both, one or more electric circuits.  All switches are two terminal devices including grounding switches. */
	class Switch : public ConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		Switch();
		~Switch() override;

		/** \brief A SwitchSchedule is associated with a Switch. Default: 0 */
		std::list<CIMPP::SwitchSchedule*> SwitchSchedules;

		/** \brief The attribute is used in cases when no Measurement for the status value is present. If the Switch has a status measurement the Discrete.normalValue is expected to match with the Switch.normalOpen. Default: false */
		CIMPP::Boolean normalOpen;

		/** \brief The attribute tells if the switch is considered open when used as input to topology processing. Default: false */
		CIMPP::Boolean open;

		/** \brief The maximum continuous current carrying capacity in amps governed by the device material and construction. Default: nullptr */
		CIMPP::CurrentFlow ratedCurrent;

		/** \brief Branch is retained in a bus branch model.  The flow through retained switches will normally be calculated in power flow. Default: false */
		CIMPP::Boolean retained;

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* Switch_factory();
}
#endif
