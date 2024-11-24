#ifndef DiagramObjectStyle_H
#define DiagramObjectStyle_H
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
	class DiagramObject;

	/*
	A reference to a style used by the originating system for a diagram object.  A diagram object style describes information such as line thickness, shape such as circle or rectangle etc, and color.
	*/
	class DiagramObjectStyle : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		DiagramObjectStyle();
		~DiagramObjectStyle() override;

		std::list<CIMPP::DiagramObject*> StyledObjects;  /* A style can be assigned to multiple diagram objects. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DiagramObjectStyle_factory();
}
#endif
