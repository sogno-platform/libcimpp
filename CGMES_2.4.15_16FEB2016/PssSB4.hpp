#ifndef PssSB4_H
#define PssSB4_H

#include "PowerSystemStabilizerDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Seconds.hpp"
#include "PU.hpp"

namespace CIMPP {


	/*
	Power sensitive stabilizer model.
	*/
	class PssSB4: public PowerSystemStabilizerDynamics
	{

	public:
					CIMPP::Seconds tt; 	/* Time constant (Tt). Default: nullptr */
					CIMPP::PU kx; 	/* Gain (Kx). Default: nullptr */
					CIMPP::Seconds tx2; 	/* Time constant (Tx2). Default: nullptr */
					CIMPP::Seconds ta; 	/* Time constant (Ta). Default: nullptr */
					CIMPP::Seconds tx1; 	/* Reset time constant (Tx1). Default: nullptr */
					CIMPP::Seconds tb; 	/* Time constant (Tb). Default: nullptr */
					CIMPP::Seconds tc; 	/* Time constant (Tc). Default: nullptr */
					CIMPP::Seconds td; 	/* Time constant (Td). Default: nullptr */
					CIMPP::Seconds te; 	/* Time constant (Te). Default: nullptr */
					CIMPP::PU vsmax; 	/* Limiter (Vsmax). Default: nullptr */
					CIMPP::PU vsmin; 	/* Limiter (Vsmin). Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		PssSB4();
		virtual ~PssSB4();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PssSB4_factory();
}
#endif
