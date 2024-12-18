#ifndef LoadGroup_H
#define LoadGroup_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class SubLoadArea;

	/*
	The class is the third level in a hierarchical structure for grouping of loads for the purpose of load flow load scaling.
	*/
	class LoadGroup : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		LoadGroup();
		~LoadGroup() override;

		CIMPP::SubLoadArea* SubLoadArea;  /* The SubLoadArea where the Loadgroup belongs. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* LoadGroup_factory();
}
#endif
