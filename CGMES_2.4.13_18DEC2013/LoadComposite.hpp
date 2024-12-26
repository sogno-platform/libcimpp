#ifndef LoadComposite_H
#define LoadComposite_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "LoadDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/*
	This models combines static load and induction motor load effects. The dynamics of the motor are simplified by linearizing the induction machine equations.
	*/
	class LoadComposite : public LoadDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		LoadComposite();
		~LoadComposite() override;

		CIMPP::Simple_Float epfd;  /* Active load-frequency dependence index (dynamic) (Epfd).  Typical Value = 1.5. Default: nullptr */
		CIMPP::Simple_Float epfs;  /* Active load-frequency dependence index (static) (Epfs).  Typical Value = 1.5. Default: nullptr */
		CIMPP::Simple_Float epvd;  /* Active load-voltage dependence index (dynamic) (Epvd).  Typical Value = 0.7. Default: nullptr */
		CIMPP::Simple_Float epvs;  /* Active load-voltage dependence index (static) (Epvs).  Typical Value = 0.7. Default: nullptr */
		CIMPP::Simple_Float eqfd;  /* Reactive load-frequency dependence index (dynamic) (Eqfd).  Typical Value = 0. Default: nullptr */
		CIMPP::Simple_Float eqfs;  /* Reactive load-frequency dependence index (static) (Eqfs).  Typical Value = 0. Default: nullptr */
		CIMPP::Simple_Float eqvd;  /* Reactive load-voltage dependence index (dynamic) (Eqvd).  Typical Value = 2. Default: nullptr */
		CIMPP::Simple_Float eqvs;  /* Reactive load-voltage dependence index (static) (Eqvs).  Typical Value = 2. Default: nullptr */
		CIMPP::Seconds h;  /* Inertia constant (H).  Typical Value = 2.5. Default: nullptr */
		CIMPP::Simple_Float lfrac;  /* Loading factor - ratio of initial P to motor MVA base (Lfrac).  Typical Value = 0.8. Default: nullptr */
		CIMPP::Simple_Float pfrac;  /* Fraction of constant-power load to be represented by this motor model (Pfrac) (&gt;=0.0 and &lt;=1.0).  Typical Value = 0.5. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* LoadComposite_factory();
}
#endif
