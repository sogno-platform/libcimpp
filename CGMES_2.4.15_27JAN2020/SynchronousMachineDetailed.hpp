#ifndef SynchronousMachineDetailed_H
#define SynchronousMachineDetailed_H

#include "SynchronousMachineDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Simple_Float.hpp"
#include "IfdBaseKind.hpp"
#include "CurrentFlow.hpp"

namespace CIMPP {


	/*
	All synchronous machine detailed types use a subset of the same data parameters and input/output variables.   The several variations differ in the following ways:   It is not necessary for each simulation tool to have separate models for each of the model types.  The same model can often be used for several types by alternative logic within the model.  Also, differences in saturation representation may not result in significant model performance differences so model substitutions are often acceptable.
	*/
	class SynchronousMachineDetailed: public SynchronousMachineDynamics
	{

	public:
					CIMPP::Simple_Float saturationFactorQAxis; 	/* Q-axis saturation factor at rated terminal voltage (S1q) (&gt;= 0). Typical Value = 0.02. Default: nullptr */
					CIMPP::Simple_Float saturationFactor120QAxis; 	/* Q-axis saturation factor at 120% of rated terminal voltage (S12q) (&gt;=S1q).  Typical Value = 0.12. Default: nullptr */
					CIMPP::Simple_Float efdBaseRatio; 	/* Ratio of Efd bases of exciter and generator models.  Typical Value = 1. Default: nullptr */
					CIMPP::IfdBaseKind ifdBaseType; 	/* Excitation base system mode.  Typical Value = ifag. Default: 0 */
					CIMPP::CurrentFlow ifdBaseValue; 	/* Ifd base current if .ifdBaseType = other. Not needed if .ifdBaseType not = other.   Unit = A.  Typical Value = 0. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		SynchronousMachineDetailed();
		virtual ~SynchronousMachineDetailed();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* SynchronousMachineDetailed_factory();
}
#endif
