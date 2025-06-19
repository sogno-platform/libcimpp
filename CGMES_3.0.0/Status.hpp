#ifndef Status_H
#define Status_H
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
#include "DateTime.hpp"
#include "String.hpp"

namespace CIMPP
{

	/** \brief Current status information relevant to an entity. */
	class Status : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		Status();
		~Status() override;

		/** \brief Date and time for which status `value` applies. Default: '' */
		CIMPP::DateTime dateTime;

		/** \brief Reason code or explanation for why an object went to the current status `value`. Default: '' */
		CIMPP::String reason;

		/** \brief Pertinent information regarding the current `value`, as free form text. Default: '' */
		CIMPP::String remark;

		/** \brief Status value at `dateTime`; prior status changes may have been kept in instances of activity records associated with the object to which this status applies. Default: '' */
		CIMPP::String value;

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

	BaseClass* Status_factory();
}
#endif
