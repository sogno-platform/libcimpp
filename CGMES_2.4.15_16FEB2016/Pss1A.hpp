#ifndef Pss1A_H
#define Pss1A_H
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
#include "InputSignalKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Single input power system stabilizer. It is a modified version in order to allow representation of various vendors' implementations on PSS type 1A. */
	class Pss1A : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		Pss1A();
		~Pss1A() override;

		/** \brief Notch filter parameter (A1). Default: nullptr */
		CIMPP::PU a1;

		/** \brief Notch filter parameter (A2). Default: nullptr */
		CIMPP::PU a2;

		/** \brief Notch filter parameter (A3). Default: nullptr */
		CIMPP::PU a3;

		/** \brief Notch filter parameter (A4). Default: nullptr */
		CIMPP::PU a4;

		/** \brief Notch filter parameter (A5). Default: nullptr */
		CIMPP::PU a5;

		/** \brief Notch filter parameter (A6). Default: nullptr */
		CIMPP::PU a6;

		/** \brief Notch filter parameter (A7). Default: nullptr */
		CIMPP::PU a7;

		/** \brief Notch filter parameter (A8). Default: nullptr */
		CIMPP::PU a8;

		/** \brief Type of input signal. Default: 0 */
		CIMPP::InputSignalKind inputSignalType;

		/** \brief Selector (Kd).  true = e used false = e not used. Default: false */
		CIMPP::Boolean kd;

		/** \brief Stabilizer gain (Ks). Default: nullptr */
		CIMPP::PU ks;

		/** \brief Lead/lag time constant (T1). Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Lead/lag time constant (T2). Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Lead/lag time constant (T3). Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Lead/lag time constant (T4). Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Washout time constant (T5). Default: nullptr */
		CIMPP::Seconds t5;

		/** \brief Transducer time constant (T6). Default: nullptr */
		CIMPP::Seconds t6;

		/** \brief Time constant (Tdelay). Default: nullptr */
		CIMPP::Seconds tdelay;

		/** \brief Stabilizer input cutoff threshold (Vcl). Default: nullptr */
		CIMPP::PU vcl;

		/** \brief Stabilizer input cutoff threshold (Vcu). Default: nullptr */
		CIMPP::PU vcu;

		/** \brief Maximum stabilizer output (Vrmax). Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum stabilizer output (Vrmin). Default: nullptr */
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

	BaseClass* Pss1A_factory();
}
#endif
