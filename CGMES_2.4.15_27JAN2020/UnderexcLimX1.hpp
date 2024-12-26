#ifndef UnderexcLimX1_H
#define UnderexcLimX1_H

#include "UnderexcitationLimiterDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	
	*/
	class UnderexcLimX1: public UnderexcitationLimiterDynamics
	{

	public:
					CIMPP::PU k; 	/* Minimum excitation limit slope (K) (&gt;0). Default: nullptr */
					CIMPP::PU kf2; 	/* Differential gain (Kf2). Default: nullptr */
					CIMPP::PU km; 	/* Minimum excitation limit gain (Km). Default: nullptr */
					CIMPP::PU melmax; 	/* Minimum excitation limit value (MELMAX). Default: nullptr */
					CIMPP::Seconds tf2; 	/* Differential time constant (Tf2) (&gt;0). Default: nullptr */
					CIMPP::Seconds tm; 	/* Minimum excitation limit time constant (Tm). Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		UnderexcLimX1();
		virtual ~UnderexcLimX1();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* UnderexcLimX1_factory();
}
#endif
