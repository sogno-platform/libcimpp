#ifndef GovGAST1_H
#define GovGAST1_H
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
#include "ActivePower.hpp"
#include "Frequency.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief Modified single shaft gas turbine. */
	class GovGAST1 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovGAST1();
		~GovGAST1() override;

		/** \brief Turbine power time constant numerator scale factor (a).  Typical Value = 0.8. Default: nullptr */
		CIMPP::Simple_Float a;

		/** \brief Turbine power time constant denominator scale factor (b).  Typical Value = 1. Default: nullptr */
		CIMPP::Simple_Float b;

		/** \brief Intentional dead-band width (db1).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency db1;

		/** \brief Unintentional dead-band (db2).  Unit = MW.  Typical Value = 0. Default: nullptr */
		CIMPP::ActivePower db2;

		/** \brief Intentional db hysteresis (eps).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency eps;

		/** \brief Fuel flow at zero power output (Fidle).  Typical Value = 0.18. Default: nullptr */
		CIMPP::PU fidle;

		/** \brief Nonlinear gain point 1, PU gv (Gv1).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv1;

		/** \brief Nonlinear gain point 2,PU gv (Gv2).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv2;

		/** \brief Nonlinear gain point 3, PU gv (Gv3).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv3;

		/** \brief Nonlinear gain point 4, PU gv (Gv4).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv4;

		/** \brief Nonlinear gain point 5, PU gv (Gv5).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv5;

		/** \brief Nonlinear gain point 6, PU gv (Gv6).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gv6;

		/** \brief Governor gain (Ka).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Temperature limiter gain (Kt).  Typical Value = 3. Default: nullptr */
		CIMPP::PU kt;

		/** \brief Ambient temperature load limit (Lmax).  Lmax is the turbine power output corresponding to the limiting exhaust gas temperature.  Typical Value = 1. Default: nullptr */
		CIMPP::PU lmax;

		/** \brief Valve position change allowed at fast rate (Loadinc).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU loadinc;

		/** \brief Maximum long term fuel valve opening rate (Ltrate).  Typical Value = 0.02. Default: nullptr */
		CIMPP::Simple_Float ltrate;

		/** \brief Base for power values (MWbase) (&gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Nonlinear gain point 1, PU power (Pgv1).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv1;

		/** \brief Nonlinear gain point 2, PU power (Pgv2).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv2;

		/** \brief Nonlinear gain point 3, PU power (Pgv3).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv3;

		/** \brief Nonlinear gain point 4, PU power (Pgv4).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv4;

		/** \brief Nonlinear gain point 5, PU power (Pgv5).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv5;

		/** \brief Nonlinear gain point 6, PU power (Pgv6).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv6;

		/** \brief Permanent droop (R).  Typical Value = 0.04. Default: nullptr */
		CIMPP::PU r;

		/** \brief Maximum fuel valve opening rate (Rmax).  Unit = PU/sec.  Typical Value = 1. Default: nullptr */
		CIMPP::Simple_Float rmax;

		/** \brief Governor mechanism time constant (T1).  T1 represents the natural valve positioning time constant of the governor for small disturbances, as seen when rate limiting is not in effect.  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Turbine power time constant (T2).  T2 represents delay due to internal energy storage of the gas turbine engine. T2 can be used to give a rough approximation to the delay associated with acceleration of the compressor spool of a multi-shaft engine, or with the compressibility of gas in the plenum of the free power turbine of an aero-derivative unit, for example.  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Turbine exhaust temperature time constant (T3).  T3 represents delay in the exhaust temperature and load limiting system. Typical Value = 3. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Governor lead time constant (T4).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Governor lag time constant (T5).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t5;

		/** \brief Valve position averaging time constant (Tltr).  Typical Value = 10. Default: nullptr */
		CIMPP::Seconds tltr;

		/** \brief Maximum turbine power, PU of MWbase (Vmax).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vmax;

		/** \brief Minimum turbine power, PU of MWbase (Vmin).  Typical Value = 0. Default: nullptr */
		CIMPP::PU vmin;

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

	BaseClass* GovGAST1_factory();
}
#endif
