#ifndef WindPlantFreqPcontrolIEC_H
#define WindPlantFreqPcontrolIEC_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"

namespace CIMPP {


class WindDynamicsLookupTable;
class WindPlantIEC;
	/*
	Frequency and active power controller model.  Reference: IEC Standard 61400-27-1 Annex E.
	*/
	class WindPlantFreqPcontrolIEC: public IdentifiedObject
	{

	public:
					std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable; 	/* The frequency and active power wind plant control model with which this wind dynamics lookup table is associated. Default: 0 */
					CIMPP::PU dprefmax; 	/* Maximum ramp rate of  request from the plant controller to the wind turbines (). It is project dependent parameter. Default: nullptr */
					CIMPP::PU dprefmin; 	/* Minimum (negative) ramp rate of  request from the plant controller to the wind turbines (). It is project dependent parameter. Default: nullptr */
					CIMPP::Simple_Float kiwpp; 	/* Plant P controller integral gain (). It is type dependent parameter. Default: nullptr */
					CIMPP::Simple_Float kpwpp; 	/* Plant P controller proportional gain (). It is type dependent parameter. Default: nullptr */
					CIMPP::PU prefmax; 	/* Maximum  request from the plant controller to the wind turbines (). It is type dependent parameter. Default: nullptr */
					CIMPP::PU prefmin; 	/* Minimum  request from the plant controller to the wind turbines (). It is type dependent parameter. Default: nullptr */
					CIMPP::Seconds tpft; 	/* Lead time constant in reference value transfer function (). It is type dependent parameter. Default: nullptr */
					CIMPP::Seconds tpfv; 	/* Lag time constant in reference value transfer function (). It is type dependent parameter. Default: nullptr */
					CIMPP::Seconds twpffilt; 	/* Filter time constant for frequency measurement (). It is type dependent parameter. Default: nullptr */
					CIMPP::Seconds twppfilt; 	/* Filter time constant for active power measurement (). It is type dependent parameter. Default: nullptr */
					CIMPP::WindPlantIEC* WindPlantIEC; 	/* Wind plant model with which this wind plant frequency and active power control is associated. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		WindPlantFreqPcontrolIEC();
		virtual ~WindPlantFreqPcontrolIEC();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindPlantFreqPcontrolIEC_factory();
}
#endif
