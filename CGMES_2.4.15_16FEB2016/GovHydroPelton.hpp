#ifndef GovHydroPelton_H
#define GovHydroPelton_H

#include "TurbineGovernorDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Area.hpp"
#include "PU.hpp"
#include "Frequency.hpp"
#include "Length.hpp"
#include "VolumeFlowRate.hpp"
#include "Boolean.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP {


	/*
	Detailed hydro unit - Pelton model.  This model can be used to represent the dynamic related to water tunnel and surge chamber. A schematic of the hydraulic system of detailed hydro unit models, like Francis and Pelton, is located under the GovHydroFrancis class.
	*/
	class GovHydroPelton: public TurbineGovernorDynamics
	{

	public:
					CIMPP::Area av0; 	/* Area of the surge tank (A). Unit = m. Typical Value = 30. Default: nullptr */
					CIMPP::Area av1; 	/* Area of the compensation tank (A). Unit = m. Typical Value = 700. Default: nullptr */
					CIMPP::PU bp; 	/* Droop (bp).  Typical Value = 0.05. Default: nullptr */
					CIMPP::Frequency db1; 	/* Intentional dead-band width (DB1).  Unit = Hz.  Typical Value = 0. Default: nullptr */
					CIMPP::Frequency db2; 	/* Intentional dead-band width of valve opening error (DB2). Unit = Hz.  Typical Value = 0.01. Default: nullptr */
					CIMPP::Length h1; 	/* Head of compensation chamber water level with respect to the level of penstock (H).  Unit = m. Typical Value = 4. Default: nullptr */
					CIMPP::Length h2; 	/* Head of surge tank water level with respect to the level of penstock (H).  Unit = m. Typical Value = 40. Default: nullptr */
					CIMPP::Length hn; 	/* Rated hydraulic head (H).  Unit = m. Typical Value = 250. Default: nullptr */
					CIMPP::PU kc; 	/* Penstock loss coefficient (due to friction) (Kc).  Typical Value = 0.025. Default: nullptr */
					CIMPP::PU kg; 	/* Water tunnel and surge chamber loss coefficient (due to friction) (Kg).  Typical Value = -0.025. Default: nullptr */
					CIMPP::PU qc0; 	/* No-load turbine flow at nominal head (Qc0).  Typical Value = 0.05. Default: nullptr */
					CIMPP::VolumeFlowRate qn; 	/* Rated flow (Q). Unit = m/s. Typical Value = 40. Default: nullptr */
					CIMPP::Boolean simplifiedPelton; 	/* Simplified Pelton model simulation (Sflag). true = enable of simplified Pelton model simulation false = enable of complete Pelton model simulation (non linear gain). Typical Value = false. Default: false */
					CIMPP::Boolean staticCompensating; 	/* Static compensating characteristic (Cflag). true = enable of static compensating characteristic  false = inhibit of static compensating characteristic. Typical Value = false. Default: false */
					CIMPP::Seconds ta; 	/* Derivative gain (accelerometer time constant) (Ta).  Typical Value = 3. Default: nullptr */
					CIMPP::Seconds ts; 	/* Gate servo time constant (Ts).  Typical Value = 0.15. Default: nullptr */
					CIMPP::Seconds tv; 	/* Servomotor integrator time constant (TV).  Typical Value = 0.3. Default: nullptr */
					CIMPP::Seconds twnc; 	/* Water inertia time constant (Twnc).  Typical Value = 1. Default: nullptr */
					CIMPP::Seconds twng; 	/* Water tunnel and surge chamber inertia time constant (Twng). Typical Value = 3. Default: nullptr */
					CIMPP::Seconds tx; 	/* Electronic integrator time constant (Tx).  Typical Value = 0.5. Default: nullptr */
					CIMPP::Simple_Float va; 	/* Maximum gate opening velocity (Va).  Unit = PU/sec.  Typical Value = 0.016. Default: nullptr */
					CIMPP::PU valvmax; 	/* Maximum gate opening (ValvMax).  Typical Value = 1. Default: nullptr */
					CIMPP::PU valvmin; 	/* Minimum gate opening (ValvMin).  Typical Value = 0. Default: nullptr */
					CIMPP::PU vav; 	/* Maximum servomotor valve opening velocity (Vav).  Typical Value = 0.017. Default: nullptr */
					CIMPP::Simple_Float vc; 	/* Maximum gate closing velocity (Vc).  Unit = PU/sec.  Typical Value = -0.016. Default: nullptr */
					CIMPP::PU vcv; 	/* Maximum servomotor valve closing velocity (Vcv).  Typical Value = -0.017. Default: nullptr */
					CIMPP::Boolean waterTunnelSurgeChamberSimulation; 	/* Water tunnel and surge chamber simulation (Tflag). true = enable of water tunnel and surge chamber simulation false = inhibit of water tunnel and surge chamber simulation. Typical Value = false. Default: false */
					CIMPP::Length zsfc; 	/* Head of upper water level with respect to the level of penstock (Zsfc).  Unit = m. Typical Value = 25. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		GovHydroPelton();
		virtual ~GovHydroPelton();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* GovHydroPelton_factory();
}
#endif
