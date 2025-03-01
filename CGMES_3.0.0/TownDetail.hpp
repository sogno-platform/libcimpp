#ifndef TownDetail_H
#define TownDetail_H
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

	/** \brief Town details, in the context of address. */
	class TownDetail : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		TownDetail();
		~TownDetail() override;

		/** \brief Town code. Default: '' */
		CIMPP::String code;

		/** \brief Name of the country. Default: '' */
		CIMPP::String country;

		/** \brief Town name. Default: '' */
		CIMPP::String name;

		/** \brief Town section. For example, it is common for there to be 36 sections per township. Default: '' */
		CIMPP::String section;

		/** \brief Name of the state or province. Default: '' */
		CIMPP::String stateOrProvince;

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

	BaseClass* TownDetail_factory();
}
#endif
