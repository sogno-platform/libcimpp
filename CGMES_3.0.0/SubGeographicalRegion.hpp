#ifndef SubGeographicalRegion_H
#define SubGeographicalRegion_H
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
	class DCLine;
	class GeographicalRegion;
	class Line;
	class Substation;

	/*
	A subset of a geographical region of a power system network model.
	*/
	class SubGeographicalRegion : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		SubGeographicalRegion();
		~SubGeographicalRegion() override;

		std::list<CIMPP::DCLine*> DCLines;  /* The DC lines in this sub-geographical region. Default: 0 */
		std::list<CIMPP::Line*> Lines;  /* The lines within the sub-geographical region. Default: 0 */
		CIMPP::GeographicalRegion* Region;  /* The geographical region which this sub-geographical region is within. Default: 0 */
		std::list<CIMPP::Substation*> Substations;  /* The substations in this sub-geographical region. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* SubGeographicalRegion_factory();
}
#endif
