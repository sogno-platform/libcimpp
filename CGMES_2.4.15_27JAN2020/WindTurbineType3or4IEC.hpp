#ifndef WindTurbineType3or4IEC_H
#define WindTurbineType3or4IEC_H

#include "WindTurbineType3or4Dynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class WindContQIEC;
class WindContCurrLimIEC;
class WindProtectionIEC;
	/*
	Parent class supporting relationships to IEC wind turbines Type 3 and 4 and wind plant including their control models.
	*/
	class WindTurbineType3or4IEC: public WindTurbineType3or4Dynamics
	{

	public:
					CIMPP::WindContQIEC* WIndContQIEC; 	/* Wind control Q model associated with this wind turbine type 3 or 4 model. Default: 0 */
					CIMPP::WindContCurrLimIEC* WindContCurrLimIEC; 	/* Wind control current limitation model associated with this wind turbine type 3 or 4 model. Default: 0 */
					CIMPP::WindProtectionIEC* WindProtectionIEC; 	/* Wind turbune protection model associated with this wind generator type 3 or 4 model. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		WindTurbineType3or4IEC();
		virtual ~WindTurbineType3or4IEC();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindTurbineType3or4IEC_factory();
}
#endif
