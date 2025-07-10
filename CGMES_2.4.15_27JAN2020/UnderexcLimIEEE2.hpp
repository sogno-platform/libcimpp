#ifndef UnderexcLimIEEE2_H
#define UnderexcLimIEEE2_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "UnderexcitationLimiterDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief The class represents the Type UEL2 which has either a straight-line or multi-segment characteristic when plotted in terms of machine reactive power output vs. real power output.  Reference: IEEE UEL2 421.5-2005 Section 10.2.  (Limit characteristic lookup table shown in Figure 10.4 (p 32) of the standard). */
	class UnderexcLimIEEE2 : public UnderexcitationLimiterDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		UnderexcLimIEEE2();
		~UnderexcLimIEEE2() override;

		/** \brief UEL terminal voltage exponent applied to real power input to UEL limit look-up table (k1).  Typical Value = 2. Default: nullptr */
		CIMPP::Simple_Float k1;

		/** \brief UEL terminal voltage exponent applied to reactive power output from UEL limit look-up table (k2).  Typical Value = 2. Default: nullptr */
		CIMPP::Simple_Float k2;

		/** \brief Gain associated with optional integrator feedback input signal to UEL (K).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kfb;

		/** \brief UEL excitation system stabilizer gain (K).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kuf;

		/** \brief UEL integral gain (K).  Typical Value = 0.5. Default: nullptr */
		CIMPP::PU kui;

		/** \brief UEL proportional gain (K).  Typical Value = 0.8. Default: nullptr */
		CIMPP::PU kul;

		/** \brief Real power values for endpoints (P).  Typical Value = 0. Default: nullptr */
		CIMPP::PU p0;

		/** \brief Real power values for endpoints (P).  Typical Value = 0.3. Default: nullptr */
		CIMPP::PU p1;

		/** \brief Real power values for endpoints (P). Default: nullptr */
		CIMPP::PU p10;

		/** \brief Real power values for endpoints (P).  Typical Value = 0.6. Default: nullptr */
		CIMPP::PU p2;

		/** \brief Real power values for endpoints (P).  Typical Value = 0.9. Default: nullptr */
		CIMPP::PU p3;

		/** \brief Real power values for endpoints (P).  Typical Value = 1.02. Default: nullptr */
		CIMPP::PU p4;

		/** \brief Real power values for endpoints (P). Default: nullptr */
		CIMPP::PU p5;

		/** \brief Real power values for endpoints (P). Default: nullptr */
		CIMPP::PU p6;

		/** \brief Real power values for endpoints (P). Default: nullptr */
		CIMPP::PU p7;

		/** \brief Real power values for endpoints (P). Default: nullptr */
		CIMPP::PU p8;

		/** \brief Real power values for endpoints (P). Default: nullptr */
		CIMPP::PU p9;

		/** \brief Reactive power values for endpoints (Q).  Typical Value = -0.31. Default: nullptr */
		CIMPP::PU q0;

		/** \brief Reactive power values for endpoints (Q).  Typical Value = -0.31. Default: nullptr */
		CIMPP::PU q1;

		/** \brief Reactive power values for endpoints (Q). Default: nullptr */
		CIMPP::PU q10;

		/** \brief Reactive power values for endpoints (Q).  Typical Value = -0.28. Default: nullptr */
		CIMPP::PU q2;

		/** \brief Reactive power values for endpoints (Q).  Typical Value = -0.21. Default: nullptr */
		CIMPP::PU q3;

		/** \brief Reactive power values for endpoints (Q).  Typical Value = 0. Default: nullptr */
		CIMPP::PU q4;

		/** \brief Reactive power values for endpoints (Q). Default: nullptr */
		CIMPP::PU q5;

		/** \brief Reactive power values for endpoints (Q). Default: nullptr */
		CIMPP::PU q6;

		/** \brief Reactive power values for endpoints (Q). Default: nullptr */
		CIMPP::PU q7;

		/** \brief Reactive power values for endpoints (Q). Default: nullptr */
		CIMPP::PU q8;

		/** \brief Reactive power values for endpoints (Q). Default: nullptr */
		CIMPP::PU q9;

		/** \brief UEL lead time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tu1;

		/** \brief UEL lag time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tu2;

		/** \brief UEL lead time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tu3;

		/** \brief UEL lag time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tu4;

		/** \brief Time constant associated with optional integrator feedback input signal to UEL (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tul;

		/** \brief Real power filter time constant (T).  Typical Value = 5. Default: nullptr */
		CIMPP::Seconds tup;

		/** \brief Reactive power filter time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tuq;

		/** \brief Voltage filter time constant (T).  Typical Value = 5. Default: nullptr */
		CIMPP::Seconds tuv;

		/** \brief UEL integrator output maximum limit (V).  Typical Value = 0.25. Default: nullptr */
		CIMPP::PU vuimax;

		/** \brief UEL integrator output minimum limit (V).  Typical Value = 0. Default: nullptr */
		CIMPP::PU vuimin;

		/** \brief UEL output maximum limit (V).  Typical Value = 0.25. Default: nullptr */
		CIMPP::PU vulmax;

		/** \brief UEL output minimum limit (V).  Typical Value = 0. Default: nullptr */
		CIMPP::PU vulmin;

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

	BaseClass* UnderexcLimIEEE2_factory();
}
#endif
