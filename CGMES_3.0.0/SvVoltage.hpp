#ifndef SvVoltage_H
#define SvVoltage_H
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
#include "AngleDegrees.hpp"
#include "Voltage.hpp"

namespace CIMPP
{
	class TopologicalNode;

	/** \brief State variable for voltage. */
	class SvVoltage : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		SvVoltage();
		~SvVoltage() override;

		/** \brief The topological node associated with the voltage state. Default: 0 */
		CIMPP::TopologicalNode* TopologicalNode;

		/** \brief The voltage angle of the topological node complex voltage with respect to system reference. Default: nullptr */
		CIMPP::AngleDegrees angle;

		/** \brief The voltage magnitude at the topological node. The attribute shall be a positive value. Default: nullptr */
		CIMPP::Voltage v;

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

	BaseClass* SvVoltage_factory();
}
#endif
