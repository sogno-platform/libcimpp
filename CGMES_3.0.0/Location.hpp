#ifndef Location_H
#define Location_H
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
	class CoordinateSystem;
	class PositionPoint;
	class PowerSystemResource;
	class StreetAddress;

	/*
	The place, scene, or point of something where someone or something has been, is, and/or will be at a given moment in time. It can be defined with one or more position points (coordinates) in a given coordinate system.
	*/
	class Location : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		Location();
		~Location() override;

		CIMPP::CoordinateSystem* CoordinateSystem;  /* Coordinate system used to describe position points of this location. Default: 0 */
		std::list<CIMPP::PositionPoint*> PositionPoints;  /* Sequence of position points describing this location, expressed in coordinate system `Location.CoordinateSystem`. Default: 0 */
		CIMPP::PowerSystemResource* PowerSystemResources;  /* All power system resources at this location. Default: 0 */
		CIMPP::StreetAddress* mainAddress;  /* Main address of the location. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* Location_factory();
}
#endif
