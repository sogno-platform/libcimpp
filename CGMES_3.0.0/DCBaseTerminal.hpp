#ifndef DCBaseTerminal_H
#define DCBaseTerminal_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ACDCTerminal.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

namespace CIMPP
{
	class DCNode;
	class DCTopologicalNode;

	/*
	An electrical connection point at a piece of DC conducting equipment. DC terminals are connected at one physical DC node that may have multiple DC terminals connected. A DC node is similar to an AC connectivity node. The model requires that DC connections are distinct from AC connections.
	*/
	class DCBaseTerminal : public ACDCTerminal
	{
	public:
		/* constructor initialising all attributes to null */
		DCBaseTerminal();
		~DCBaseTerminal() override;

		CIMPP::DCNode* DCNode;  /* The DC connectivity node to which this DC base terminal connects with zero impedance. Default: 0 */
		CIMPP::DCTopologicalNode* DCTopologicalNode;  /* See association end Terminal.TopologicalNode. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* DCBaseTerminal_factory();
}
#endif
