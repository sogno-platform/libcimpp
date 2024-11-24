#ifndef EquivalentNetwork_H
#define EquivalentNetwork_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ConnectivityNodeContainer.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class EquivalentEquipment;

	/*
	A class that groups electrical equivalents, including internal nodes, of a network that has been reduced. The ConnectivityNodes contained in the equivalent are intended to reflect internal nodes of the equivalent. The boundary Connectivity nodes where the equivalent connects outside itself are not contained by the equivalent.
	*/
	class EquivalentNetwork : public ConnectivityNodeContainer
	{
	public:
		/* constructor initialising all attributes to null */
		EquivalentNetwork();
		~EquivalentNetwork() override;

		std::list<CIMPP::EquivalentEquipment*> EquivalentEquipments;  /* The associated reduced equivalents. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* EquivalentNetwork_factory();
}
#endif
