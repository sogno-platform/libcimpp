#ifndef DynamicsFunctionBlock_H
#define DynamicsFunctionBlock_H
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

	/** \brief Abstract parent class for all Dynamics function blocks. */
	class DynamicsFunctionBlock : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		DynamicsFunctionBlock();
		~DynamicsFunctionBlock() override;

		/** \brief Function block used indicator. true = use of function block is enabled false = use of function block is disabled. Default: false */
		CIMPP::Boolean enabled;

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

	BaseClass* DynamicsFunctionBlock_factory();
}
#endif
