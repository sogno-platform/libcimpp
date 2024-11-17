#ifndef OverexcLim2_H
#define OverexcLim2_H

#include "OverexcitationLimiterDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"

namespace CIMPP {


	/*
	Different from LimIEEEOEL, LimOEL2 has a fixed pickup threshold and reduces the excitation set-point by mean of non-windup integral regulator. Irated is the rated machine excitation current (calculated from nameplate conditions: V, P, CosPhi).
	*/
	class OverexcLim2: public OverexcitationLimiterDynamics
	{

	public:
					CIMPP::PU ifdlim; 	/* Limit value of rated field current (I).  Typical Value = 1.05. Default: nullptr */
					CIMPP::PU koi; 	/* Gain Over excitation limiter (K).  Typical Value = 0.1. Default: nullptr */
					CIMPP::PU voimax; 	/* Maximum error signal (V).  Typical Value = 0. Default: nullptr */
					CIMPP::PU voimin; 	/* Minimum error signal (V).  Typical Value = -9999. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		OverexcLim2();
		virtual ~OverexcLim2();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* OverexcLim2_factory();
}
#endif
