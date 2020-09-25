#ifndef PositionPoint_H
#define PositionPoint_H

#include "BaseClass.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Integer.hpp"
#include "String.hpp"

namespace CIMPP {


class Location;
	/*
	Set of spatial coordinates that determine a point, defined in the coordinate system specified in 'Location.CoordinateSystem'. Use a single position point instance to desribe a point-oriented location. Use a sequence of position points to describe a line-oriented object (physical location of non-point oriented objects like cables or lines), or area of an object (like a substation or a geographical zone - in this case, have first and last position point with the same values).
	*/
	class PositionPoint: public BaseClass
	{

	public:
					CIMPP::Location* Location; 	/* Location described by this position point. Default: 0 */
					CIMPP::Integer sequenceNumber; 	/* Zero-relative sequence number of this point within a series of points. Default: 0 */
					CIMPP::String xPosition; 	/* X axis position. Default: '' */
					CIMPP::String yPosition; 	/* Y axis position. Default: '' */
					CIMPP::String zPosition; 	/* (if applicable) Z axis position. Default: '' */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		PositionPoint();
		virtual ~PositionPoint();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PositionPoint_factory();
}
#endif
