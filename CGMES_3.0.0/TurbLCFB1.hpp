#ifndef TurbLCFB1_H
#define TurbLCFB1_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "TurbineLoadControllerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "ActivePower.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Turbine load controller model developed by WECC.  This model represents a supervisory turbine load controller that acts to maintain turbine power at a set value by continuous adjustment of the turbine governor speed-load reference. This model is intended to represent slow reset 'outer loop' controllers managing the action of the turbine governor. */
	class TurbLCFB1 : public TurbineLoadControllerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		TurbLCFB1();
		~TurbLCFB1() override;

		/** \brief Controller deadband (&lt;i&gt;db&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU db;

		/** \brief Maximum control error (&lt;i&gt;Emax&lt;/i&gt;) (see parameter detail 4).  Typical value = 0,02. Default: nullptr */
		CIMPP::PU emax;

		/** \brief Frequency bias gain (&lt;i&gt;Fb&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU fb;

		/** \brief Frequency bias flag (&lt;i&gt;Fbf&lt;/i&gt;). true = enable frequency bias false = disable frequency bias. Typical value = false. Default: false */
		CIMPP::Boolean fbf;

		/** \brief Maximum turbine speed/load reference bias (&lt;i&gt;Irmax&lt;/i&gt;) (see parameter detail 3).  Typical value = 0. Default: nullptr */
		CIMPP::PU irmax;

		/** \brief Integral gain (&lt;i&gt;Ki&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU ki;

		/** \brief Proportional gain (&lt;i&gt;Kp&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kp;

		/** \brief Base for power values (&lt;i&gt;MWbase&lt;/i&gt;) (&amp;gt; 0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Power controller flag (&lt;i&gt;Pbf&lt;/i&gt;). true = enable load controller false = disable load controller. Typical value = false. Default: false */
		CIMPP::Boolean pbf;

		/** \brief Power controller setpoint (&lt;i&gt;Pmwset&lt;/i&gt;) (see parameter detail 1).  Unit = MW. Typical value = 0. Default: nullptr */
		CIMPP::ActivePower pmwset;

		/** \brief Type of turbine governor reference (&lt;i&gt;Type&lt;/i&gt;). true = speed reference governor false = load reference governor. Typical value = true. Default: false */
		CIMPP::Boolean speedReferenceGovernor;

		/** \brief Power transducer time constant (&lt;i&gt;Tpelec&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tpelec;

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

	BaseClass* TurbLCFB1_factory();
}
#endif
