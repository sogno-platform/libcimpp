#ifndef PositionPoint_H
#define PositionPoint_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Integer.hpp"
#include "String.hpp"

namespace CIMPP
{
	class Location;

	/** \brief Set of spatial coordinates that determine a point, defined in the coordinate system specified in 'Location.CoordinateSystem'. Use a single position point instance to describe a point-oriented location. Use a sequence of position points to describe a line-oriented object (physical location of non-point oriented objects like cables or lines), or area of an object (like a substation or a geographical zone - in this case, have first and last position point with the same values). */
	class PositionPoint : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		PositionPoint();
		~PositionPoint() override;

		/** \brief Location described by this position point. Default: 0 */
		CIMPP::Location* Location;

		/** \brief Zero-relative sequence number of this point within a series of points. Default: 0 */
		CIMPP::Integer sequenceNumber;

		/** \brief X axis position. Default: '' */
		CIMPP::String xPosition;

		/** \brief Y axis position. Default: '' */
		CIMPP::String yPosition;

		/** \brief (if applicable) Z axis position. Default: '' */
		CIMPP::String zPosition;

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

	BaseClass* PositionPoint_factory();
}
#endif
