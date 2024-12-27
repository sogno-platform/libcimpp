#ifndef ReactiveCapabilityCurve_H
#define ReactiveCapabilityCurve_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "Curve.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

namespace CIMPP
{
	class EquivalentInjection;
	class SynchronousMachine;

	/*
	Reactive power rating envelope versus the synchronous machine's active power, in both the generating and motoring modes. For each active power value there is a corresponding high and low reactive power limit  value. Typically there will be a separate curve for each coolant condition, such as hydrogen pressure.  The Y1 axis values represent reactive minimum and the Y2 axis values represent reactive maximum.
	*/
	class ReactiveCapabilityCurve : public Curve
	{
	public:
		/* constructor initialising all attributes to null */
		ReactiveCapabilityCurve();
		~ReactiveCapabilityCurve() override;

		std::list<CIMPP::EquivalentInjection*> EquivalentInjection;  /* The equivalent injection using this reactive capability curve. Default: 0 */
		std::list<CIMPP::SynchronousMachine*> InitiallyUsedBySynchronousMachines;  /* Synchronous machines using this curve as default. Default: 0 */

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

	BaseClass* ReactiveCapabilityCurve_factory();
}
#endif
