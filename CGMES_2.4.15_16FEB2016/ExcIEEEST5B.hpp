#ifndef ExcIEEEST5B_H
#define ExcIEEEST5B_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief The class represents IEEE Std 421.5-2005 type ST5B model. The Type ST5B excitation system is a variation of the Type ST1A model, with alternative overexcitation and underexcitation inputs and additional limits.  Reference: IEEE Standard 421.5-2005 Section 7.5.   Note: the block diagram in the IEEE 421.5 standard has input signal Vc and does not indicate the summation point with Vref. The implementation of the ExcIEEEST5B shall consider summation point with Vref. */
	class ExcIEEEST5B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEST5B();
		~ExcIEEEST5B() override;

		/** \brief Rectifier regulation factor (K).  Typical Value = 0.004. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Regulator gain (K).  Typical Value = 200. Default: nullptr */
		CIMPP::PU kr;

		/** \brief Firing circuit time constant (T1).  Typical Value = 0.004. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Regulator lag time constant (T).  Typical Value = 6. Default: nullptr */
		CIMPP::Seconds tb1;

		/** \brief Regulator lag time constant (T).  Typical Value = 0.01. Default: nullptr */
		CIMPP::Seconds tb2;

		/** \brief Regulator lead time constant (T).  Typical Value = 0.8. Default: nullptr */
		CIMPP::Seconds tc1;

		/** \brief Regulator lead time constant (T).  Typical Value = 0.08. Default: nullptr */
		CIMPP::Seconds tc2;

		/** \brief OEL lag time constant (T).  Typical Value = 2. Default: nullptr */
		CIMPP::Seconds tob1;

		/** \brief OEL lag time constant (T).  Typical Value = 0.08. Default: nullptr */
		CIMPP::Seconds tob2;

		/** \brief OEL lead time constant (T).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds toc1;

		/** \brief OEL lead time constant (T).  Typical Value = 0.08. Default: nullptr */
		CIMPP::Seconds toc2;

		/** \brief UEL lag time constant (T).  Typical Value = 10. Default: nullptr */
		CIMPP::Seconds tub1;

		/** \brief UEL lag time constant (T).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Seconds tub2;

		/** \brief UEL lead time constant (T).  Typical Value = 2. Default: nullptr */
		CIMPP::Seconds tuc1;

		/** \brief UEL lead time constant (T).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds tuc2;

		/** \brief Maximum voltage regulator output (V).  Typical Value = 5. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (V).  Typical Value = -4. Default: nullptr */
		CIMPP::PU vrmin;

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

	BaseClass* ExcIEEEST5B_factory();
}
#endif
