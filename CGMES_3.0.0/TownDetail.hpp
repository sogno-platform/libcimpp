#ifndef TownDetail_H
#define TownDetail_H
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

	/*
	Town details, in the context of address.
	*/
	class TownDetail : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		TownDetail();
		~TownDetail() override;

		CIMPP::String code;  /* Town code. Default: '' */
		CIMPP::String country;  /* Name of the country. Default: '' */
		CIMPP::String name;  /* Town name. Default: '' */
		CIMPP::String section;  /* Town section. For example, it is common for there to be 36 sections per township. Default: '' */
		CIMPP::String stateOrProvince;  /* Name of the state or province. Default: '' */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* TownDetail_factory();
}
#endif
