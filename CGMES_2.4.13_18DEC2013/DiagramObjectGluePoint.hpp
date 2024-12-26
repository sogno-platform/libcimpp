#ifndef DiagramObjectGluePoint_H
#define DiagramObjectGluePoint_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class DiagramObjectPoint;

	/*
	This is used for grouping diagram object points from different diagram objects that are considered to be glued together in a diagram even if they are not at the exact same coordinates.
	*/
	class DiagramObjectGluePoint : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		DiagramObjectGluePoint();
		~DiagramObjectGluePoint() override;

		std::list<CIMPP::DiagramObjectPoint*> DiagramObjectPoints;  /* The `glue` point to which this point is associated. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DiagramObjectGluePoint_factory();
}
#endif
