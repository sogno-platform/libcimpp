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
#include "Float.hpp"
#include "Integer.hpp"

namespace CIMPP
{
	class RegularIntervalSchedule;

	/*
	Time point for a schedule where the time between the consecutive points is constant.
	*/
	class RegularTimePoint : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		RegularTimePoint();
		~RegularTimePoint() override;

		CIMPP::RegularIntervalSchedule* IntervalSchedule;  /* Regular interval schedule containing this time point. Default: 0 */
		CIMPP::Integer sequenceNumber;  /* The position of the regular time point in the sequence. Note that time points don`t have to be sequential, i.e. time points may be omitted. The actual time for a RegularTimePoint is computed by multiplying the associated regular interval schedule`s time step with the regular time point sequence number and adding the associated schedules start time. To specify values for the start time, use sequence number 0.  The sequence number cannot be negative. Default: 0 */
		CIMPP::Float value1;  /* The first value at the time. The meaning of the value is defined by the derived type of the associated schedule. Default: 0.0 */
		CIMPP::Float value2;  /* The second value at the time. The meaning of the value is defined by the derived type of the associated schedule. Default: 0.0 */

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

	BaseClass* RegularTimePoint_factory();
}
#endif
