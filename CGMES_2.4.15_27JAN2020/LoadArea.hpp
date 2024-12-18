#ifndef LoadArea_H
#define LoadArea_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "EnergyArea.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class SubLoadArea;

	/*
	The class is the root or first level in a hierarchical structure for grouping of loads for the purpose of load flow load scaling.
	*/
	class LoadArea : public EnergyArea
	{
	public:
		/* constructor initialising all attributes to null */
		LoadArea();
		~LoadArea() override;

		std::list<CIMPP::SubLoadArea*> SubLoadAreas;  /* The SubLoadAreas in the LoadArea. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* LoadArea_factory();
}
#endif
