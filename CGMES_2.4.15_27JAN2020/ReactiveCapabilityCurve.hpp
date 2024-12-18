#ifndef ReactiveCapabilityCurve_H
#define ReactiveCapabilityCurve_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "Curve.hpp"
#include "BaseClassDefiner.hpp"

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

		std::list<CIMPP::EquivalentInjection*> EquivalentInjection;  /* The reactive capability curve used by this equivalent injection. Default: 0 */
		std::list<CIMPP::SynchronousMachine*> InitiallyUsedBySynchronousMachines;  /* The default reactive capability curve for use by a synchronous machine. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ReactiveCapabilityCurve_factory();
}
#endif
