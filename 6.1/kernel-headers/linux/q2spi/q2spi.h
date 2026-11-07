/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef _LINUX_Q2SPI_H
#define _LINUX_Q2SPI_H
#include <linux/types.h>
#include "asm-generic/errno-base.h"
enum cmd_type {
  LOCAL_REG_READ = 0,
  LOCAL_REG_WRITE = 1,
  DATA_READ = 2,
  DATA_WRITE = 3,
  HRF_READ = 4,
  HRF_WRITE = 5,
  SOFT_RESET = 6,
  ABORT = 7,
  INVALID_CMD = - EINVAL,
};
enum priority_type {
  NORMAL = 0,
  HIGH = 1,
  LOW = NORMAL,
  INVALID_TYPE = - EINVAL,
};
enum xfer_status {
  SUCCESS = 0,
  FAILURE = 1,
  OVERFLOW = 2,
  UNDERFLOW = 3,
  RESPONSE_ERROR = 4,
  CHECKSUM_ERROR = 5,
  TIMEOUT = 6,
  OTHER = 7,
  INVALID_STATUS = - EINVAL,
};
struct q2spi_request {
  void * data_buff;
  enum cmd_type cmd;
  __u32 addr;
  __u8 end_point;
  __u8 proto_ind;
  __u32 data_len;
  enum priority_type priority;
  __u8 flow_id;
  _Bool sync;
  __u32 reserved[20];
};
struct q2spi_client_request {
  void * data_buff;
  __u32 data_len;
  __u8 end_point;
  __u8 proto_ind;
  enum cmd_type cmd;
  enum xfer_status status;
  __u8 flow_id;
  __u32 reserved[20];
};
#endif
