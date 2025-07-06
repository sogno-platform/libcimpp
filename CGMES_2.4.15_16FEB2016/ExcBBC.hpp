#ifndef ExcBBC_H
#define ExcBBC_H
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
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Transformer fed static excitation system (static with ABB regulator). This model represents a static excitation system in which a gated thyristor bridge fed by a transformer at the main generator terminals feeds the main generator directly. */
	class ExcBBC : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcBBC();
		~ExcBBC() override;

		/** \brief Maximum open circuit exciter voltage (Efdmax).  Typical Value = 5. Default: nullptr */
		CIMPP::PU efdmax;

		/** \brief Minimum open circuit exciter voltage (Efdmin).  Typical Value = -5. Default: nullptr */
		CIMPP::PU efdmin;

		/** \brief Steady state gain (K).  Typical Value = 300. Default: nullptr */
		CIMPP::PU k;

		/** \brief Supplementary signal routing selector (switch). true = Vs connected to 3rd summing point false =  Vs connected to 1st summing point (see diagram). Typical Value = true. Default: false */
		CIMPP::Boolean _switch;

		/** \brief Controller time constant (T1).  Typical Value = 6. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Controller time constant (T2).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Lead/lag time constant (T3).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Lead/lag time constant (T4).  Typical Value = 0.01. Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Maximum control element output (Vrmax).  Typical Value = 5. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum control element output (Vrmin).  Typical Value = -5. Default: nullptr */
		CIMPP::PU vrmin;

		/** \brief Effective excitation transformer reactance (Xe).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU xe;

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

	BaseClass* ExcBBC_factory();
}
#endif
