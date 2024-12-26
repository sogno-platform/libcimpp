#ifndef Control_H
#define Control_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IOPoint.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"
#include "DateTime.hpp"
#include "String.hpp"
#include "UnitMultiplier.hpp"
#include "UnitSymbol.hpp"

namespace CIMPP
{
	class PowerSystemResource;

	/*
	Control is used for supervisory/device control. It represents control outputs that are used to change the state in a process, e.g. close or open breaker, a set point value or a raise lower command.
	*/
	class Control : public IOPoint
	{
	public:
		/* constructor initialising all attributes to null */
		Control();
		~Control() override;

		CIMPP::PowerSystemResource* PowerSystemResource;  /* Regulating device governed by this control output. Default: 0 */
		CIMPP::String controlType;  /* Specifies the type of Control. For example, this specifies if the Control represents BreakerOpen, BreakerClose, GeneratorVoltageSetPoint, GeneratorRaise, GeneratorLower, etc. Default: '' */
		CIMPP::Boolean operationInProgress;  /* Indicates that a client is currently sending control commands that has not completed. Default: false */
		CIMPP::DateTime timeStamp;  /* The last time a control output was sent. Default: '' */
		CIMPP::UnitMultiplier unitMultiplier;  /* The unit multiplier of the controlled quantity. Default: 0 */
		CIMPP::UnitSymbol unitSymbol;  /* The unit of measure of the controlled quantity. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* Control_factory();
}
#endif
