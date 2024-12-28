#ifndef Equipment_H
#define Equipment_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PowerSystemResource.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Boolean.hpp"

namespace CIMPP
{
	class EquipmentContainer;
	class OperationalLimitSet;

	/*
	The parts of a power system that are physical devices, electronic or mechanical.
	*/
	class Equipment : public PowerSystemResource
	{
	public:
		/* constructor initialising all attributes to null */
		Equipment();
		~Equipment() override;

		CIMPP::EquipmentContainer* EquipmentContainer;  /* Container of this equipment. Default: 0 */
		std::list<CIMPP::OperationalLimitSet*> OperationalLimitSet;  /* The operational limit sets associated with this equipment. Default: 0 */
		CIMPP::Boolean aggregate;  /* The single instance of equipment represents multiple pieces of equipment that have been modeled together as an aggregate.  Examples would be power transformers or synchronous machines operating in parallel modeled as a single aggregate power transformer or aggregate synchronous machine.  This is not to be used to indicate equipment that is part of a group of interdependent equipment produced by a network production program. Default: false */

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

	BaseClass* Equipment_factory();
}
#endif
