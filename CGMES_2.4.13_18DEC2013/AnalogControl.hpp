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
#include "CimClassDetails.hpp"
#include "Simple_Float.hpp"

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

		/** \brief The Control variable associated with the MeasurementValue. Default: 0 */
		CIMPP::AnalogValue* AnalogValue;

		/** \brief Normal value range maximum for any of the Control.value. Used for scaling, e.g. in bar graphs. Default: nullptr */
		CIMPP::Simple_Float maxValue;

		/** \brief Normal value range minimum for any of the Control.value. Used for scaling, e.g. in bar graphs. Default: nullptr */
		CIMPP::Simple_Float minValue;

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

	BaseClass* AnalogControl_factory();
}
#endif
