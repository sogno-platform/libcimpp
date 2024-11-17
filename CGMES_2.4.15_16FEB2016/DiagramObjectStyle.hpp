#ifndef DiagramObjectStyle_H
#define DiagramObjectStyle_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class DiagramObject;
	/*
	A reference to a style used by the originating system for a diagram object.  A diagram object style describes information such as line thickness, shape such as circle or rectangle etc, and color.
	*/
	class DiagramObjectStyle: public IdentifiedObject
	{

	public:
					std::list<CIMPP::DiagramObject*> StyledObjects; 	/* A style can be assigned to multiple diagram objects. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		DiagramObjectStyle();
		virtual ~DiagramObjectStyle();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DiagramObjectStyle_factory();
}
#endif
