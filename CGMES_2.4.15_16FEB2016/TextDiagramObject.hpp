#ifndef TextDiagramObject_H
#define TextDiagramObject_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "DiagramObject.hpp"
#include "BaseClassDefiner.hpp"
#include "String.hpp"

namespace CIMPP
{

	/*
	A diagram object for placing free-text or text derived from an associated domain object.
	*/
	class TextDiagramObject : public DiagramObject
	{
	public:
		/* constructor initialising all attributes to null */
		TextDiagramObject();
		~TextDiagramObject() override;

		CIMPP::String text;  /* The text that is displayed by this text diagram object. Default: '' */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* TextDiagramObject_factory();
}
#endif
