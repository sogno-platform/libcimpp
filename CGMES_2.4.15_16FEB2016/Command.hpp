#ifndef Command_H
#define Command_H
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
#include "Integer.hpp"

namespace CIMPP
{
	class DiscreteValue;
	class ValueAliasSet;

	/** \brief A Command is a discrete control used for supervisory control. */
	class Command : public Control
	{
	public:
		/* constructor initialising all attributes to null */
		Command();
		~Command() override;

		/** \brief The Control variable associated with the MeasurementValue. Default: 0 */
		CIMPP::DiscreteValue* DiscreteValue;

		/** \brief The ValueAliasSet used for translation of a Control value to a name. Default: 0 */
		CIMPP::ValueAliasSet* ValueAliasSet;

		/** \brief Normal value for Control.value e.g. used for percentage scaling. Default: 0 */
		CIMPP::Integer normalValue;

		/** \brief The value representing the actuator output. Default: 0 */
		CIMPP::Integer value;

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

	BaseClass* Command_factory();
}
#endif
