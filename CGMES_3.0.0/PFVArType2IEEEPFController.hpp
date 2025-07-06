#ifndef PFVArType2IEEEPFController_H
#define PFVArType2IEEEPFController_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PFVArControllerType2Dynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Boolean.hpp"
#include "Float.hpp"
#include "PU.hpp"

namespace CIMPP
{

	/** \brief IEEE PF controller type 2 which is a summing point type controller making up the outside loop of a two-loop system. This controller is implemented as a slow PI type controller. The voltage regulator forms the inner loop and is implemented as a fast controller. Reference: IEEE 421.5-2005, 11.4. */
	class PFVArType2IEEEPFController : public PFVArControllerType2Dynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PFVArType2IEEEPFController();
		~PFVArType2IEEEPFController() override;

		/** \brief Overexcitation or under excitation flag (&lt;i&gt;EXLON&lt;/i&gt;) true = 1 (not in the overexcitation or underexcitation state, integral action is active) false = 0 (in the overexcitation or underexcitation state, so integral action is disabled to allow the limiter to play its role). Default: false */
		CIMPP::Boolean exlon;

		/** \brief Integral gain of the pf controller (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU ki;

		/** \brief Proportional gain of the pf controller (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;P&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU kp;

		/** \brief Power factor reference (&lt;i&gt;P&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FREF&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU pfref;

		/** \brief Maximum output of the pf controller (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;CLMT&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU vclmt;

		/** \brief Voltage regulator reference (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;REF&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU vref;

		/** \brief Generator sensing voltage (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;S&lt;/sub&gt;&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float vs;

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

	BaseClass* PFVArType2IEEEPFController_factory();
}
#endif
