#ifndef VisibilityLayer_H
#define VisibilityLayer_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Integer.hpp"

namespace CIMPP {


class DiagramObject;
	/*
	Layers are typically used for grouping diagram objects according to themes and scales. Themes are used to display or hide certain information (e.g., lakes, borders), while scales are used for hiding or displaying information depending on the current zoom level (hide text when it is too small to be read, or when it exceeds the screen size). This is also called de-cluttering.  CIM based graphics exchange will support an m:n relationship between diagram objects and layers. It will be the task of the importing system to convert an m:n case into an appropriate 1:n representation if the importing system does not support m:n.
	*/
	class VisibilityLayer: public IdentifiedObject
	{

	public:
					std::list<CIMPP::DiagramObject*> VisibleObjects; 	/* A visibility layer can contain one or more diagram objects. Default: 0 */
					CIMPP::Integer drawingOrder; 	/* The drawing order for this layer.  The higher the number, the later the layer and the objects within it are rendered. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		VisibilityLayer();
		virtual ~VisibilityLayer();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* VisibilityLayer_factory();
}
#endif
