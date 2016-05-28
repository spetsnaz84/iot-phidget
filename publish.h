#ifndef PUBLISH_H_
#define PUBLISH_H_
#include <stdbool.h>
typedef struct {
        const char *hostAddress;
	const char *caFilename;
	const char *clientCertFilename;
	const char *clientKeyFilename;
} publishConfig_t;


bool publishInit(const publishConfig_t *config);

bool publishSingleReflection(void);

void publishDestroy(void);
#endif
