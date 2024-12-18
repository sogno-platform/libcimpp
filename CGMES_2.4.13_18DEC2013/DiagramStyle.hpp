#ifndef DiagramStyle_H
#define DiagramStyle_H
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
	class Diagram;

	/*
	The diagram style refer to a style used by the originating system for a diagram.  A diagram style describes information such as schematic, geographic, bus-branch etc.
	*/
	class DiagramStyle : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		DiagramStyle();
		~DiagramStyle() override;

		std::list<CIMPP::Diagram*> Diagram;  /* A DiagramStyle can be used by many Diagrams. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DiagramStyle_factory();
}
#endif
