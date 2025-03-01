#ifndef AnalogControl_H
#define AnalogControl_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "Control.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Float.hpp"

namespace CIMPP
{
	class AnalogValue;

	/** \brief An analog control used for supervisory control. */
	class AnalogControl : public Control
	{
	public:
		/* constructor initialising all attributes to null */
		AnalogControl();
		~AnalogControl() override;

		/** \brief The MeasurementValue that is controlled. Default: 0 */
		CIMPP::AnalogValue* AnalogValue;

		/** \brief Normal value range maximum for any of the Control.value. Used for scaling, e.g. in bar graphs. Default: 0.0 */
		CIMPP::Float maxValue;

		/** \brief Normal value range minimum for any of the Control.value. Used for scaling, e.g. in bar graphs. Default: 0.0 */
		CIMPP::Float minValue;

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

	BaseClass* AnalogControl_factory();
}
#endif
