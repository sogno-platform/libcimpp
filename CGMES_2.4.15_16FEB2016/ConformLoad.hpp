#ifndef ConformLoad_H
#define ConformLoad_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "EnergyConsumer.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class ConformLoadGroup;

	/*
	ConformLoad represent loads that follow a daily load change pattern where the pattern can be used to scale the load with a system load.
	*/
	class ConformLoad : public EnergyConsumer
	{
	public:
		/* constructor initialising all attributes to null */
		ConformLoad();
		~ConformLoad() override;

		CIMPP::ConformLoadGroup* LoadGroup;  /* Group of this ConformLoad. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ConformLoad_factory();
}
#endif
