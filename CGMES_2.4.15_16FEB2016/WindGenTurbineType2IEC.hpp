#ifndef WindGenTurbineType2IEC_H
#define WindGenTurbineType2IEC_H

#include "WindTurbineType1or2IEC.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class WindContRotorRIEC;
class WindPitchContEmulIEC;
	/*
	Wind turbine IEC Type 2.  Reference: IEC Standard 61400-27-1, section 6.5.3.
	*/
	class WindGenTurbineType2IEC: public WindTurbineType1or2IEC
	{

	public:
					CIMPP::WindContRotorRIEC* WindContRotorRIEC; 	/* Wind control rotor resistance model associated with wind turbine type 2 model. Default: 0 */
					CIMPP::WindPitchContEmulIEC* WindPitchContEmulIEC; 	/* Pitch control emulator model associated with this wind turbine type 2 model. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		WindGenTurbineType2IEC();
		virtual ~WindGenTurbineType2IEC();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindGenTurbineType2IEC_factory();
}
#endif
