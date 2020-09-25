#ifndef PowerSystemResource_H
#define PowerSystemResource_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class Control;
class Measurement;
class Location;
	/*
	A power system resource can be an item of equipment such as a switch, an equipment container containing many individual items of equipment such as a substation, or an organisational entity such as sub-control area. Power system resources can have measurements associated.
	*/
	class PowerSystemResource: public IdentifiedObject
	{

	public:
					std::list<CIMPP::Control*> Controls; 	/* Regulating device governed by this control output. Default: 0 */
					std::list<CIMPP::Measurement*> Measurements; 	/* The power system resource that contains the measurement. Default: 0 */
					CIMPP::Location* Location; 	/* Location of this power system resource. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		PowerSystemResource();
		virtual ~PowerSystemResource();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PowerSystemResource_factory();
}
#endif
