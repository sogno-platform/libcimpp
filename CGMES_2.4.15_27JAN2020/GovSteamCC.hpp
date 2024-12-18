#ifndef GovSteamCC_H
#define GovSteamCC_H

#include "TurbineGovernorDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "ActivePower.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Cross compound turbine governor model.
	*/
	class GovSteamCC: public TurbineGovernorDynamics
	{

	public:
					CIMPP::PU dhp; 	/* HP damping factor (Dhp).  Typical Value = 0. Default: nullptr */
					CIMPP::PU dlp; 	/* LP damping factor (Dlp).  Typical Value = 0. Default: nullptr */
					CIMPP::PU fhp; 	/* Fraction of HP power ahead of reheater (Fhp).  Typical Value = 0.3. Default: nullptr */
					CIMPP::PU flp; 	/* Fraction of LP power ahead of reheater (Flp).  Typical Value = 0.7. Default: nullptr */
					CIMPP::ActivePower mwbase; 	/* Base for power values (MWbase) (&gt;0).  Unit = MW. Default: nullptr */
					CIMPP::PU pmaxhp; 	/* Maximum HP value position (Pmaxhp).  Typical Value = 1. Default: nullptr */
					CIMPP::PU pmaxlp; 	/* Maximum LP value position (Pmaxlp).  Typical Value = 1. Default: nullptr */
					CIMPP::PU rhp; 	/* HP governor droop (Rhp).  Typical Value = 0.05. Default: nullptr */
					CIMPP::PU rlp; 	/* LP governor droop (Rlp).  Typical Value = 0.05. Default: nullptr */
					CIMPP::Seconds t1hp; 	/* HP governor time constant (T1hp).  Typical Value = 0.1. Default: nullptr */
					CIMPP::Seconds t1lp; 	/* LP governor time constant (T1lp).  Typical Value = 0.1. Default: nullptr */
					CIMPP::Seconds t3hp; 	/* HP turbine time constant (T3hp).  Typical Value = 0.1. Default: nullptr */
					CIMPP::Seconds t3lp; 	/* LP turbine time constant (T3lp).  Typical Value = 0.1. Default: nullptr */
					CIMPP::Seconds t4hp; 	/* HP turbine time constant (T4hp).  Typical Value = 0.1. Default: nullptr */
					CIMPP::Seconds t4lp; 	/* LP turbine time constant (T4lp).  Typical Value = 0.1. Default: nullptr */
					CIMPP::Seconds t5hp; 	/* HP reheater time constant (T5hp).  Typical Value = 10. Default: nullptr */
					CIMPP::Seconds t5lp; 	/* LP reheater time constant (T5lp).  Typical Value = 10. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		GovSteamCC();
		virtual ~GovSteamCC();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* GovSteamCC_factory();
}
#endif
