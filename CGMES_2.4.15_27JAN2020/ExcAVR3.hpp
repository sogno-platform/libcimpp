#ifndef ExcAVR3_H
#define ExcAVR3_H
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
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief Italian excitation system. It represents exciter dynamo and electric regulator. */
	class ExcAVR3 : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAVR3();
		~ExcAVR3() override;

		/** \brief Field voltage value 1 (E1).  Typical Value = 4.18. Default: nullptr */
		CIMPP::PU e1;

		/** \brief Field voltage value 2 (E2).  Typical Value = 3.14. Default: nullptr */
		CIMPP::PU e2;

		/** \brief AVR gain (K).  Typical Value = 3000. Default: nullptr */
		CIMPP::Simple_Float ka;

		/** \brief Saturation factor at E1 (S(E1)).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Simple_Float se1;

		/** \brief Saturation factor at E2 (S(E2)).  Typical Value = 0.03. Default: nullptr */
		CIMPP::Simple_Float se2;

		/** \brief AVR time constant (T).  Typical Value = 220. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief AVR time constant (T).  Typical Value = 1.6. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief AVR time constant (T).  Typical Value = 0.66. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief AVR time constant (T).  Typical Value = 0.07. Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Exciter time constant (T).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Maximum AVR output (V).  Typical Value = -7.5. Default: nullptr */
		CIMPP::PU vrmn;

		/** \brief Minimum AVR output (V).  Typical Value = 7.5. Default: nullptr */
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

	BaseClass* ExcAVR3_factory();
}
#endif
