#ifndef ExcAVR5_H
#define ExcAVR5_H

#include "ExcitationSystemDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Manual excitation control with field circuit resistance. This model can be used as a very simple representation of manual voltage control.
	*/
	class ExcAVR5: public ExcitationSystemDynamics
	{

	public:
					CIMPP::PU ka; 	/* Gain (Ka). Default: nullptr */
					CIMPP::Seconds ta; 	/* Time constant (Ta). Default: nullptr */
					CIMPP::PU rex; 	/* Effective Output Resistance (Rex). Rex represents the effective output resistance seen by the excitation system. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		ExcAVR5();
		virtual ~ExcAVR5();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ExcAVR5_factory();
}
#endif
