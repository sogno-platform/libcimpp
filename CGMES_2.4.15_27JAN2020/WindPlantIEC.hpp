#ifndef WindPlantIEC_H
#define WindPlantIEC_H

#include "WindPlantDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class WindPlantFreqPcontrolIEC;
class WindPlantReactiveControlIEC;
	/*
	Simplified IEC type plant level model.   Reference: IEC 61400-27-1, AnnexE.
	*/
	class WindPlantIEC: public WindPlantDynamics
	{

	public:
					CIMPP::WindPlantFreqPcontrolIEC* WindPlantFreqPcontrolIEC; 	/* Wind plant frequency and active power control model associated with this wind plant. Default: 0 */
					CIMPP::WindPlantReactiveControlIEC* WindPlantReactiveControlIEC; 	/* Wind plant reactive control model associated with this wind plant. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		WindPlantIEC();
		virtual ~WindPlantIEC();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindPlantIEC_factory();
}
#endif
