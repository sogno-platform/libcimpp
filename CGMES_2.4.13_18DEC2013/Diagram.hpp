#ifndef Diagram_H
#define Diagram_H
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
#include "OrientationKind.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{
	class DiagramObject;
	class DiagramStyle;

	/** \brief The diagram being exchanged.  The coordinate system is a standard Cartesian coordinate system and the orientation attribute defines the orientation. */
	class Diagram : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		Diagram();
		~Diagram() override;

		/** \brief A diagram is made up of multiple diagram objects. Default: 0 */
		std::list<CIMPP::DiagramObject*> DiagramElements;

		/** \brief A Diagram may have a DiagramStyle. Default: 0 */
		CIMPP::DiagramStyle* DiagramStyle;

		/** \brief Coordinate system orientation of the diagram. Default: 0 */
		CIMPP::OrientationKind orientation;

		/** \brief X coordinate of the first corner of the initial view. Default: nullptr */
		CIMPP::Simple_Float x1InitialView;

		/** \brief X coordinate of the second corner of the initial view. Default: nullptr */
		CIMPP::Simple_Float x2InitialView;

		/** \brief Y coordinate of the first corner of the initial view. Default: nullptr */
		CIMPP::Simple_Float y1InitialView;

		/** \brief Y coordinate of the second corner of the initial view. Default: nullptr */
		CIMPP::Simple_Float y2InitialView;

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

	BaseClass* Diagram_factory();
}
#endif
