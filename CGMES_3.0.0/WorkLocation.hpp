#ifndef WorkLocation_H
#define WorkLocation_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "Location.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{

	/*
	Information about a particular location for various forms of work.
	*/
	class WorkLocation : public Location
	{
	public:
		/* constructor initialising all attributes to null */
		WorkLocation();
		~WorkLocation() override;


		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WorkLocation_factory();
}
#endif
