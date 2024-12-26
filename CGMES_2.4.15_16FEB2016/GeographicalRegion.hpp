#ifndef GeographicalRegion_H
#define GeographicalRegion_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class SubGeographicalRegion;
	/*
	A geographical region of a power system network model.
	*/
	class GeographicalRegion: public IdentifiedObject
	{

	public:
					std::list<CIMPP::SubGeographicalRegion*> Regions; 	/* All sub-geograhpical regions within this geographical region. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		GeographicalRegion();
		virtual ~GeographicalRegion();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* GeographicalRegion_factory();
}
#endif
