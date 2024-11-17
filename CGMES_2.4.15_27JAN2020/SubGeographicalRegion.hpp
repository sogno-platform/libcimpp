#ifndef SubGeographicalRegion_H
#define SubGeographicalRegion_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class DCLine;
class Line;
class GeographicalRegion;
class Substation;
	/*
	A subset of a geographical region of a power system network model.
	*/
	class SubGeographicalRegion: public IdentifiedObject
	{

	public:
					std::list<CIMPP::DCLine*> DCLines; 	/*  Default: 0 */
					std::list<CIMPP::Line*> Lines; 	/* The sub-geographical region of the line. Default: 0 */
					CIMPP::GeographicalRegion* Region; 	/* The geographical region to which this sub-geographical region is within. Default: 0 */
					std::list<CIMPP::Substation*> Substations; 	/* The substations in this sub-geographical region. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		SubGeographicalRegion();
		virtual ~SubGeographicalRegion();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* SubGeographicalRegion_factory();
}
#endif
