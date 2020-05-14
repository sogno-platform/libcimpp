#ifndef WindGenTurbineType3IEC_H
#define WindGenTurbineType3IEC_H

#include "WindTurbineType3or4IEC.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"

namespace CIMPP {


class WindAeroLinearIEC;
class WindContPitchAngleIEC;
class WindContPType3IEC;
class WindMechIEC;
	/*
	Generator model for wind turbines of IEC type 3A and 3B.
	*/
	class WindGenTurbineType3IEC: public WindTurbineType3or4IEC
	{

	public:
					CIMPP::WindAeroLinearIEC* WindAeroLinearIEC; 	/* Wind aerodynamic model associated with this wind generator type 3 model. Default: 0 */
					CIMPP::WindContPitchAngleIEC* WindContPitchAngleIEC; 	/* Wind control pitch angle model associated with this wind turbine type 3. Default: 0 */
					CIMPP::WindContPType3IEC* WindContPType3IEC; 	/* Wind control P type 3 model associated with this wind turbine type 3 model. Default: 0 */
					CIMPP::PU dipmax; 	/* Maximum active current ramp rate (di). It is project dependent parameter. Default: nullptr */
					CIMPP::PU diqmax; 	/* Maximum reactive current ramp rate (di). It is project dependent parameter. Default: nullptr */
					CIMPP::WindMechIEC* WindMechIEC; 	/* Wind mechanical model associated with this wind turbine Type 3 model. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		WindGenTurbineType3IEC();
		virtual ~WindGenTurbineType3IEC();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindGenTurbineType3IEC_factory();
}
#endif
