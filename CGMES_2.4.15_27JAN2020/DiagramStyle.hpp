#ifndef DiagramStyle_H
#define DiagramStyle_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class Diagram;
	/*
	The diagram style refer to a style used by the originating system for a diagram.  A diagram style describes information such as schematic, geographic, bus-branch etc.
	*/
	class DiagramStyle: public IdentifiedObject
	{

	public:
					std::list<CIMPP::Diagram*> Diagram; 	/* A DiagramStyle can be used by many Diagrams. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		DiagramStyle();
		virtual ~DiagramStyle();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DiagramStyle_factory();
}
#endif
