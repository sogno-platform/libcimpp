#ifndef DiagramObjectPoint_H
#define DiagramObjectPoint_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Integer.hpp"
#include "Simple_Float.hpp"

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
		CIMPP::DiagramObjectGluePoint* DiagramObjectGluePoint;  /* A diagram object glue point is associated with 2 or more object points that are considered to be `glued` together. Default: 0 */
		CIMPP::Integer sequenceNumber;  /* The sequence position of the point, used for defining the order of points for diagram objects acting as a polyline or polygon with more than one point. Default: 0 */
		CIMPP::Simple_Float xPosition;  /* The X coordinate of this point. Default: nullptr */
		CIMPP::Simple_Float yPosition;  /* The Y coordinate of this point. Default: nullptr */
		CIMPP::Simple_Float zPosition;  /* The Z coordinate of this point. Default: nullptr */

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

	BaseClass* DiagramObjectPoint_factory();
}
#endif
