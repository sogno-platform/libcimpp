#ifndef Diagram_H
#define Diagram_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "OrientationKind.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{
	class DiagramObject;
	class DiagramStyle;

	/*
	The diagram being exchanged.  The coordinate system is a standard Cartesian coordinate system and the orientation attribute defines the orientation.
	*/
	class Diagram : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		Diagram();
		~Diagram() override;

		std::list<CIMPP::DiagramObject*> DiagramElements;  /* A diagram is made up of multiple diagram objects. Default: 0 */
		CIMPP::DiagramStyle* DiagramStyle;  /* A Diagram may have a DiagramStyle. Default: 0 */
		CIMPP::OrientationKind orientation;  /* Coordinate system orientation of the diagram. Default: 0 */
		CIMPP::Simple_Float x1InitialView;  /* X coordinate of the first corner of the initial view. Default: nullptr */
		CIMPP::Simple_Float x2InitialView;  /* X coordinate of the second corner of the initial view. Default: nullptr */
		CIMPP::Simple_Float y1InitialView;  /* Y coordinate of the first corner of the initial view. Default: nullptr */
		CIMPP::Simple_Float y2InitialView;  /* Y coordinate of the second corner of the initial view. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* Diagram_factory();
}
#endif
