#ifndef WindContRotorRIEC_H
#define WindContRotorRIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{
	class WindDynamicsLookupTable;
	class WindGenTurbineType2IEC;

	/*
	Rotor resistance control model.  Reference: IEC Standard 61400-27-1 Section 6.6.5.2.
	*/
	class WindContRotorRIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindContRotorRIEC();
		~WindContRotorRIEC() override;

		std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable;  /* The wind dynamics lookup table associated with this rotor resistance control model. Default: 0 */
		CIMPP::WindGenTurbineType2IEC* WindGenTurbineType2IEC;  /* Wind turbine type 2 model with whitch this wind control rotor resistance model is associated. Default: 0 */
		CIMPP::PU kirr;  /* Integral gain in rotor resistance PI controller (). It is type dependent parameter. Default: nullptr */
		CIMPP::Simple_Float komegafilt;  /* Filter gain for generator speed measurement (K). It is type dependent parameter. Default: nullptr */
		CIMPP::Simple_Float kpfilt;  /* Filter gain for power measurement (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU kprr;  /* Proportional gain in rotor resistance PI controller (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU rmax;  /* Maximum rotor resistance (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU rmin;  /* Minimum rotor resistance (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds tomegafilt;  /* Filter time constant for generator speed measurement (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds tpfilt;  /* Filter time constant for power measurement (). It is type dependent parameter. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindContRotorRIEC_factory();
}
#endif
