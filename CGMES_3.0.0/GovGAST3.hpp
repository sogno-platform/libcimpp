#ifndef GovGAST3_H
#define GovGAST3_H
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
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Temperature.hpp"

namespace CIMPP
{

	/** \brief Generic turbogas with acceleration and temperature controller. */
	class GovGAST3 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovGAST3();
		~GovGAST3() override;

		/** \brief Acceleration limit set-point (&lt;i&gt;Bca&lt;/i&gt;).  Unit = 1/s.  Typical value = 0,01. Default: 0.0 */
		CIMPP::Float bca;

		/** \brief Droop (&lt;i&gt;bp&lt;/i&gt;).  Typical value = 0,05. Default: nullptr */
		CIMPP::PU bp;

		/** \brief Exhaust temperature variation due to fuel flow increasing from 0 to 1 PU (&lt;i&gt;deltaTc&lt;/i&gt;).  Typical value = 390. Default: nullptr */
		CIMPP::Temperature dtc;

		/** \brief Minimum fuel flow (&lt;i&gt;Ka&lt;/i&gt;).  Typical value = 0,23. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Fuel system feedback (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;AC&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: 0.0 */
		CIMPP::Float kac;

		/** \brief Acceleration control integral gain (&lt;i&gt;Kca&lt;/i&gt;). Unit = 1/s.  Typical value = 100. Default: 0.0 */
		CIMPP::Float kca;

		/** \brief Gain of radiation shield (&lt;i&gt;Ksi&lt;/i&gt;).  Typical value = 0,8. Default: 0.0 */
		CIMPP::Float ksi;

		/** \brief Coefficient of transfer function of fuel valve positioner (&lt;i&gt;Ky&lt;/i&gt;).  Typical value = 1. Default: 0.0 */
		CIMPP::Float ky;

		/** \brief Fuel flow maximum negative error value (&lt;i&gt;MNef&lt;/i&gt;).  Typical value = -0,05. Default: nullptr */
		CIMPP::PU mnef;

		/** \brief Fuel flow maximum positive error value (&lt;i&gt;MXef&lt;/i&gt;).  Typical value = 0,05. Default: nullptr */
		CIMPP::PU mxef;

		/** \brief Minimum fuel flow (&lt;i&gt;RCMN&lt;/i&gt;).  Typical value = -0,1. Default: nullptr */
		CIMPP::PU rcmn;

		/** \brief Maximum fuel flow (&lt;i&gt;RCMX&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU rcmx;

		/** \brief Fuel control time constant (&lt;i&gt;Tac&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds tac;

		/** \brief Compressor discharge volume time constant (&lt;i&gt;Tc&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,2. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Temperature controller derivative gain (&lt;i&gt;Td&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 3,3. Default: nullptr */
		CIMPP::Seconds td;

		/** \brief Turbine rated exhaust temperature correspondent to Pm=1 PU (&lt;i&gt;Tfen&lt;/i&gt;).  Typical value = 540. Default: nullptr */
		CIMPP::Temperature tfen;

		/** \brief Time constant of speed governor (&lt;i&gt;Tg&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds tg;

		/** \brief Time constant of radiation shield (&lt;i&gt;Tsi&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 15. Default: nullptr */
		CIMPP::Seconds tsi;

		/** \brief Temperature controller integration rate (&lt;i&gt;Tt&lt;/i&gt;).  Typical value = 250. Default: nullptr */
		CIMPP::Temperature tt;

		/** \brief Time constant of thermocouple (&lt;i&gt;Ttc&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 2,5. Default: nullptr */
		CIMPP::Seconds ttc;

		/** \brief Time constant of fuel valve positioner (&lt;i&gt;Ty&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,2. Default: nullptr */
		CIMPP::Seconds ty;

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

	BaseClass* GovGAST3_factory();
}
#endif
