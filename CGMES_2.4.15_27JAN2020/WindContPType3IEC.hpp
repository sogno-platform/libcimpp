#ifndef WindContPType3IEC_H
#define WindContPType3IEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{
	class WindDynamicsLookupTable;
	class WindGenTurbineType3IEC;

	/** \brief P control model Type 3.  Reference: IEC Standard 61400-27-1 Section 6.6.5.3. */
	class WindContPType3IEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindContPType3IEC();
		~WindContPType3IEC() override;

		/** \brief The P control type 3 model with which this wind dynamics lookup table is associated. Default: 0 */
		std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable;

		/** \brief Wind turbine type 3 model with which this Wind control P type 3 model is associated. Default: 0 */
		CIMPP::WindGenTurbineType3IEC* WindGenTurbineType3IEC;

		/** \brief Maximum wind turbine power ramp rate (). It is project dependent parameter. Default: nullptr */
		CIMPP::PU dpmax;

		/** \brief Limitation of torque rise rate during LVRT for S (d). It is project dependent parameter. Default: nullptr */
		CIMPP::PU dtrisemaxlvrt;

		/** \brief Gain for active drive train damping (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU kdtd;

		/** \brief PI controller integration parameter (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU kip;

		/** \brief PI controller proportional gain (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU kpp;

		/** \brief Enable LVRT power control mode (M true = 1: voltage control false = 0: reactive power control.  It is project dependent parameter. Default: false */
		CIMPP::Boolean mplvrt;

		/** \brief Offset to reference value that limits controller action during rotor speed changes (omega). It is case dependent parameter. Default: nullptr */
		CIMPP::PU omegaoffset;

		/** \brief Maximum active drive train damping power (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU pdtdmax;

		/** \brief Ramp limitation of torque, required in some grid codes (). It is project dependent parameter. Default: nullptr */
		CIMPP::PU rramp;

		/** \brief Timedelay after deep voltage sags (T). It is project dependent parameter. Default: nullptr */
		CIMPP::Seconds tdvs;

		/** \brief Minimum electrical generator torque (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU temin;

		/** \brief Filter time constant for generator speed measurement (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds tomegafilt;

		/** \brief Filter time constant for power measurement (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds tpfilt;

		/** \brief Time constant in power order lag (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU tpord;

		/** \brief Filter time constant for voltage measurement (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds tufilt;

		/** \brief Voltage scaling factor of reset-torque (T). It is project dependent parameter. Default: nullptr */
		CIMPP::PU tuscale;

		/** \brief Time constant in speed reference filter (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds twref;

		/** \brief Voltage limit for hold LVRT status after deep voltage sags (). It is project dependent parameter. Default: nullptr */
		CIMPP::PU udvs;

		/** \brief Voltage dip threshold for P-control ().  Part of turbine control, often different (e.g 0.8) from converter thresholds. It is project dependent parameter. Default: nullptr */
		CIMPP::PU updip;

		/** \brief Active drive train damping frequency (omega). It can be calculated from two mass model parameters. It is type dependent parameter. Default: nullptr */
		CIMPP::PU wdtd;

		/** \brief Coefficient for active drive train damping (zeta). It is type dependent parameter. Default: nullptr */
		CIMPP::Simple_Float zeta;

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

	BaseClass* WindContPType3IEC_factory();
}
#endif
