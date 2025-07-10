#ifndef DiscExcContIEEEDEC1A_H
#define DiscExcContIEEEDEC1A_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "DiscontinuousExcitationControlDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief The class represents IEEE Type DEC1A discontinuous excitation control model that boosts generator excitation to a level higher than that demanded by the voltage regulator and stabilizer immediately following a system fault.  Reference: IEEE Standard 421.5-2005 Section 12.2. */
	class DiscExcContIEEEDEC1A : public DiscontinuousExcitationControlDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		DiscExcContIEEEDEC1A();
		~DiscExcContIEEEDEC1A() override;

		/** \brief Speed change reference ().  Typical Value = 0.0015. Default: nullptr */
		CIMPP::PU esc;

		/** \brief Discontinuous controller gain ().  Typical Value = 400. Default: nullptr */
		CIMPP::PU kan;

		/** \brief Terminal voltage limiter gain ().  Typical Value = 47. Default: nullptr */
		CIMPP::PU ketl;

		/** \brief Discontinuous controller time constant ().  Typical Value = 0.08. Default: nullptr */
		CIMPP::Seconds tan;

		/** \brief Time constant ().  Typical Value = 0.03. Default: nullptr */
		CIMPP::Seconds td;

		/** \brief Time constant ().  Typical Value = 0.025. Default: nullptr */
		CIMPP::Seconds tl1;

		/** \brief Time constant ().  Typical Value = 1.25. Default: nullptr */
		CIMPP::Seconds tl2;

		/** \brief DEC washout time constant ().  Typical Value = 5. Default: nullptr */
		CIMPP::Seconds tw5;

		/** \brief Regulator voltage reference ().  Typical Value = 5.5. Default: nullptr */
		CIMPP::PU val;

		/** \brief Limiter for Van (). Default: nullptr */
		CIMPP::PU vanmax;

		/** \brief Limiter ().  Typical Value = 0.3. Default: nullptr */
		CIMPP::PU vomax;

		/** \brief Limiter ().  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU vomin;

		/** \brief Limiter ().  Typical Value = 0.2. Default: nullptr */
		CIMPP::PU vsmax;

		/** \brief Limiter ().  Typical Value = -0.066. Default: nullptr */
		CIMPP::PU vsmin;

		/** \brief Terminal voltage level reference ().  Typical Value = 0.95. Default: nullptr */
		CIMPP::PU vtc;

		/** \brief Voltage reference ().  Typical Value = 1.1. Default: nullptr */
		CIMPP::PU vtlmt;

		/** \brief Voltage limits ().  Typical Value = 1.13. Default: nullptr */
		CIMPP::PU vtm;

		/** \brief Voltage limits ().  Typical Value = 1.12. Default: nullptr */
		CIMPP::PU vtn;

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

	BaseClass* DiscExcContIEEEDEC1A_factory();
}
#endif
