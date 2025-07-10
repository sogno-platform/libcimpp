#ifndef AsynchronousMachineTimeConstantReactance_H
#define AsynchronousMachineTimeConstantReactance_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "AsynchronousMachineDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief The parameters used for models expressed in time constant reactance form include: */
	class AsynchronousMachineTimeConstantReactance : public AsynchronousMachineDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		AsynchronousMachineTimeConstantReactance();
		~AsynchronousMachineTimeConstantReactance() override;

		/** \brief Transient rotor time constant (T`o) (&gt; T``o).  Typical Value = 5. Default: nullptr */
		CIMPP::Seconds tpo;

		/** \brief Subtransient rotor time constant (T``o) (&gt; 0).  Typical Value = 0.03. Default: nullptr */
		CIMPP::Seconds tppo;

		/** \brief Transient reactance (unsaturated) (X`) (&gt;=X``).  Typical Value = 0.5. Default: nullptr */
		CIMPP::PU xp;

		/** \brief Subtransient reactance (unsaturated) (X``) (&gt; Xl).  Typical Value = 0.2. Default: nullptr */
		CIMPP::PU xpp;

		/** \brief Synchronous reactance (Xs) (&gt;= X`).  Typical Value = 1.8. Default: nullptr */
		CIMPP::PU xs;

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

	BaseClass* AsynchronousMachineTimeConstantReactance_factory();
}
#endif
