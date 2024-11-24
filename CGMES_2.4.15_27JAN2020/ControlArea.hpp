#ifndef ControlArea_H
#define ControlArea_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "PowerSystemResource.hpp"
#include "BaseClassDefiner.hpp"
#include "ActivePower.hpp"
#include "ControlAreaTypeKind.hpp"

namespace CIMPP
{
	class ControlAreaGeneratingUnit;
	class EnergyArea;
	class TieFlow;

	/*
	A control areais a grouping of generating units and/or loads and a cutset of tie lines (as terminals) which may be used for a variety of purposes including automatic generation control, powerflow solution area interchange control specification, and input to load forecasting.   Note that any number of overlapping control area specifications can be superimposed on the physical model.
	*/
	class ControlArea : public PowerSystemResource
	{
	public:
		/* constructor initialising all attributes to null */
		ControlArea();
		~ControlArea() override;

		std::list<CIMPP::ControlAreaGeneratingUnit*> ControlAreaGeneratingUnit;  /* The generating unit specificaitons for the control area. Default: 0 */
		CIMPP::EnergyArea* EnergyArea;  /* The energy area that is forecast from this control area specification. Default: 0 */
		std::list<CIMPP::TieFlow*> TieFlow;  /* The tie flows associated with the control area. Default: 0 */
		CIMPP::ActivePower netInterchange;  /* The specified positive net interchange into the control area, i.e. positive sign means flow in to the area. Default: nullptr */
		CIMPP::ActivePower pTolerance;  /* Active power net interchange tolerance Default: nullptr */
		CIMPP::ControlAreaTypeKind type;  /* The primary type of control area definition used to determine if this is used for automatic generation control, for planning interchange control, or other purposes.   A control area specified with primary type of automatic generation control could still be forecast and used as an interchange area in power flow analysis. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ControlArea_factory();
}
#endif
