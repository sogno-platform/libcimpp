#ifndef WindProtectionIEC_H
#define WindProtectionIEC_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP {


class WindTurbineType1or2IEC;
class WindTurbineType3or4IEC;
	/*
	The grid protection model includes protection against over and under voltage, and against over and under frequency.  Reference: IEC Standard 614000-27-1 Section 6.6.6.
	*/
	class WindProtectionIEC: public IdentifiedObject
	{

	public:
					CIMPP::WindTurbineType1or2IEC* WindTurbineType1or2IEC; 	/* Wind generator type 1 or 2 model with which this wind turbine protection model is associated. Default: 0 */
					CIMPP::WindTurbineType3or4IEC* WindTurbineType3or4IEC; 	/* Wind generator type 3 or 4 model with which this wind turbine protection model is associated. Default: 0 */
					CIMPP::PU fover; 	/* Set of wind turbine over frequency protection levels (). It is project dependent parameter. Default: nullptr */
					CIMPP::PU funder; 	/* Set of wind turbine under frequency protection levels (). It is project dependent parameter. Default: nullptr */
					CIMPP::Seconds tfover; 	/* Set of corresponding wind turbine over frequency protection disconnection times (). It is project dependent parameter. Default: nullptr */
					CIMPP::Seconds tfunder; 	/* Set of corresponding wind turbine under frequency protection disconnection times (). It is project dependent parameter. Default: nullptr */
					CIMPP::Seconds tuover; 	/* Set of corresponding wind turbine over voltage protection disconnection times (). It is project dependent parameter. Default: nullptr */
					CIMPP::Seconds tuunder; 	/* Set of corresponding wind turbine under voltage protection disconnection times (). It is project dependent parameter. Default: nullptr */
					CIMPP::PU uover; 	/* Set of wind turbine over voltage protection levels (). It is project dependent parameter. Default: nullptr */
					CIMPP::PU uunder; 	/* Set of wind turbine under voltage protection levels (). It is project dependent parameter. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		WindProtectionIEC();
		virtual ~WindProtectionIEC();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindProtectionIEC_factory();
}
#endif
