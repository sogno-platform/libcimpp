#ifndef GeographicalRegion_H
#define GeographicalRegion_H
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
	class SubGeographicalRegion;

	/*
	A geographical region of a power system network model.
	*/
	class GeographicalRegion : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		GeographicalRegion();
		~GeographicalRegion() override;

		std::list<CIMPP::SubGeographicalRegion*> Regions;  /* All sub-geograhpical regions within this geographical region. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GeographicalRegion_factory();
}
#endif
