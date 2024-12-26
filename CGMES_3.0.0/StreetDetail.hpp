#ifndef StreetDetail_H
#define StreetDetail_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"
#include "String.hpp"

namespace CIMPP
{

	/*
	Street details, in the context of address.
	*/
	class StreetDetail : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		StreetDetail();
		~StreetDetail() override;

		CIMPP::String addressGeneral;  /* First line of a free form address or some additional address information (for example a mail stop). Default: '' */
		CIMPP::String addressGeneral2;  /* (if applicable) Second line of a free form address. Default: '' */
		CIMPP::String addressGeneral3;  /* (if applicable) Third line of a free form address. Default: '' */
		CIMPP::String buildingName;  /* (if applicable) In certain cases the physical location of the place of interest does not have a direct point of entry from the street, but may be located inside a larger structure such as a building, complex, office block, apartment, etc. Default: '' */
		CIMPP::String code;  /* (if applicable) Utilities often make use of external reference systems, such as those of the town-planner`s department or surveyor general`s mapping system, that allocate global reference codes to streets. Default: '' */
		CIMPP::String floorIdentification;  /* The identification by name or number, expressed as text, of the floor in the building as part of this address. Default: '' */
		CIMPP::String name;  /* Name of the street. Default: '' */
		CIMPP::String number;  /* Designator of the specific location on the street. Default: '' */
		CIMPP::String prefix;  /* Prefix to the street name. For example: North, South, East, West. Default: '' */
		CIMPP::String suffix;  /* Suffix to the street name. For example: North, South, East, West. Default: '' */
		CIMPP::String suiteNumber;  /* Number of the apartment or suite. Default: '' */
		CIMPP::String type;  /* Type of street. Examples include: street, circle, boulevard, avenue, road, drive, etc. Default: '' */
		CIMPP::Boolean withinTownLimits;  /* True if this street is within the legal geographical boundaries of the specified town (default). Default: false */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* StreetDetail_factory();
}
#endif
