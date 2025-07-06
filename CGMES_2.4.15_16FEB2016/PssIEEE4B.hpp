#ifndef PssIEEE4B_H
#define PssIEEE4B_H
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
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief The class represents IEEE Std 421.5-2005 type PSS2B power system stabilizer model. The PSS4B model represents a structure based on multiple working frequency bands. Three separate bands, respectively dedicated to the low-, intermediate- and high-frequency modes of oscillations, are used in this delta-omega (speed input) PSS.  Reference: IEEE 4B 421.5-2005 Section 8.4. */
	class PssIEEE4B : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssIEEE4B();
		~PssIEEE4B() override;

		/** \brief Notch filter 1 (high-frequency band): Three dB bandwidth (B). Default: nullptr */
		CIMPP::Simple_Float bwh1;

		/** \brief Notch filter 2 (high-frequency band): Three dB bandwidth (B). Default: nullptr */
		CIMPP::Simple_Float bwh2;

		/** \brief Notch filter 1 (low-frequency band): Three dB bandwidth (B). Default: nullptr */
		CIMPP::Simple_Float bwl1;

		/** \brief Notch filter 2 (low-frequency band): Three dB bandwidth (B). Default: nullptr */
		CIMPP::Simple_Float bwl2;

		/** \brief High band gain (K).  Typical Value = 120. Default: nullptr */
		CIMPP::PU kh;

		/** \brief High band differential filter gain (K).  Typical Value = 66. Default: nullptr */
		CIMPP::PU kh1;

		/** \brief High band first lead-lag blocks coefficient (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kh11;

		/** \brief High band first lead-lag blocks coefficient (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kh17;

		/** \brief High band differential filter gain (K).  Typical Value = 66. Default: nullptr */
		CIMPP::PU kh2;

		/** \brief Intermediate band gain (K).  Typical Value = 30. Default: nullptr */
		CIMPP::PU ki;

		/** \brief Intermediate band differential filter gain (K).  Typical Value = 66. Default: nullptr */
		CIMPP::PU ki1;

		/** \brief Intermediate band first lead-lag blocks coefficient (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ki11;

		/** \brief Intermediate band first lead-lag blocks coefficient (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ki17;

		/** \brief Intermediate band differential filter gain (K).  Typical Value = 66. Default: nullptr */
		CIMPP::PU ki2;

		/** \brief Low band gain (K).  Typical Value = 7.5. Default: nullptr */
		CIMPP::PU kl;

		/** \brief Low band differential filter gain (K).  Typical Value = 66. Default: nullptr */
		CIMPP::PU kl1;

		/** \brief Low band first lead-lag blocks coefficient (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kl11;

		/** \brief Low band first lead-lag blocks coefficient (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kl17;

		/** \brief Low band differential filter gain (K).  Typical Value = 66. Default: nullptr */
		CIMPP::PU kl2;

		/** \brief Notch filter 1 (high-frequency band): filter frequency (omega). Default: nullptr */
		CIMPP::Simple_Float omeganh1;

		/** \brief Notch filter 2 (high-frequency band): filter frequency (omega). Default: nullptr */
		CIMPP::Simple_Float omeganh2;

		/** \brief Notch filter 1 (low-frequency band): filter frequency (omega). Default: nullptr */
		CIMPP::Simple_Float omeganl1;

		/** \brief Notch filter 2 (low-frequency band): filter frequency (omega). Default: nullptr */
		CIMPP::Simple_Float omeganl2;

		/** \brief High band time constant (T).  Typical Value = 0.01513. Default: nullptr */
		CIMPP::Seconds th1;

		/** \brief High band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds th10;

		/** \brief High band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds th11;

		/** \brief High band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds th12;

		/** \brief High band time constant (T).  Typical Value = 0.01816. Default: nullptr */
		CIMPP::Seconds th2;

		/** \brief High band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds th3;

		/** \brief High band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds th4;

		/** \brief High band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds th5;

		/** \brief High band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds th6;

		/** \brief High band time constant (T).  Typical Value = 0.01816. Default: nullptr */
		CIMPP::Seconds th7;

		/** \brief High band time constant (T).  Typical Value = 0.02179. Default: nullptr */
		CIMPP::Seconds th8;

		/** \brief High band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds th9;

		/** \brief Intermediate band time constant (T).  Typical Value = 0.173. Default: nullptr */
		CIMPP::Seconds ti1;

		/** \brief Intermediate band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds ti10;

		/** \brief Intermediate band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds ti11;

		/** \brief Intermediate band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds ti12;

		/** \brief Intermediate band time constant (T).  Typical Value = 0.2075. Default: nullptr */
		CIMPP::Seconds ti2;

		/** \brief Intermediate band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds ti3;

		/** \brief Intermediate band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds ti4;

		/** \brief Intermediate band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds ti5;

		/** \brief Intermediate band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds ti6;

		/** \brief Intermediate band time constant (T).  Typical Value = 0.2075. Default: nullptr */
		CIMPP::Seconds ti7;

		/** \brief Intermediate band time constant (T).  Typical Value = 0.2491. Default: nullptr */
		CIMPP::Seconds ti8;

		/** \brief Intermediate band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds ti9;

		/** \brief Low band time constant (T).  Typical Value = 1.73. Default: nullptr */
		CIMPP::Seconds tl1;

		/** \brief Low band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tl10;

		/** \brief Low band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tl11;

		/** \brief Low band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tl12;

		/** \brief Low band time constant (T).  Typical Value = 2.075. Default: nullptr */
		CIMPP::Seconds tl2;

		/** \brief Low band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tl3;

		/** \brief Low band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tl4;

		/** \brief Low band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tl5;

		/** \brief Low band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tl6;

		/** \brief Low band time constant (T).  Typical Value = 2.075. Default: nullptr */
		CIMPP::Seconds tl7;

		/** \brief Low band time constant (T).  Typical Value = 2.491. Default: nullptr */
		CIMPP::Seconds tl8;

		/** \brief Low band time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tl9;

		/** \brief High band output maximum limit (V).  Typical Value = 0.6. Default: nullptr */
		CIMPP::PU vhmax;

		/** \brief High band output minimum limit (V).  Typical Value = -0.6. Default: nullptr */
		CIMPP::PU vhmin;

		/** \brief Intermediate band output maximum limit (V).  Typical Value = 0.6. Default: nullptr */
		CIMPP::PU vimax;

		/** \brief Intermediate band output minimum limit (V).  Typical Value = -0.6. Default: nullptr */
		CIMPP::PU vimin;

		/** \brief Low band output maximum limit (V).  Typical Value = 0.075. Default: nullptr */
		CIMPP::PU vlmax;

		/** \brief Low band output minimum limit (V).  Typical Value = -0.075. Default: nullptr */
		CIMPP::PU vlmin;

		/** \brief PSS output maximum limit (V).  Typical Value = 0.15. Default: nullptr */
		CIMPP::PU vstmax;

		/** \brief PSS output minimum limit (V).  Typical Value = -0.15. Default: nullptr */
		CIMPP::PU vstmin;

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

	BaseClass* PssIEEE4B_factory();
}
#endif
