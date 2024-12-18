#ifndef SynchronousMachineDetailed_H
#define SynchronousMachineDetailed_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "SynchronousMachineDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CurrentFlow.hpp"
#include "IfdBaseKind.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/*
	All synchronous machine detailed types use a subset of the same data parameters and input/output variables.   The several variations differ in the following ways:   It is not necessary for each simulation tool to have separate models for each of the model types.  The same model can often be used for several types by alternative logic within the model.  Also, differences in saturation representation may not result in significant model performance differences so model substitutions are often acceptable.
	*/
	class SynchronousMachineDetailed : public SynchronousMachineDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		SynchronousMachineDetailed();
		~SynchronousMachineDetailed() override;

		CIMPP::Simple_Float efdBaseRatio;  /* Ratio of Efd bases of exciter and generator models.  Typical Value = 1. Default: nullptr */
		CIMPP::IfdBaseKind ifdBaseType;  /* Excitation base system mode.  Typical Value = ifag. Default: 0 */
		CIMPP::CurrentFlow ifdBaseValue;  /* Ifd base current if .ifdBaseType = other. Not needed if .ifdBaseType not = other.   Unit = A.  Typical Value = 0. Default: nullptr */
		CIMPP::Simple_Float saturationFactor120QAxis;  /* Q-axis saturation factor at 120% of rated terminal voltage (S12q) (&gt;=S1q).  Typical Value = 0.12. Default: nullptr */
		CIMPP::Simple_Float saturationFactorQAxis;  /* Q-axis saturation factor at rated terminal voltage (S1q) (&gt;= 0). Typical Value = 0.02. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* SynchronousMachineDetailed_factory();
}
#endif
