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
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	The parameters used for models expressed in time constant reactance form include:
	*/
	class AsynchronousMachineTimeConstantReactance : public AsynchronousMachineDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		AsynchronousMachineTimeConstantReactance();
		~AsynchronousMachineTimeConstantReactance() override;

		CIMPP::Seconds tpo;  /* Transient rotor time constant (T`o) (&gt; T``o).  Typical Value = 5. Default: nullptr */
		CIMPP::Seconds tppo;  /* Subtransient rotor time constant (T``o) (&gt; 0).  Typical Value = 0.03. Default: nullptr */
		CIMPP::PU xp;  /* Transient reactance (unsaturated) (X`) (&gt;=X``).  Typical Value = 0.5. Default: nullptr */
		CIMPP::PU xpp;  /* Subtransient reactance (unsaturated) (X``) (&gt; Xl).  Typical Value = 0.2. Default: nullptr */
		CIMPP::PU xs;  /* Synchronous reactance (Xs) (&gt;= X`).  Typical Value = 1.8. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* AsynchronousMachineTimeConstantReactance_factory();
}
#endif
