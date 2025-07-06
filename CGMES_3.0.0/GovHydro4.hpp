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
#include "Float.hpp"
#include "Frequency.hpp"
#include "GovHydro4ModelKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Hydro turbine and governor. Represents plants with straight-forward penstock configurations and hydraulic governors of the traditional 'dashpot' type.  This model can be used to represent simple, Francis/Pelton or Kaplan turbines. */
	class GovHydro4 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydro4();
		~GovHydro4() override;

		/** \brief Turbine gain (&lt;i&gt;At&lt;/i&gt;).  Typical value = 1,2. Default: nullptr */
		CIMPP::PU at;

		/** \brief Kaplan blade servo point 0 (&lt;i&gt;Bgv0&lt;/i&gt;) (= 0 for simple, = 0 for Francis/Pelton).  Typical value for Kaplan = 0. Default: nullptr */
		CIMPP::PU bgv0;

		/** \brief Kaplan blade servo point 1 (&lt;i&gt;Bgv1&lt;/i&gt;) (= 0 for simple, = 0 for Francis/Pelton).  Typical value for Kaplan = 0. Default: nullptr */
		CIMPP::PU bgv1;

		/** \brief Kaplan blade servo point 2 (&lt;i&gt;Bgv2&lt;/i&gt;) (= 0 for simple, = 0 for Francis/Pelton).  Typical value for Kaplan = 0,1. Default: nullptr */
		CIMPP::PU bgv2;

		/** \brief Kaplan blade servo point 3 (&lt;i&gt;Bgv3&lt;/i&gt;) (= 0 for simple, = 0 for Francis/Pelton).  Typical value for Kaplan = 0,667. Default: nullptr */
		CIMPP::PU bgv3;

		/** \brief Kaplan blade servo point 4 (&lt;i&gt;Bgv4&lt;/i&gt;) (= 0 for simple, = 0 for Francis/Pelton).  Typical value for Kaplan = 0,9. Default: nullptr */
		CIMPP::PU bgv4;

		/** \brief Kaplan blade servo point 5 (&lt;i&gt;Bgv5&lt;/i&gt;) (= 0 for simple, = 0 for Francis/Pelton).  Typical value for Kaplan = 1. Default: nullptr */
		CIMPP::PU bgv5;

		/** \brief Maximum blade adjustment factor (&lt;i&gt;Bmax&lt;/i&gt;)  (= 0 for simple, = 0 for Francis/Pelton).  Typical value for Kaplan = 1,1276. Default: 0.0 */
		CIMPP::Float bmax;

		/** \brief Intentional deadband width (&lt;i&gt;db1&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::Frequency db1;

		/** \brief Unintentional dead-band (&lt;i&gt;db2&lt;/i&gt;).  Unit = MW.  Typical value = 0. Default: nullptr */
		CIMPP::ActivePower db2;

		/** \brief Turbine damping factor (&lt;i&gt;Dturb&lt;/i&gt;).  Unit = delta P (PU of &lt;i&gt;MWbase&lt;/i&gt;) / delta speed (PU).  Typical value for simple = 0,5, Francis/Pelton = 1,1, Kaplan = 1,1. Default: nullptr */
		CIMPP::PU dturb;

		/** \brief Intentional db hysteresis (&lt;i&gt;eps&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::Frequency eps;

		/** \brief Maximum gate opening, PU of &lt;i&gt;MWbase&lt;/i&gt; (&lt;i&gt;Gmax&lt;/i&gt;) (&amp;gt; GovHydro4.gmin).  Typical value = 1. Default: nullptr */
		CIMPP::PU gmax;

		/** \brief Minimum gate opening, PU of &lt;i&gt;MWbase&lt;/i&gt; (&lt;i&gt;Gmin&lt;/i&gt;) (&amp;lt; GovHydro4.gmax).  Typical value = 0. Default: nullptr */
		CIMPP::PU gmin;

		/** \brief Nonlinear gain point 0, PU gv (&lt;i&gt;Gv0&lt;/i&gt;) (= 0 for simple).  Typical for Francis/Pelton = 0,1, Kaplan = 0,1. Default: nullptr */
		CIMPP::PU gv0;

		/** \brief Nonlinear gain point 1, PU gv (&lt;i&gt;Gv1&lt;/i&gt;) (= 0 for simple, &amp;gt; GovHydro4.gv0 for Francis/Pelton and Kaplan). Typical value for Francis/Pelton = 0,4, Kaplan = 0,4. Default: nullptr */
		CIMPP::PU gv1;

		/** \brief Nonlinear gain point 2, PU gv (&lt;i&gt;Gv2&lt;/i&gt;) (= 0 for simple, &amp;gt; GovHydro4.gv1 for Francis/Pelton and Kaplan). Typical value for Francis/Pelton = 0,5, Kaplan = 0,5. Default: nullptr */
		CIMPP::PU gv2;

		/** \brief Nonlinear gain point 3, PU gv (&lt;i&gt;Gv3&lt;/i&gt;)  (= 0 for simple, &amp;gt; GovHydro4.gv2 for Francis/Pelton and Kaplan). Typical value for Francis/Pelton = 0,7, Kaplan = 0,7. Default: nullptr */
		CIMPP::PU gv3;

		/** \brief Nonlinear gain point 4, PU gv (&lt;i&gt;Gv4&lt;/i&gt;)  (= 0 for simple, &amp;gt; GovHydro4.gv3 for Francis/Pelton and Kaplan). Typical value for  Francis/Pelton = 0,8, Kaplan = 0,8. Default: nullptr */
		CIMPP::PU gv4;

		/** \brief Nonlinear gain point 5, PU gv (&lt;i&gt;Gv5&lt;/i&gt;)  (= 0 for simple, &amp;lt; 1 and &amp;gt; GovHydro4.gv4 for Francis/Pelton and Kaplan). Typical value for Francis/Pelton = 0,9, Kaplan = 0,9. Default: nullptr */
		CIMPP::PU gv5;

		/** \brief Head available at dam (&lt;i&gt;hdam&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU hdam;

		/** \brief The kind of model being represented (simple, Francis/Pelton or Kaplan). Default: 0 */
		CIMPP::GovHydro4ModelKind model;

		/** \brief Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Nonlinear gain point 0, PU power (&lt;i&gt;Pgv0&lt;/i&gt;) (= 0 for simple).  Typical value = 0. Default: nullptr */
		CIMPP::PU pgv0;

		/** \brief Nonlinear gain point 1, PU power (&lt;i&gt;Pgv1&lt;/i&gt;) (= 0 for simple). Typical value for Francis/Pelton = 0,42, Kaplan = 0,35. Default: nullptr */
		CIMPP::PU pgv1;

		/** \brief Nonlinear gain point 2, PU power (&lt;i&gt;Pgv2&lt;/i&gt;) (= 0 for simple). Typical value for Francis/Pelton = 0,56, Kaplan = 0,468. Default: nullptr */
		CIMPP::PU pgv2;

		/** \brief Nonlinear gain point 3, PU power (&lt;i&gt;Pgv3&lt;/i&gt;) (= 0 for simple). Typical value for Francis/Pelton = 0,8, Kaplan = 0,796. Default: nullptr */
		CIMPP::PU pgv3;

		/** \brief Nonlinear gain point 4, PU power (&lt;i&gt;Pgv4&lt;/i&gt;) (= 0 for simple). Typical value for Francis/Pelton = 0,9, Kaplan = 0,917. Default: nullptr */
		CIMPP::PU pgv4;

		/** \brief Nonlinear gain point 5, PU power (&lt;i&gt;Pgv5&lt;/i&gt;) (= 0 for simple).  Typical value for Francis/Pelton = 0,97, Kaplan = 0,99. Default: nullptr */
		CIMPP::PU pgv5;

		/** \brief No-load flow at nominal head (&lt;i&gt;Qnl&lt;/i&gt;). Typical value for simple = 0,08, Francis/Pelton = 0, Kaplan = 0. Default: nullptr */
		CIMPP::PU qnl;

		/** \brief Permanent droop (&lt;i&gt;Rperm&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds rperm;

		/** \brief Temporary droop (&lt;i&gt;Rtemp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,3. Default: nullptr */
		CIMPP::Seconds rtemp;

		/** \brief Blade servo time constant (&lt;i&gt;Tblade&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 100. Default: nullptr */
		CIMPP::Seconds tblade;

		/** \brief Gate servo time constant (&lt;i&gt;Tg&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,5. Default: nullptr */
		CIMPP::Seconds tg;

		/** \brief Pilot servo time constant (&lt;i&gt;Tp&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds tp;

		/** \brief Dashpot time constant (&lt;i&gt;Tr&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 5. Default: nullptr */
		CIMPP::Seconds tr;

		/** \brief Water inertia time constant (&lt;i&gt;Tw&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds tw;

		/** \brief Max gate closing velocity (&lt;i&gt;Uc&lt;/i&gt;).  Typical value = 0,2. Default: 0.0 */
		CIMPP::Float uc;

		/** \brief Max gate opening velocity (&lt;i&gt;Uo&lt;/i&gt;).  Typical value = 0,2. Default: 0.0 */
		CIMPP::Float uo;

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
