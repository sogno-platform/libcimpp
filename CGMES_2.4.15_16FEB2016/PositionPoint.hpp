#ifndef PositionPoint_H
#define PositionPoint_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "Integer.hpp"
#include "String.hpp"

namespace CIMPP
{
	class Location;

	/*
	Set of spatial coordinates that determine a point, defined in the coordinate system specified in 'Location.CoordinateSystem'. Use a single position point instance to desribe a point-oriented location. Use a sequence of position points to describe a line-oriented object (physical location of non-point oriented objects like cables or lines), or area of an object (like a substation or a geographical zone - in this case, have first and last position point with the same values).
	*/
	class PositionPoint : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		PositionPoint();
		~PositionPoint() override;

		CIMPP::Location* Location;  /* Location described by this position point. Default: 0 */
		CIMPP::Integer sequenceNumber;  /* Zero-relative sequence number of this point within a series of points. Default: 0 */
		CIMPP::String xPosition;  /* X axis position. Default: '' */
		CIMPP::String yPosition;  /* Y axis position. Default: '' */
		CIMPP::String zPosition;  /* (if applicable) Z axis position. Default: '' */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PositionPoint_factory();
}
#endif
