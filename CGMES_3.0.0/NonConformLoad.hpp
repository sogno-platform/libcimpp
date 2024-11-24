#ifndef NonConformLoad_H
#define NonConformLoad_H
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
	class NonConformLoadGroup;

	/*
	NonConformLoad represents loads that do not follow a daily load change pattern and whose changes are not correlated with the daily load change pattern.
	*/
	class NonConformLoad : public EnergyConsumer
	{
	public:
		/* constructor initialising all attributes to null */
		NonConformLoad();
		~NonConformLoad() override;

		CIMPP::NonConformLoadGroup* LoadGroup;  /* Group of this ConformLoad. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* NonConformLoad_factory();
}
#endif
