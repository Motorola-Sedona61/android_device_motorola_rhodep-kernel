/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef _LINUX_IOPRIO_H
#define _LINUX_IOPRIO_H
#define IOPRIO_CLASS_SHIFT 13
#define IOPRIO_CLASS_MASK 0x07
#define IOPRIO_PRIO_MASK ((1UL << IOPRIO_CLASS_SHIFT) - 1)
#define IOPRIO_PRIO_CLASS(ioprio) (((ioprio) >> IOPRIO_CLASS_SHIFT) & IOPRIO_CLASS_MASK)
#define IOPRIO_PRIO_DATA(ioprio) ((ioprio) & IOPRIO_PRIO_MASK)
#define IOPRIO_PRIO_VALUE(__linux_class,data) ((((__linux_class) & IOPRIO_CLASS_MASK) << IOPRIO_CLASS_SHIFT) | ((data) & IOPRIO_PRIO_MASK))
enum {
  IOPRIO_CLASS_NONE,
  IOPRIO_CLASS_RT,
  IOPRIO_CLASS_BE,
  IOPRIO_CLASS_IDLE,
};
#define IOPRIO_NR_LEVELS 8
#define IOPRIO_BE_NR IOPRIO_NR_LEVELS
enum {
  IOPRIO_WHO_PROCESS = 1,
  IOPRIO_WHO_PGRP,
  IOPRIO_WHO_USER,
};
#define IOPRIO_NORM 4
#define IOPRIO_BE_NORM IOPRIO_NORM
#endif
