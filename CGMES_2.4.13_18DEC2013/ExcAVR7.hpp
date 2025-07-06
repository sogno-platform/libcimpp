#ifndef ExcAVR7_H
#define ExcAVR7_H
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

	/** \brief IVO excitation system. */
	class ExcAVR7 : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAVR7();
		~ExcAVR7() override;

		/** \brief Lead coefficient (A1).  Typical Value = 0.5. Default: nullptr */
		CIMPP::PU a1;

		/** \brief Lag coefficient (A2).  Typical Value = 0.5. Default: nullptr */
		CIMPP::PU a2;

		/** \brief Lead coefficient (A3).  Typical Value = 0.5. Default: nullptr */
		CIMPP::PU a3;

		/** \brief Lag coefficient (A4).  Typical Value = 0.5. Default: nullptr */
		CIMPP::PU a4;

		/** \brief Lead coefficient (A5).  Typical Value = 0.5. Default: nullptr */
		CIMPP::PU a5;

		/** \brief Lag coefficient (A6).  Typical Value = 0.5. Default: nullptr */
		CIMPP::PU a6;

		/** \brief Gain (K1).  Typical Value = 1. Default: nullptr */
		CIMPP::PU k1;

		/** \brief Gain (K3).  Typical Value = 3. Default: nullptr */
		CIMPP::PU k3;

		/** \brief Gain (K5).  Typical Value = 1. Default: nullptr */
		CIMPP::PU k5;

		/** \brief Lead time constant (T1).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Lag time constant (T2).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Lead time constant (T3).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Lag time constant (T4).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Lead time constant (T5).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds t5;

		/** \brief Lag time constant (T6).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds t6;

		/** \brief Lead-lag max. limit (Vmax1).  Typical Value = 5. Default: nullptr */
		CIMPP::PU vmax1;

		/** \brief Lead-lag max. limit (Vmax3).  Typical Value = 5. Default: nullptr */
		CIMPP::PU vmax3;

		/** \brief Lead-lag max. limit (Vmax5).  Typical Value = 5. Default: nullptr */
		CIMPP::PU vmax5;

		/** \brief Lead-lag min. limit (Vmin1).  Typical Value = -5. Default: nullptr */
		CIMPP::PU vmin1;

		/** \brief Lead-lag min. limit (Vmin3).  Typical Value = -5. Default: nullptr */
		CIMPP::PU vmin3;

		/** \brief Lead-lag min. limit (Vmin5).  Typical Value = -2. Default: nullptr */
		CIMPP::PU vmin5;

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

	BaseClass* ExcAVR7_factory();
}
#endif
