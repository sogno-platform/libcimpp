#ifndef WindPlantReactiveControlIEC_H
#define WindPlantReactiveControlIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{
	class WindPlantIEC;

	/*
	Simplified plant voltage and reactive power control model for use with type 3 and type 4 wind turbine models.  Reference: IEC Standard 61400-27-1 Annex E.
	*/
	class WindPlantReactiveControlIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindPlantReactiveControlIEC();
		~WindPlantReactiveControlIEC() override;

		CIMPP::WindPlantIEC* WindPlantIEC;  /* Wind plant model with which this wind reactive control is associated. Default: 0 */
		CIMPP::Simple_Float kiwpx;  /* Plant Q controller integral gain (). It is type dependent parameter. Default: nullptr */
		CIMPP::Simple_Float kpwpx;  /* Plant Q controller proportional gain (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU kwpqu;  /* Plant voltage control droop (). It is project dependent parameter. Default: nullptr */
		CIMPP::Boolean mwppf;  /* Power factor control modes selector (). Used only if mwpu is set to false. true = 1: power factor control false = 0: reactive power control. It is project dependent parameter. Default: false */
		CIMPP::Boolean mwpu;  /* Reactive power control modes selector (). true = 1: voltage control false = 0: reactive power control. It is project dependent parameter. Default: false */
		CIMPP::Seconds twppfilt;  /* Filter time constant for active power measurement (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds twpqfilt;  /* Filter time constant for reactive power measurement (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds twpufilt;  /* Filter time constant for voltage measurement (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds txft;  /* Lead time constant in reference value transfer function (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds txfv;  /* Lag time constant in reference value transfer function (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU uwpqdip;  /* Voltage threshold for LVRT detection in q control (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU xrefmax;  /* Maximum  ( or delta ) request from the plant controller (). It is project dependent parameter. Default: nullptr */
		CIMPP::PU xrefmin;  /* Minimum  ( or delta) request from the plant controller (). It is project dependent parameter. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindPlantReactiveControlIEC_factory();
}
#endif
