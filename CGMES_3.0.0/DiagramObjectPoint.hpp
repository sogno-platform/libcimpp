#ifndef DiagramObjectPoint_H
#define DiagramObjectPoint_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "Float.hpp"
#include "Integer.hpp"

namespace CIMPP
{
	class DiagramObject;
	class DiagramObjectGluePoint;

	/*
	A point in a given space defined by 3 coordinates and associated to a diagram object.  The coordinates may be positive or negative as the origin does not have to be in the corner of a diagram.
	*/
	class DiagramObjectPoint : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		DiagramObjectPoint();
		~DiagramObjectPoint() override;

		CIMPP::DiagramObject* DiagramObject;  /* The diagram object with which the points are associated. Default: 0 */
		CIMPP::DiagramObjectGluePoint* DiagramObjectGluePoint;  /* The `glue` point to which this point is associated. Default: 0 */
		CIMPP::Integer sequenceNumber;  /* The sequence position of the point, used for defining the order of points for diagram objects acting as a polyline or polygon with more than one point. The attribute shall be a positive value. Default: 0 */
		CIMPP::Float xPosition;  /* The X coordinate of this point. Default: 0.0 */
		CIMPP::Float yPosition;  /* The Y coordinate of this point. Default: 0.0 */
		CIMPP::Float zPosition;  /* The Z coordinate of this point. Default: 0.0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DiagramObjectPoint_factory();
}
#endif
