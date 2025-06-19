#ifndef ControlAreaGeneratingUnit_H
#define ControlAreaGeneratingUnit_H
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

namespace CIMPP
{
	class ControlArea;
	class GeneratingUnit;

	/** \brief A control area generating unit. This class is needed so that alternate control area definitions may include the same generating unit.   Note only one instance within a control area should reference a specific generating unit. */
	class ControlAreaGeneratingUnit : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		ControlAreaGeneratingUnit();
		~ControlAreaGeneratingUnit() override;

		/** \brief The parent control area for the generating unit specifications. Default: 0 */
		CIMPP::ControlArea* ControlArea;

		/** \brief The generating unit specified for this control area.  Note that a control area should include a GeneratingUnit only once. Default: 0 */
		CIMPP::GeneratingUnit* GeneratingUnit;

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

	BaseClass* ControlAreaGeneratingUnit_factory();
}
#endif
