#ifndef SvInjection_H
#define SvInjection_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "ActivePower.hpp"
#include "ReactivePower.hpp"

namespace CIMPP
{
	class TopologicalNode;

	/** \brief The SvInjection reports the calculated bus injection minus the sum of the terminal flows. The terminal flow is positive out from the bus (load sign convention) and bus injection has positive flow into the bus. SvInjection may have the remainder after state estimation or slack after power flow calculation. */
	class SvInjection : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		SvInjection();
		~SvInjection() override;

		/** \brief The topological node associated with the flow injection state variable. Default: 0 */
		CIMPP::TopologicalNode* TopologicalNode;

		/** \brief The active power mismatch between calculated injection and initial injection.  Positive sign means injection into the TopologicalNode (bus). Default: nullptr */
		CIMPP::ActivePower pInjection;

		/** \brief The reactive power mismatch between calculated injection and initial injection.  Positive sign means injection into the TopologicalNode (bus). Default: nullptr */
		CIMPP::ReactivePower qInjection;

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

	BaseClass* SvInjection_factory();
}
#endif
