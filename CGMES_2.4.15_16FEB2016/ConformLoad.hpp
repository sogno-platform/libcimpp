#ifndef ConformLoad_H
#define ConformLoad_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "EnergyConsumer.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

namespace CIMPP
{
	class ConformLoadGroup;

	/** \brief ConformLoad represent loads that follow a daily load change pattern where the pattern can be used to scale the load with a system load. */
	class ConformLoad : public EnergyConsumer
	{
	public:
		/* constructor initialising all attributes to null */
		ConformLoad();
		~ConformLoad() override;

		/** \brief Group of this ConformLoad. Default: 0 */
		CIMPP::ConformLoadGroup* LoadGroup;

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

	BaseClass* ConformLoad_factory();
}
#endif
