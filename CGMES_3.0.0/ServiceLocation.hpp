#ifndef ServiceLocation_H
#define ServiceLocation_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "WorkLocation.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{

	/*
	A real estate location, commonly referred to as premises.
	*/
	class ServiceLocation : public WorkLocation
	{
	public:
		/* constructor initialising all attributes to null */
		ServiceLocation();
		~ServiceLocation() override;


		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ServiceLocation_factory();
}
#endif
