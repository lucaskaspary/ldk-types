/*
 * CommonTypes.h
 *
 *  Created on: 22 de abr de 2016
 *      Author: lucas
 */

#ifndef COMMON_TYPES_COMMONTYPES_H_
#define COMMON_TYPES_COMMONTYPES_H_

#include <stdint.h>

namespace ldk {

// The error code for general propose
typedef int32_t ErrorCode_t;

/**
 * \brief Indicates the severity of error
 */
enum class ErrorSeverity {
    CRITICAL,
    ERROR,
    WARNING,
    UNKNOWN,
};

} // namespace ldk

#endif /* COMMON_TYPES_COMMONTYPES_H_ */
