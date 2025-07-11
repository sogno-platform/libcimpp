#ifndef StreetAddress_H
#define StreetAddress_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "String.hpp"

namespace CIMPP
{
	class Status;
	class StreetDetail;
	class TownDetail;

	/** \brief General purpose street and postal address information. */
	class StreetAddress : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		StreetAddress();
		~StreetAddress() override;

		/** \brief The language in which the address is specified, using ISO 639-1 two digit language code. Default: '' */
		CIMPP::String language;

		/** \brief Post office box. Default: '' */
		CIMPP::String poBox;

		/** \brief Postal code for the address. Default: '' */
		CIMPP::String postalCode;

		/** \brief Status of this address. Default: nullptr */
		CIMPP::Status* status;

		/** \brief Street detail. Default: nullptr */
		CIMPP::StreetDetail* streetDetail;

		/** \brief Town detail. Default: nullptr */
		CIMPP::TownDetail* townDetail;

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* StreetAddress_factory();
}
#endif
