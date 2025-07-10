#ifndef GovGAST_H
#define GovGAST_H
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
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Single shaft gas turbine. */
	class GovGAST : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovGAST();
		~GovGAST() override;

		/** \brief Ambient temperature load limit (Load Limit).  Typical Value = 1. Default: nullptr */
		CIMPP::PU at;

		/** \brief Turbine damping factor (Dturb).  Typical Value = 0.18. Default: nullptr */
		CIMPP::PU dturb;

		/** \brief Temperature limiter gain (Kt).  Typical Value = 3. Default: nullptr */
		CIMPP::PU kt;

		/** \brief Base for power values (MWbase) (&gt; 0). Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Permanent droop (R).  Typical Value = 0.04. Default: nullptr */
		CIMPP::PU r;

		/** \brief Governor mechanism time constant (T1).  T1 represents the natural valve positioning time constant of the governor for small disturbances, as seen when rate limiting is not in effect.  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Turbine power time constant (T2).  T2 represents delay due to internal energy storage of the gas turbine engine. T2 can be used to give a rough approximation to the delay associated with acceleration of the compressor spool of a multi-shaft engine, or with the compressibility of gas in the plenum of a the free power turbine of an aero-derivative unit, for example.  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Turbine exhaust temperature time constant (T3).  Typical Value = 3. Default: nullptr */
		CIMPP::Seconds t3;

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

	BaseClass* GovGAST_factory();
}
#endif
