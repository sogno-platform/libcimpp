#ifndef WindPitchContEmulIEC_H
#define WindPitchContEmulIEC_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Simple_Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP {


class WindGenTurbineType2IEC;
	/*
	Pitch control emulator model.  Reference: IEC Standard 61400-27-1 Section 6.6.5.1.
	*/
	class WindPitchContEmulIEC: public IdentifiedObject
	{

	public:
					CIMPP::WindGenTurbineType2IEC* WindGenTurbineType2IEC; 	/* Wind turbine type 2 model with which this Pitch control emulator model is associated. Default: 0 */
					CIMPP::Simple_Float kdroop; 	/* Power error gain (). It is case dependent parameter. Default: nullptr */
					CIMPP::Simple_Float kipce; 	/* Pitch control emulator integral constant (). It is type dependent parameter. Default: nullptr */
					CIMPP::PU komegaaero; 	/* Aerodynamic power change vs. omegachange (). It is case dependent parameter. Default: nullptr */
					CIMPP::Simple_Float kppce; 	/* Pitch control emulator proportional constant (). It is type dependent parameter. Default: nullptr */
					CIMPP::PU omegaref; 	/* Rotor speed in initial steady state (omega). It is case dependent parameter. Default: nullptr */
					CIMPP::PU pimax; 	/* Maximum steady state power (). It is case dependent parameter. Default: nullptr */
					CIMPP::PU pimin; 	/* Minimum steady state power (). It is case dependent parameter. Default: nullptr */
					CIMPP::Seconds t1; 	/* First time constant in pitch control lag (). It is type dependent parameter. Default: nullptr */
					CIMPP::Seconds t2; 	/* Second time constant in pitch control lag (). It is type dependent parameter. Default: nullptr */
					CIMPP::Seconds tpe; 	/* Time constant in generator air gap power lag (). It is type dependent parameter. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		WindPitchContEmulIEC();
		virtual ~WindPitchContEmulIEC();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindPitchContEmulIEC_factory();
}
#endif
