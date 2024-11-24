#ifndef DCBaseTerminal_H
#define DCBaseTerminal_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ACDCTerminal.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class DCNode;
	class DCTopologicalNode;

	class DCBaseTerminal : public ACDCTerminal
	{
	public:
		/* constructor initialising all attributes to null */
		DCBaseTerminal();
		~DCBaseTerminal() override;

		CIMPP::DCNode* DCNode;  /*  Default: 0 */
		CIMPP::DCTopologicalNode* DCTopologicalNode;  /* See association end TopologicalNode.Terminal. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DCBaseTerminal_factory();
}
#endif
