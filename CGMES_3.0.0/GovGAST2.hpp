#ifndef GovGAST2_H
#define GovGAST2_H
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
#include "Integer.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Temperature.hpp"

namespace CIMPP
{

	/** \brief Gas turbine. */
	class GovGAST2 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovGAST2();
		~GovGAST2() override;

		/** \brief Valve positioner (&lt;i&gt;A&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float a;

		/** \brief Exhaust temperature parameter (&lt;i&gt;Af1&lt;/i&gt;).  Unit = PU temperature.  Based on temperature in degrees C. Default: nullptr */
		CIMPP::PU af1;

		/** \brief Coefficient equal to 0,5(1-speed) (&lt;i&gt;Af2&lt;/i&gt;). Default: nullptr */
		CIMPP::PU af2;

		/** \brief Valve positioner (&lt;i&gt;B&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float b;

		/** \brief (&lt;i&gt;Bf1&lt;/i&gt;).  &lt;i&gt;Bf1&lt;/i&gt; = &lt;i&gt;E&lt;/i&gt;(1 - &lt;i&gt;W&lt;/i&gt;) where &lt;i&gt;E&lt;/i&gt; (speed sensitivity coefficient) is 0,55 to 0,65 x &lt;i&gt;Tr&lt;/i&gt;.  Unit = PU temperature.  Based on temperature in degrees C. Default: nullptr */
		CIMPP::PU bf1;

		/** \brief Turbine torque coefficient K&lt;sub&gt;hhv&lt;/sub&gt; (depends on heating value of fuel stream in combustion chamber) (&lt;i&gt;Bf2&lt;/i&gt;). Default: nullptr */
		CIMPP::PU bf2;

		/** \brief Valve positioner (&lt;i&gt;C&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float c;

		/** \brief Coefficient defining fuel flow where power output is 0% (&lt;i&gt;Cf2&lt;/i&gt;).  Synchronous but no output.  Typically 0,23 x K&lt;sub&gt;hhv&lt;/sub&gt; (23% fuel flow). Default: nullptr */
		CIMPP::PU cf2;

		/** \brief Combustion reaction time delay (&lt;i&gt;Ecr&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds ecr;

		/** \brief Turbine and exhaust delay (&lt;i&gt;Etd&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds etd;

		/** \brief Ratio of fuel adjustment (&lt;i&gt;K3&lt;/i&gt;). Default: nullptr */
		CIMPP::PU k3;

		/** \brief Gain of radiation shield (&lt;i&gt;K4&lt;/i&gt;). Default: nullptr */
		CIMPP::PU k4;

		/** \brief Gain of radiation shield (&lt;i&gt;K5&lt;/i&gt;). Default: nullptr */
		CIMPP::PU k5;

		/** \brief Minimum fuel flow (&lt;i&gt;K6&lt;/i&gt;). Default: nullptr */
		CIMPP::PU k6;

		/** \brief Fuel system feedback (&lt;i&gt;Kf&lt;/i&gt;). Default: nullptr */
		CIMPP::PU kf;

		/** \brief Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Fuel control time constant (&lt;i&gt;T&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t;

		/** \brief Radiation shield time constant (&lt;i&gt;T3&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Thermocouple time constant (&lt;i&gt;T4&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Temperature control time constant (&lt;i&gt;T5&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds t5;

		/** \brief Temperature control (&lt;i&gt;Tc&lt;/i&gt;).  Unit = [SYMBOL REMOVED]F or [SYMBOL REMOVED]C depending on parameters &lt;i&gt;Af1&lt;/i&gt; and &lt;i&gt;Bf1&lt;/i&gt;. Default: nullptr */
		CIMPP::Temperature tc;

		/** \brief Compressor discharge time constant (&lt;i&gt;Tcd&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds tcd;

		/** \brief Fuel system time constant (&lt;i&gt;Tf&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief Maximum turbine limit (&lt;i&gt;Tmax&lt;/i&gt;) (&amp;gt; GovGAST2.tmin). Default: nullptr */
		CIMPP::PU tmax;

		/** \brief Minimum turbine limit (&lt;i&gt;Tmin&lt;/i&gt;) (&amp;lt; GovGAST2.tmax). Default: nullptr */
		CIMPP::PU tmin;

		/** \brief Rated temperature (&lt;i&gt;Tr&lt;/i&gt;).  Unit = [SYMBOL REMOVED]C depending on parameters&lt;i&gt; Af1 &lt;/i&gt;and &lt;i&gt;Bf1&lt;/i&gt;. Default: nullptr */
		CIMPP::Temperature tr;

		/** \brief Turbine rating (&lt;i&gt;Trate&lt;/i&gt;).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower trate;

		/** \brief Temperature controller integration rate (&lt;i&gt;Tt&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds tt;

		/** \brief Governor gain (1/droop) on turbine rating (&lt;i&gt;W&lt;/i&gt;). Default: nullptr */
		CIMPP::PU w;

		/** \brief Governor lead time constant (&lt;i&gt;X&lt;/i&gt;) (&amp;gt;= 0). Default: nullptr */
		CIMPP::Seconds x;

		/** \brief Governor lag time constant (&lt;i&gt;Y&lt;/i&gt;) (&amp;gt; 0). Default: nullptr */
		CIMPP::Seconds y;

		/** \brief Governor mode (&lt;i&gt;Z&lt;/i&gt;). 1 = droop 0 = isochronous. Default: 0 */
		CIMPP::Integer z;

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

	BaseClass* GovGAST2_factory();
}
#endif
