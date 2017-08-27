#ifndef CONSTS_H
#define CONSTS_H

#include <sys/types.h>

#define timestamp_t int32_t
#define api_timestamp_t int32_t
#define TSDB_ERR_TIMESTAMP_TOO_OLD -1
#define TSDB_OK 0

/* TS.CREATE Defaults */
#define RETENTION_DEFAULT_SECS          0LL
#define SAMPLES_PER_CHUNK_DEFAULT_SECS  360LL

#endif