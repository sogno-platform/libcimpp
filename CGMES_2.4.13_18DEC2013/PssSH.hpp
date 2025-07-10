#ifndef PssSH_H
#define PssSH_H
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
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Model for Siemens "H infinity" power system stabilizer with generator electrical power input. */
	class PssSH : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssSH();
		~PssSH() override;

		/** \brief Main gain (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU k;

		/** \brief Gain 0 (K0).  Typical Value = 0.012. Default: nullptr */
		CIMPP::PU k0;

		/** \brief Gain 1 (K1).  Typical Value = 0.488. Default: nullptr */
		CIMPP::PU k1;

		/** \brief Gain 2 (K2).  Typical Value = 0.064. Default: nullptr */
		CIMPP::PU k2;

		/** \brief Gain 3 (K3).  Typical Value = 0.224. Default: nullptr */
		CIMPP::PU k3;

		/** \brief Gain 4 (K4).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU k4;

		/** \brief Time constant 1 (T1).  Typical Value = 0.076. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Time constant 2 (T2).  Typical Value = 0.086. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Time constant 3 (T3).   Typical Value = 1.068. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Time constant 4 (T4).  Typical Value = 1.913. Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Input time constant (Td).  Typical Value = 10. Default: nullptr */
		CIMPP::Seconds td;

		/** \brief Output maximum limit (Vsmax).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU vsmax;

		/** \brief Output minimum limit (Vsmin).  Typical Value = -0.1. Default: nullptr */
		CIMPP::PU vsmin;

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

	BaseClass* PssSH_factory();
}
#endif
