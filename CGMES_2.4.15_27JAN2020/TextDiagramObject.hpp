#ifndef TextDiagramObject_H
#define TextDiagramObject_H

#include "DiagramObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "String.hpp"

namespace CIMPP {


	/*
	A diagram object for placing free-text or text derived from an associated domain object.
	*/
	class TextDiagramObject: public DiagramObject
	{

	public:
					CIMPP::String text; 	/* The text that is displayed by this text diagram object. Default: '' */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		TextDiagramObject();
		virtual ~TextDiagramObject();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* TextDiagramObject_factory();
}
#endif
