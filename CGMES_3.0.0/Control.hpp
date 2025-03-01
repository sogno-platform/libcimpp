#ifndef Control_H
#define Control_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IOPoint.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Boolean.hpp"
#include "DateTime.hpp"
#include "String.hpp"
#include "UnitMultiplier.hpp"
#include "UnitSymbol.hpp"

namespace CIMPP
{
	class PowerSystemResource;

	/** \brief Control is used for supervisory/device control. It represents control outputs that are used to change the state in a process, e.g. close or open breaker, a set point value or a raise lower command. */
	class Control : public IOPoint
	{
	public:
		/* constructor initialising all attributes to null */
		Control();
		~Control() override;

		/** \brief Regulating device governed by this control output. Default: 0 */
		CIMPP::PowerSystemResource* PowerSystemResource;

		/** \brief Specifies the type of Control. For example, this specifies if the Control represents BreakerOpen, BreakerClose, GeneratorVoltageSetPoint, GeneratorRaise, GeneratorLower, etc. Default: '' */
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

	BaseClass* Control_factory();
}
#endif
