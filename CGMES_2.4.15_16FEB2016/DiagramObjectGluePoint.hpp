#ifndef DiagramObjectGluePoint_H
#define DiagramObjectGluePoint_H

#include "BaseClass.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class DiagramObjectPoint;
	/*
	This is used for grouping diagram object points from different diagram objects that are considered to be glued together in a diagram even if they are not at the exact same coordinates.
	*/
	class DiagramObjectGluePoint: public BaseClass
	{

	public:
					std::list<CIMPP::DiagramObjectPoint*> DiagramObjectPoints; 	/* The `glue` point to which this point is associated. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		DiagramObjectGluePoint();
		virtual ~DiagramObjectGluePoint();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DiagramObjectGluePoint_factory();
}
#endif
