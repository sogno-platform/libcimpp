#ifndef ReactiveCapabilityCurve_H
#define ReactiveCapabilityCurve_H

#include "Curve.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class EquivalentInjection;
class SynchronousMachine;
	/*
	Reactive power rating envelope versus the synchronous machine's active power, in both the generating and motoring modes. For each active power value there is a corresponding high and low reactive power limit  value. Typically there will be a separate curve for each coolant condition, such as hydrogen pressure.  The Y1 axis values represent reactive minimum and the Y2 axis values represent reactive maximum.
	*/
	class ReactiveCapabilityCurve: public Curve
	{

	public:
					std::list<CIMPP::EquivalentInjection*> EquivalentInjection; 	/* The reactive capability curve used by this equivalent injection. Default: 0 */
					std::list<CIMPP::SynchronousMachine*> InitiallyUsedBySynchronousMachines; 	/* The default reactive capability curve for use by a synchronous machine. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		ReactiveCapabilityCurve();
		virtual ~ReactiveCapabilityCurve();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ReactiveCapabilityCurve_factory();
}
#endif
