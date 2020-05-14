#ifndef PssPTIST3_H
#define PssPTIST3_H

#include "PowerSystemStabilizerDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Seconds.hpp"
#include "Boolean.hpp"
#include "Simple_Float.hpp"

namespace CIMPP {


	/*
	PTI Microprocessor-Based Stabilizer type 3.
	*/
	class PssPTIST3: public PowerSystemStabilizerDynamics
	{

	public:
					CIMPP::PU m; 	/* (M).  M=2*H.  Typical Value = 5. Default: nullptr */
					CIMPP::Seconds tf; 	/* Time constant (Tf).  Typical Value = 0.2. Default: nullptr */
					CIMPP::Seconds tp; 	/* Time constant (Tp).  Typical Value = 0.2. Default: nullptr */
					CIMPP::Seconds t1; 	/* Time constant (T1).  Typical Value = 0.3. Default: nullptr */
					CIMPP::Seconds t2; 	/* Time constant (T2).  Typical Value = 1. Default: nullptr */
					CIMPP::Seconds t3; 	/* Time constant (T3).  Typical Value = 0.2. Default: nullptr */
					CIMPP::Seconds t4; 	/* Time constant (T4).  Typical Value = 0.05. Default: nullptr */
					CIMPP::PU k; 	/* Gain (K).  Typical Value = 9. Default: nullptr */
					CIMPP::Seconds dtf; 	/* Time step frequency calculation (0.03 for 50 Hz) (Dtf).  Typical Value = 0.025. Default: nullptr */
					CIMPP::Seconds dtc; 	/* Time step related to activation of controls (0.03 for 50 Hz) (Dtc).  Typical Value = 0.025. Default: nullptr */
					CIMPP::Seconds dtp; 	/* Time step active power calculation (0.015 for 50 Hz) (Dtp).  Typical Value = 0.0125. Default: nullptr */
					CIMPP::Seconds t5; 	/* Time constant (T5). Default: nullptr */
					CIMPP::Seconds t6; 	/* Time constant (T6). Default: nullptr */
					CIMPP::PU a0; 	/* Filter coefficient (A0). Default: nullptr */
					CIMPP::PU a1; 	/* Limiter (Al). Default: nullptr */
					CIMPP::PU a2; 	/* Filter coefficient (A2). Default: nullptr */
					CIMPP::PU b0; 	/* Filter coefficient (B0). Default: nullptr */
					CIMPP::PU b1; 	/* Filter coefficient (B1). Default: nullptr */
					CIMPP::PU b2; 	/* Filter coefficient (B2). Default: nullptr */
					CIMPP::PU a3; 	/* Filter coefficient (A3). Default: nullptr */
					CIMPP::PU a4; 	/* Filter coefficient (A4). Default: nullptr */
					CIMPP::PU a5; 	/* Filter coefficient (A5). Default: nullptr */
					CIMPP::PU b3; 	/* Filter coefficient (B3). Default: nullptr */
					CIMPP::PU b4; 	/* Filter coefficient (B4). Default: nullptr */
					CIMPP::PU b5; 	/* Filter coefficient (B5). Default: nullptr */
					CIMPP::PU athres; 	/* Threshold value above which output averaging will be bypassed (Athres).  Typical Value = 0.005. Default: nullptr */
					CIMPP::PU dl; 	/* Limiter (Dl). Default: nullptr */
					CIMPP::PU al; 	/* Limiter (Al). Default: nullptr */
					CIMPP::PU lthres; 	/* Threshold value (Lthres). Default: nullptr */
					CIMPP::PU pmin; 	/* (Pmin). Default: nullptr */
					CIMPP::Boolean isw; 	/* Digital/analog output switch (Isw). true = produce analog output false = convert to digital output, using tap selection table. Default: false */
					CIMPP::Simple_Float nav; 	/* Number of control outputs to average (Nav) (1 &lt;= Nav &lt;= 16).  Typical Value = 4. Default: nullptr */
					CIMPP::Simple_Float ncl; 	/* Number of counts at limit to active limit function (Ncl) (&gt;0). Default: nullptr */
					CIMPP::Simple_Float ncr; 	/* Number of counts until reset after limit function is triggered (Ncr). Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		PssPTIST3();
		virtual ~PssPTIST3();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PssPTIST3_factory();
}
#endif
