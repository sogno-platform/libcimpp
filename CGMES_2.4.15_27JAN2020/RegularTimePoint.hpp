#ifndef RegularTimePoint_H
#define RegularTimePoint_H
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
#include "CimClassDetails.hpp"
#include "Integer.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{
	class RegularIntervalSchedule;

	/** \brief Time point for a schedule where the time between the consecutive points is constant. */
	class RegularTimePoint : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		RegularTimePoint();
		~RegularTimePoint() override;

		/** \brief Regular interval schedule containing this time point. Default: 0 */
		CIMPP::RegularIntervalSchedule* IntervalSchedule;

		/** \brief The position of the regular time point in the sequence. Note that time points don`t have to be sequential, i.e. time points may be omitted. The actual time for a RegularTimePoint is computed by multiplying the associated regular interval schedule`s time step with the regular time point sequence number and adding the associated schedules start time. Default: 0 */
		CIMPP::Integer sequenceNumber;

		/** \brief The first value at the time. The meaning of the value is defined by the derived type of the associated schedule. Default: nullptr */
		CIMPP::Simple_Float value1;

		/** \brief The second value at the time. The meaning of the value is defined by the derived type of the associated schedule. Default: nullptr */
		CIMPP::Simple_Float value2;

		static const char debugName[];
		const char* debugString() const override;

		const std::list<std::string>& getAttributeNames() const override;

		const std::string& getClassNamespaceUrl() const override;
		const std::string& getAttributeNamespaceUrl(const std::string& attrName) const override;

		const std::list<CGMESProfile>& getPossibleProfiles() const override;
		const CGMESProfile& getRecommendedProfile() const override;
		const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const override;
		const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;

		bool isAssignableFrom(BaseClass* otherObject) const override;
		static const BaseClassDefiner declare();

	protected:
		std::map<std::string, AttrDetails> allAttrDetailsMap() const override;
	};

	BaseClass* RegularTimePoint_factory();
}
#endif
