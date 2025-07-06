#ifndef ExcANS_H
#define ExcANS_H
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
#include "Integer.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief Italian excitation system. It represents static field voltage or excitation current feedback excitation system. */
	class ExcANS : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcANS();
		~ExcANS() override;

		/** \brief Governor Control Flag (BLINT).  0 = lead-lag regulator 1 = proportional integral regulator. Typical Value = 0. Default: 0 */
		CIMPP::Integer blint;

		/** \brief Minimum exciter current (I).  Typical Value = -5.2. Default: nullptr */
		CIMPP::PU ifmn;

		/** \brief Maximum exciter current (I).  Typical Value = 6.5. Default: nullptr */
		CIMPP::PU ifmx;

		/** \brief Exciter gain (K).  Typical Value = 20. Default: nullptr */
		CIMPP::Simple_Float k2;

		/** \brief AVR gain (K).  Typical Value = 1000. Default: nullptr */
		CIMPP::Simple_Float k3;

		/** \brief Ceiling factor (K).  Typical Value = 1. Default: nullptr */
		CIMPP::Simple_Float kce;

		/** \brief Feedback enabling (K).  0 = Open loop control 1 = Closed loop control. Typical Value = 1. Default: 0 */
		CIMPP::Integer krvecc;

		/** \brief Rate feedback signal flag (K).  0 = output voltage of the exciter 1 = exciter field current. Typical Value = 0. Default: 0 */
		CIMPP::Integer kvfif;

		/** \brief Time constant (T).  Typical Value = 20. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Time constant (T).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Time constant (T).  Typical Value = 1.6. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Exciter time constant (T).  Typical Value = 0.04. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Maximum AVR output (V).  Typical Value = -5.2. Default: nullptr */
		CIMPP::PU vrmn;

		/** \brief Minimum AVR output (V).  Typical Value = 6.5. Default: nullptr */
		CIMPP::PU vrmx;

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

	BaseClass* ExcANS_factory();
}
#endif
