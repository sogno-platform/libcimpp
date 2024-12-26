#ifndef Sensor_H
#define Sensor_H
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
	This class describe devices that transform a measured quantity into signals that can be presented at displays, used in control or be recorded.
	*/
	class Sensor : public AuxiliaryEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		Sensor();
		~Sensor() override;


		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* Sensor_factory();
}
#endif
