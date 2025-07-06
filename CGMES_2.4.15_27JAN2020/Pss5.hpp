#ifndef Pss5_H
#define Pss5_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief Italian PSS - Detailed PSS. */
	class Pss5 : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		Pss5();
		~Pss5() override;

		/** \brief Selector for Second washout enabling (C). true = second washout filter is bypassed false = second washout filter in use. Typical Value = true. Default: false */
		CIMPP::Boolean ctw2;

		/** \brief Stabilizer output dead band (DeadBand).  Typical Value = 0. Default: nullptr */
		CIMPP::PU deadband;

		/** \brief Selector for Frequency/shaft speed input (IsFreq). true = speed false = frequency. Typical Value = true. Default: false */
		CIMPP::Boolean isfreq;

		/** \brief Frequency/shaft speed input gain (K).  Typical Value = 5. Default: nullptr */
		CIMPP::Simple_Float kf;

		/** \brief Electric power input gain (K).  Typical Value = 0.3. Default: nullptr */
		CIMPP::Simple_Float kpe;

		/** \brief PSS gain (K).  Typical Value = 1. Default: nullptr */
		CIMPP::Simple_Float kpss;

		/** \brief Minimum power PSS enabling (P).  Typical Value = 0.25. Default: nullptr */
		CIMPP::PU pmm;

		/** \brief Lead/lag time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tl1;

		/** \brief Lead/lag time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tl2;

		/** \brief Lead/lag time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tl3;

		/** \brief Lead/lag time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tl4;

		/** \brief Electric power filter time constant (T).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Seconds tpe;

		/** \brief First WashOut (T).  Typical Value = 3.5. Default: nullptr */
		CIMPP::Seconds tw1;

		/** \brief Second WashOut (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tw2;

		/** \brief  Default: false */
		CIMPP::Boolean vadat;

		/** \brief Stabilizer output max limit (V).  Typical Value = -0.1. Default: nullptr */
		CIMPP::PU vsmn;

		/** \brief Stabilizer output min limit (V).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU vsmx;

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

	BaseClass* Pss5_factory();
}
#endif
