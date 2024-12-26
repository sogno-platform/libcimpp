#ifndef CoordinateSystem_H
#define CoordinateSystem_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "String.hpp"

namespace CIMPP
{
	class Location;

	/*
	Coordinate reference system.
	*/
	class CoordinateSystem : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		CoordinateSystem();
		~CoordinateSystem() override;

		std::list<CIMPP::Location*> Locations;  /* All locations described with position points in this coordinate system. Default: 0 */
		CIMPP::String crsUrn;  /* A Uniform Resource Name (URN) for the coordinate reference system (crs) used to define `Location.PositionPoints`. An example would be the European Petroleum Survey Group (EPSG) code for a coordinate reference system, defined in URN under the Open Geospatial Consortium (OGC) namespace as: urn:ogc:def:crs:EPSG::XXXX, where XXXX is an EPSG code (a full list of codes can be found at the EPSG Registry web site http://www.epsg-registry.org/). To define the coordinate system as being WGS84 (latitude, longitude) using an EPSG OGC, this attribute would be urn:ogc:def:crs:EPSG::4236. A profile should limit this code to a set of allowed URNs agreed to by all sending and receiving parties. Default: '' */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* CoordinateSystem_factory();
}
#endif
