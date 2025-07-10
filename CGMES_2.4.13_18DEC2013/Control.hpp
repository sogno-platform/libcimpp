#ifndef Control_H
#define Control_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Boolean.hpp"
#include "DateTime.hpp"
#include "String.hpp"
#include "UnitMultiplier.hpp"
#include "UnitSymbol.hpp"

namespace CIMPP
{
	class PowerSystemResource;

	/** \brief Control is used for supervisory/device control. It represents control outputs that are used to change the state in a process, e.g. close or open breaker, a set point value or a raise lower command. */
	class Control : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		Control();
		~Control() override;

		/** \brief The controller outputs used to actually govern a regulating device, e.g. the magnetization of a synchronous machine or capacitor bank breaker actuator. Default: 0 */
		CIMPP::PowerSystemResource* PowerSystemResource;

		/** \brief Specifies the type of Control, e.g. BreakerOn/Off, GeneratorVoltageSetPoint, TieLineFlow etc. The ControlType.name shall be unique among all specified types and describe the type. Default: '' */
		CIMPP::String controlType;

		/** \brief Indicates that a client is currently sending control commands that has not completed. Default: false */
		CIMPP::Boolean operationInProgress;

		/** \brief The last time a control output was sent. Default: '' */
		CIMPP::DateTime timeStamp;

		/** \brief The unit multiplier of the controlled quantity. Default: 0 */
		CIMPP::UnitMultiplier unitMultiplier;

		/** \brief The unit of measure of the controlled quantity. Default: 0 */
		CIMPP::UnitSymbol unitSymbol;

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

	BaseClass* Control_factory();
}
#endif
