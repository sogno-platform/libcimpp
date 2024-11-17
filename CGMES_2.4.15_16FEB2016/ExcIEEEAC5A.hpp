#ifndef ExcIEEEAC5A_H
#define ExcIEEEAC5A_H

#include "ExcitationSystemDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	The class represents IEEE Std 421.5-2005 type AC5A model. The model represents a simplified model for brushless excitation systems. The regulator is supplied from a source, such as a permanent magnet generator, which is not affected by system disturbances.  Unlike other ac models, this model uses loaded rather than open circuit exciter saturation data in the same way as it is used for the dc models.  Because the model has been widely implemented by the industry, it is sometimes used to represent other types of systems when either detailed data for them are not available or simplified models are required.   Reference: IEEE Standard 421.5-2005 Section 6.5.
	*/
	class ExcIEEEAC5A: public ExcitationSystemDynamics
	{

	public:
					CIMPP::PU efd1; 	/* Exciter voltage at which exciter saturation is defined (E).  Typical Value = 5.6. Default: nullptr */
					CIMPP::PU efd2; 	/* Exciter voltage at which exciter saturation is defined (E).  Typical Value = 4.2. Default: nullptr */
					CIMPP::PU ka; 	/* Voltage regulator gain (K).  Typical Value = 400. Default: nullptr */
					CIMPP::PU ke; 	/* Exciter constant related to self-excited field (K).  Typical Value = 1. Default: nullptr */
					CIMPP::PU kf; 	/* Excitation control system stabilizer gains (K).  Typical Value = 0.03. Default: nullptr */
					CIMPP::Simple_Float seefd1; 	/* Exciter saturation function value at the corresponding exciter voltage, E (S[E]).  Typical Value = 0.86. Default: nullptr */
					CIMPP::Simple_Float seefd2; 	/* Exciter saturation function value at the corresponding exciter voltage, E (S[E]).  Typical Value = 0.5. Default: nullptr */
					CIMPP::Seconds ta; 	/* Voltage regulator time constant (T).  Typical Value = 0.02. Default: nullptr */
					CIMPP::Seconds te; 	/* Exciter time constant, integration rate associated with exciter control (T).  Typical Value = 0.8. Default: nullptr */
					CIMPP::Seconds tf1; 	/* Excitation control system stabilizer time constant (T).  Typical Value = 1. Default: nullptr */
					CIMPP::Seconds tf2; 	/* Excitation control system stabilizer time constant (T).  Typical Value = 1. Default: nullptr */
					CIMPP::Seconds tf3; 	/* Excitation control system stabilizer time constant (T).  Typical Value = 1. Default: nullptr */
					CIMPP::PU vrmax; 	/* Maximum voltage regulator output (V).  Typical Value = 7.3. Default: nullptr */
					CIMPP::PU vrmin; 	/* Minimum voltage regulator output (V).  Typical Value = -7.3. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		ExcIEEEAC5A();
		virtual ~ExcIEEEAC5A();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ExcIEEEAC5A_factory();
}
#endif
