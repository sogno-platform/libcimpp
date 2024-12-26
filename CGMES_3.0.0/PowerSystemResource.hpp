#ifndef PowerSystemResource_H
#define PowerSystemResource_H
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
	class Control;
	class Location;
	class Measurement;

	/*
	A power system resource (PSR) can be an item of equipment such as a switch, an equipment container containing many individual items of equipment such as a substation, or an organisational entity such as sub-control area. Power system resources can have measurements associated.
	*/
	class PowerSystemResource : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		PowerSystemResource();
		~PowerSystemResource() override;

		std::list<CIMPP::Control*> Controls;  /* The controller outputs used to actually govern a regulating device, e.g. the magnetization of a synchronous machine or capacitor bank breaker actuator. Default: 0 */
		CIMPP::Location* Location;  /* Location of this power system resource. Default: 0 */
		std::list<CIMPP::Measurement*> Measurements;  /* The measurements associated with this power system resource. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PowerSystemResource_factory();
}
#endif
