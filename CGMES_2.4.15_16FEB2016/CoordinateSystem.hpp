#ifndef CoordinateSystem_H
#define CoordinateSystem_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "String.hpp"

namespace CIMPP {


class Location;
	/*
	Coordinate reference system.
	*/
	class CoordinateSystem: public IdentifiedObject
	{

	public:
					CIMPP::String crsUrn; 	/* A Uniform Resource Name (URN) for the coordinate reference system (crs) used to define `Location.PositionPoints`. An example would be the European Petroleum Survey Group (EPSG) code for a coordinate reference system, defined in URN under the Open Geospatial Consortium (OGC) namespace as: urn:ogc:def:uom:EPSG::XXXX, where XXXX is an EPSG code (a full list of codes can be found at the EPSG Registry web site http://www.epsg-registry.org/). To define the coordinate system as being WGS84 (latitude, longitude) using an EPSG OGC, this attribute would be urn:ogc:def:uom:EPSG::4236. A profile should limit this code to a set of allowed URNs agreed to by all sending and receiving parties. Default: '' */
					std::list<CIMPP::Location*> Location; 	/* All locations described with position points in this coordinate system. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		CoordinateSystem();
		virtual ~CoordinateSystem();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* CoordinateSystem_factory();
}
#endif
