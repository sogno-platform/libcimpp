#ifndef StreetAddress_H
#define StreetAddress_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "String.hpp"

namespace CIMPP
{
	class Status;
	class StreetDetail;
	class TownDetail;

	/*
	General purpose street and postal address information.
	*/
	class StreetAddress : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		StreetAddress();
		~StreetAddress() override;

		CIMPP::String language;  /* The language in which the address is specified, using ISO 639-1 two digit language code. Default: '' */
		CIMPP::String poBox;  /* Post office box. Default: '' */
		CIMPP::String postalCode;  /* Postal code for the address. Default: '' */
		CIMPP::Status* status;  /* Status of this address. Default: nullptr */
		CIMPP::StreetDetail* streetDetail;  /* Street detail. Default: nullptr */
		CIMPP::TownDetail* townDetail;  /* Town detail. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* StreetAddress_factory();
}
#endif
