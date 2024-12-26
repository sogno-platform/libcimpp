#ifndef LoadDynamics_H
#define LoadDynamics_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class EnergyConsumer;

	/*
	Load whose behaviour is described by reference to a standard model <font color="#0f0f0f">or by definition of a user-defined model.</font> A standard feature of dynamic load behaviour modelling is the ability to associate the same behaviour to multiple energy consumers by means of a single load definition.  The load model is always applied to individual bus loads (energy consumers).
	*/
	class LoadDynamics : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		LoadDynamics();
		~LoadDynamics() override;

		std::list<CIMPP::EnergyConsumer*> EnergyConsumer;  /* Energy consumer to which this dynamics load model applies. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* LoadDynamics_factory();
}
#endif
