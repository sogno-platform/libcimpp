#ifndef ERRORCODES_HPP
#define ERRORCODES_HPP

/** \file
 * \brief This file contains all possible exit codes of the CIM parser and its
 * meaning.
 */


/** The object stack is not empty when the CIMContentHandler object is
 * destroyed.
 */
#define CIMPARSER_OBJECT_STACK_ERROR 1


/** The tag stack is not empty when the CIMContentHandler object is destroyed.*/
#define CIMPARSER_TAG_STACK_ERROR 2


/** The object container of the CIMContentHandler is not set.*/
#define CIMPARSER_OBJECT_CONTAINER_NOT_SET 3


/** The RDF map of the CIMContentHandler is not set.*/
#define CIMPARSER_RDF_MAP_NOT_SET 4


/** CIMContentHandler found CIM object without a RDF ID */
#define CIMPARSER_OBJECT_WITHOUT_RDF_ID 5


/** The object stack of CIMContentHandler is empty.*/
#define CIMPARSER_OBJECT_STACK_EMPTY 6


#endif // ERRORCODES_HPP
