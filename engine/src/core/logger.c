#include "logger.h"

//TODO: temporary
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

b8 initialize_logging() {
	//TODO: Implement logging initialization.
	return TRUE;
}

void shutdown_logging() {
	//TODO: Implement logging shutdown.
}

KAPI void log_output(LogLevel level, const char* message, ...) {
	const char *levels[6] = {
		"[FATAL]:  ", "[ERROR]:  ", "[WARN]:  ",
		"[INFO]:  ", "[DEBUG]:  ", "[TRACE]:  "
	};
	// b8 is_error = level < 2;

	char result[32000];
	memset(result, 0, 32000);

	__builtin_va_list arg_ptr;
	va_start(arg_ptr, message);
	vsnprintf(result, 32000, message, arg_ptr);
	va_end(arg_ptr);

	char result2[32000];
	sprintf(result2, "%s%s\n", levels[level], result);

	//TODO: platform specific output
	printf("%s", result2);
}