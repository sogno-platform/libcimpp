#ifndef GovHydroPelton_H
#define GovHydroPelton_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Area.hpp"
#include "Boolean.hpp"
#include "Frequency.hpp"
#include "Length.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "VolumeFlowRate.hpp"

namespace CIMPP
{

	/** \brief Detailed hydro unit - Pelton model.  This model can be used to represent the dynamic related to water tunnel and surge chamber. A schematic of the hydraulic system of detailed hydro unit models, like Francis and Pelton, is located under the GovHydroFrancis class. */
	class GovHydroPelton : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydroPelton();
		~GovHydroPelton() override;

		/** \brief Area of the surge tank (A). Unit = m. Typical Value = 30. Default: nullptr */
		CIMPP::Area av0;

		/** \brief Area of the compensation tank (A). Unit = m. Typical Value = 700. Default: nullptr */
		CIMPP::Area av1;

		/** \brief Droop (bp).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU bp;

		/** \brief Intentional dead-band width (DB1).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency db1;

		/** \brief Intentional dead-band width of valve opening error (DB2). Unit = Hz.  Typical Value = 0.01. Default: nullptr */
		CIMPP::Frequency db2;

		/** \brief Head of compensation chamber water level with respect to the level of penstock (H).  Unit = m. Typical Value = 4. Default: nullptr */
		CIMPP::Length h1;

		/** \brief Head of surge tank water level with respect to the level of penstock (H).  Unit = m. Typical Value = 40. Default: nullptr */
		CIMPP::Length h2;

		/** \brief Rated hydraulic head (H).  Unit = m. Typical Value = 250. Default: nullptr */
		CIMPP::Length hn;

		/** \brief Penstock loss coefficient (due to friction) (Kc).  Typical Value = 0.025. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Water tunnel and surge chamber loss coefficient (due to friction) (Kg).  Typical Value = -0.025. Default: nullptr */
		CIMPP::PU kg;

		/** \brief No-load turbine flow at nominal head (Qc0).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU qc0;

		/** \brief Rated flow (Q). Unit = m/s. Typical Value = 40. Default: nullptr */
		CIMPP::VolumeFlowRate qn;

		/** \brief Simplified Pelton model simulation (Sflag). true = enable of simplified Pelton model simulation false = enable of complete Pelton model simulation (non linear gain). Typical Value = false. Default: false */
		CIMPP::Boolean simplifiedPelton;

		/** \brief Static compensating characteristic (Cflag). true = enable of static compensating characteristic  false = inhibit of static compensating characteristic. Typical Value = false. Default: false */
		CIMPP::Boolean staticCompensating;

		/** \brief Derivative gain (accelerometer time constant) (Ta).  Typical Value = 3. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Gate servo time constant (Ts).  Typical Value = 0.15. Default: nullptr */
		CIMPP::Seconds ts;

		/** \brief Servomotor integrator time constant (TV).  Typical Value = 0.3. Default: nullptr */
		CIMPP::Seconds tv;

		/** \brief Water inertia time constant (Twnc).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds twnc;

		/** \brief Water tunnel and surge chamber inertia time constant (Twng). Typical Value = 3. Default: nullptr */
		CIMPP::Seconds twng;

		/** \brief Electronic integrator time constant (Tx).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds tx;

		/** \brief Maximum gate opening velocity (Va).  Unit = PU/sec.  Typical Value = 0.016. Default: nullptr */
		CIMPP::Simple_Float va;

		/** \brief Maximum gate opening (ValvMax).  Typical Value = 1. Default: nullptr */
		CIMPP::PU valvmax;

		/** \brief Minimum gate opening (ValvMin).  Typical Value = 0. Default: nullptr */
		CIMPP::PU valvmin;

		/** \brief Maximum servomotor valve opening velocity (Vav).  Typical Value = 0.017. Default: nullptr */
		CIMPP::PU vav;

		/** \brief Maximum gate closing velocity (Vc).  Unit = PU/sec.  Typical Value = -0.016. Default: nullptr */
		CIMPP::Simple_Float vc;

		/** \brief Maximum servomotor valve closing velocity (Vcv).  Typical Value = -0.017. Default: nullptr */
		CIMPP::PU vcv;

		/** \brief Water tunnel and surge chamber simulation (Tflag). true = enable of water tunnel and surge chamber simulation false = inhibit of water tunnel and surge chamber simulation. Typical Value = false. Default: false */
		CIMPP::Boolean waterTunnelSurgeChamberSimulation;

		/** \brief Head of upper water level with respect to the level of penstock (Zsfc).  Unit = m. Typical Value = 25. Default: nullptr */
		CIMPP::Length zsfc;

		static const char debugName[];
		const char* debugString() const override;

		const std::list<std::string>& getAttributeNames() const override;

		const std::string& getClassNamespaceUrl() const override;
		const std::string& getAttributeNamespaceUrl(const std::string& attrName) const override;

		const std::list<CGMESProfile>& getPossibleProfiles() const override;
		const CGMESProfile& getRecommendedProfile() const override;
		const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const override;
		const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;

		bool isAssignableFrom(BaseClass* otherObject) const override;
		static const BaseClassDefiner declare();

	protected:
		std::map<std::string, AttrDetails> allAttrDetailsMap() const override;
	};

	BaseClass* GovHydroPelton_factory();
}
#endif
