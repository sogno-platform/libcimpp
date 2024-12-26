#ifndef PostLineSensor_H
#define PostLineSensor_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "Sensor.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{

	/*
	A sensor used mainly in overhead distribution networks as the source of both current and voltage measurements.
	*/
	class PostLineSensor : public Sensor
	{
	public:
		/* constructor initialising all attributes to null */
		PostLineSensor();
		~PostLineSensor() override;


		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PostLineSensor_factory();
}
#endif