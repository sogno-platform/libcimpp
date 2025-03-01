#ifndef TieFlow_H
#define TieFlow_H
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
#include "Boolean.hpp"

namespace CIMPP
{
	class ControlArea;
	class Terminal;

	/** \brief Defines the structure (in terms of location and direction) of the net interchange constraint for a control area. This constraint may be used by either AGC or power flow. */
	class TieFlow : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		TieFlow();
		~TieFlow() override;

		/** \brief The control area of the tie flows. Default: 0 */
		CIMPP::ControlArea* ControlArea;

		/** \brief The terminal to which this tie flow belongs. Default: 0 */
		CIMPP::Terminal* Terminal;

		/** \brief Specifies the sign of the tie flow associated with a control area. True if positive flow into the terminal (load convention) is also positive flow into the control area.  See the description of ControlArea for further explanation of how TieFlow.positiveFlowIn is used. Default: false */
		CIMPP::Boolean positiveFlowIn;

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

	BaseClass* TieFlow_factory();
}
#endif
