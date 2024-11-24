#ifndef BusbarSection_H
#define BusbarSection_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "Connector.hpp"
#include "BaseClassDefiner.hpp"
#include "CurrentFlow.hpp"

namespace CIMPP
{

	/*
	A conductor, or group of conductors, with negligible impedance, that serve to connect other conducting equipment within a single substation.  Voltage measurements are typically obtained from VoltageTransformers that are connected to busbar sections. A bus bar section may have many physical terminals but for analysis is modelled with exactly one logical terminal.
	*/
	class BusbarSection : public Connector
	{
	public:
		/* constructor initialising all attributes to null */
		BusbarSection();
		~BusbarSection() override;

		CIMPP::CurrentFlow ipMax;  /* Maximum allowable peak short-circuit current of busbar (Ipmax in the IEC 60909-0).  Mechanical limit of the busbar in the substation itself. Used for short circuit data exchange according to IEC 60909 Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* BusbarSection_factory();
}
#endif
