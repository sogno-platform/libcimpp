#ifndef Location_H
#define Location_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class CoordinateSystem;
class PositionPoint;
class PowerSystemResource;
	/*
	The place, scene, or point of something where someone or something has been, is, and/or will be at a given moment in time. It can be defined with one or more postition points (coordinates) in a given coordinate system.
	*/
	class Location: public IdentifiedObject
	{

	public:
					CIMPP::CoordinateSystem* CoordinateSystem; 	/* Coordinate system used to describe position points of this location. Default: 0 */
					std::list<CIMPP::PositionPoint*> PositionPoints; 	/* Sequence of position points describing this location, expressed in coordinate system `Location.CoordinateSystem`. Default: 0 */
					CIMPP::PowerSystemResource* PowerSystemResources; 	/* All power system resources at this location. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		Location();
		virtual ~Location();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* Location_factory();
}
#endif
