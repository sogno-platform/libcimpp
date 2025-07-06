#ifndef PssPTIST1_H
#define PssPTIST1_H
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

	/** \brief PTI Microprocessor-Based Stabilizer type 1. */
	class PssPTIST1 : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssPTIST1();
		~PssPTIST1() override;

		/** \brief Time step related to activation of controls (Dtc).  Typical Value = 0.025. Default: nullptr */
		CIMPP::Seconds dtc;

		/** \brief Time step frequency calculation (Dtf).  Typical Value = 0.025. Default: nullptr */
		CIMPP::Seconds dtf;

		/** \brief Time step active power calculation (Dtp).  Typical Value = 0.0125. Default: nullptr */
		CIMPP::Seconds dtp;

		/** \brief Gain (K).  Typical Value = 9. Default: nullptr */
		CIMPP::PU k;

		/** \brief (M).  M=2*H.  Typical Value = 5. Default: nullptr */
		CIMPP::PU m;

		/** \brief Time constant (T1).  Typical Value = 0.3. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Time constant (T2).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Time constant (T3).  Typical Value = 0.2. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Time constant (T4).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Time constant (Tf).  Typical Value = 0.2. Default: nullptr */
		CIMPP::Seconds tf;

		/** \brief Time constant (Tp).  Typical Value = 0.2. Default: nullptr */
		CIMPP::Seconds tp;

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

	BaseClass* PssPTIST1_factory();
}
#endif
