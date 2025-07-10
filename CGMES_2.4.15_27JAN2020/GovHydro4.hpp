#ifndef GovHydro4_H
#define GovHydro4_H
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

	/** \brief Hydro turbine and governor. Represents plants with straight-forward penstock configurations and hydraulic governors of traditional 'dashpot' type.  This model can be used to represent simple, Francis, Pelton or Kaplan turbines. */
	class GovHydro4 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydro4();
		~GovHydro4() override;

		/** \brief Turbine gain (At).  Typical Value = 1.2. Default: nullptr */
		CIMPP::PU at;

		/** \brief Kaplan blade servo point 0 (Bgv0).  Typical Value = 0. Default: nullptr */
		CIMPP::PU bgv0;

		/** \brief Kaplan blade servo point 1 (Bgv1).  Typical Value = 0. Default: nullptr */
		CIMPP::PU bgv1;

		/** \brief Kaplan blade servo point 2 (Bgv2). Typical Value = 0.  Typical Value Francis = 0, Kaplan = 0.1. Default: nullptr */
		CIMPP::PU bgv2;

		/** \brief Kaplan blade servo point 3 (Bgv3). Typical Value = 0.  Typical Value Francis = 0, Kaplan = 0.667. Default: nullptr */
		CIMPP::PU bgv3;

		/** \brief Kaplan blade servo point 4 (Bgv4).  Typical Value = 0.  Typical Value Francis = 0, Kaplan = 0.9. Default: nullptr */
		CIMPP::PU bgv4;

		/** \brief Kaplan blade servo point 5 (Bgv5). Typical Value = 0.  Typical Value Francis = 0, Kaplan = 1. Default: nullptr */
		CIMPP::PU bgv5;

		/** \brief Maximum blade adjustment factor (Bmax). Typical Value = 0.  Typical Value Francis = 0, Kaplan = 1.1276. Default: nullptr */
		CIMPP::Simple_Float bmax;

		/** \brief Intentional deadband width (db1).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency db1;

		/** \brief Unintentional dead-band (db2).  Unit = MW.  Typical Value = 0. Default: nullptr */
		CIMPP::ActivePower db2;

		/** \brief Turbine damping factor (Dturb).  Unit = delta P (PU of MWbase) / delta speed (PU). Typical Value = 0.5.  Typical Value Francis = 1.1, Kaplan = 1.1. Default: nullptr */
		CIMPP::PU dturb;

		/** \brief Intentional db hysteresis (eps).  Unit = Hz.  Typical Value = 0. Default: nullptr */
		CIMPP::Frequency eps;

		/** \brief Maximum gate opening, PU of MWbase (Gmax).  Typical Value = 1. Default: nullptr */
		CIMPP::PU gmax;

		/** \brief Minimum gate opening, PU of MWbase (Gmin).  Typical Value = 0. Default: nullptr */
		CIMPP::PU gmin;

		/** \brief Nonlinear gain point 0, PU gv (Gv0). Typical Value = 0.  Typical Value Francis = 0.1, Kaplan = 0.1. Default: nullptr */
		CIMPP::PU gv0;

		/** \brief Nonlinear gain point 1, PU gv (Gv1). Typical Value = 0.  Typical Value Francis = 0.4, Kaplan = 0.4. Default: nullptr */
		CIMPP::PU gv1;

		/** \brief Nonlinear gain point 2, PU gv (Gv2). Typical Value = 0.  Typical Value Francis = 0.5, Kaplan = 0.5. Default: nullptr */
		CIMPP::PU gv2;

		/** \brief Nonlinear gain point 3, PU gv (Gv3). Typical Value = 0.  Typical Value Francis = 0.7, Kaplan = 0.7. Default: nullptr */
		CIMPP::PU gv3;

		/** \brief Nonlinear gain point 4, PU gv (Gv4). Typical Value = 0.  Typical Value Francis = 0.8, Kaplan = 0.8. Default: nullptr */
		CIMPP::PU gv4;

		/** \brief Nonlinear gain point 5, PU gv (Gv5). Typical Value = 0.  Typical Value Francis = 0.9, Kaplan = 0.9. Default: nullptr */
		CIMPP::PU gv5;

		/** \brief Head available at dam (hdam).  Typical Value = 1. Default: nullptr */
		CIMPP::PU hdam;

		/** \brief Base for power values (MWbase) (&gt;0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Nonlinear gain point 0, PU power (Pgv0).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pgv0;

		/** \brief Nonlinear gain point 1, PU power (Pgv1). Typical Value = 0.  Typical Value Francis = 0.42, Kaplan = 0.35. Default: nullptr */
		CIMPP::PU pgv1;

		/** \brief Nonlinear gain point 2, PU power (Pgv2). Typical Value = 0.  Typical Value Francis = 0.56, Kaplan = 0.468. Default: nullptr */
		CIMPP::PU pgv2;

		/** \brief Nonlinear gain point 3, PU power (Pgv3). Typical Value = 0.  Typical Value Francis = 0.8, Kaplan = 0.796. Default: nullptr */
		CIMPP::PU pgv3;

		/** \brief Nonlinear gain point 4, PU power (Pgv4). Typical Value = 0.  Typical Value Francis = 0.9, Kaplan = 0.917. Default: nullptr */
		CIMPP::PU pgv4;

		/** \brief Nonlinear gain point 5, PU power (Pgv5).  Typical Value = 0.  Typical Value Francis = 0.97, Kaplan = 0.99. Default: nullptr */
		CIMPP::PU pgv5;

		/** \brief No-load flow at nominal head (Qnl). Typical Value = 0.08.  Typical Value Francis = 0, Kaplan = 0. Default: nullptr */
		CIMPP::PU qn1;

		/** \brief Permanent droop (Rperm).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Seconds rperm;

		/** \brief Temporary droop (Rtemp).  Typical Value = 0.3. Default: nullptr */
		CIMPP::Seconds rtemp;

		/** \brief Blade servo time constant (Tblade).  Typical Value = 100. Default: nullptr */
		CIMPP::Seconds tblade;

		/** \brief Gate servo time constant (Tg) (&gt;0).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds tg;

		/** \brief Pilot servo time constant (Tp).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds tp;

		/** \brief Dashpot time constant (Tr) (&gt;0).  Typical Value = 5. Default: nullptr */
		CIMPP::Seconds tr;

		/** \brief Water inertia time constant (Tw) (&gt;0).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tw;

		/** \brief Max gate closing velocity (Uc).  Typical Value = 0.2. Default: nullptr */
		CIMPP::Simple_Float uc;

		/** \brief Max gate opening velocity (Uo).  Typical Vlaue = 0.2. Default: nullptr */
		CIMPP::Simple_Float uo;

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

	BaseClass* GovHydro4_factory();
}
#endif
