#ifndef SurgeArrester_H
#define SurgeArrester_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "AuxiliaryEquipment.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{

	/*
	Shunt device, installed on the network, usually in the proximity of electrical equipment in order to protect the said equipment against transient voltage transients caused by lightning or switching activity.
	*/
	class SurgeArrester : public AuxiliaryEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		SurgeArrester();
		~SurgeArrester() override;


		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* SurgeArrester_factory();
}
#endif
